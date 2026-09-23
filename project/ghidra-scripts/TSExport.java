// @category TimeSplitters
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.data.*;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.util.*;
public class TSExport extends GhidraScript {
  private String clean(String x) { return x.replace('\t',' ').replace('\n',' '); }
  public void run() throws Exception {
    File root = new File(getScriptArgs()[0]); root.mkdirs();
    int n=0,t=0,sy=0;
    try(PrintWriter w=new PrintWriter(new File(root,"ghidra-functions.tsv"))) {
      w.println("entry\tend\tsize\tname\tprototype");
      for(Function f: currentProgram.getFunctionManager().getFunctions(true)) {
        w.printf("%s\t%s\t%d\t%s\t%s%n",f.getEntryPoint(),f.getBody().getMaxAddress(),f.getBody().getNumAddresses(),clean(f.getName()),clean(f.getPrototypeString(false,false))); n++;
      }
    }
    try(PrintWriter w=new PrintWriter(new File(root,"ghidra-types.tsv"))) {
      w.println("path\tlength\tkind\tdescription");
      Iterator<DataType> it=currentProgram.getDataTypeManager().getAllDataTypes();
      while(it.hasNext()) { DataType d=it.next(); w.printf("%s\t%d\t%s\t%s%n",clean(d.getPathName()),d.getLength(),d.getClass().getSimpleName(),clean(d.getDescription())); t++;
        if(d instanceof Composite) for(DataTypeComponent c:((Composite)d).getDefinedComponents())
          w.printf("FIELD\t%d\t%d\t%s\t%s%n",c.getOffset(),c.getLength(),c.getFieldName(),clean(c.getDataType().getPathName()));
      }
    }
    try(PrintWriter w=new PrintWriter(new File(root,"ghidra-symbols.tsv"))) {
      w.println("address\ttype\tsource\tname");
      SymbolIterator it=currentProgram.getSymbolTable().getAllSymbols(true);
      while(it.hasNext()) { Symbol s=it.next(); w.printf("%s\t%s\t%s\t%s%n",s.getAddress(),s.getSymbolType(),s.getSource(),clean(s.getName(true))); sy++; }
    }
    DecompInterface d=new DecompInterface(); d.openProgram(currentProgram);
    String[] names={"_start","main","cpuMain","gsMain","fileLoad","fileLoadTo","fileSize","stream_RPCinit","stream_RPC","streamStart","streamStop","bossMainLoop"};
    for(Function f: currentProgram.getFunctionManager().getFunctions(true)) if(Arrays.asList(names).contains(f.getName())) {
      DecompileResults r=d.decompileFunction(f,45,monitor);
      try(PrintWriter w=new PrintWriter(new File(root,"decompile_"+f.getName()+".c"))) {
        w.printf("/* ANALYSIS OUTPUT, not original source. Function %s at %s */%n",f.getName(),f.getEntryPoint());
        if(r.decompileCompleted()) w.println(r.getDecompiledFunction().getC()); else w.println("/* DECOMPILE FAILED: "+r.getErrorMessage()+" */");
      }
    }
    d.dispose();
    println("TS_EXPORT_COUNTS functions="+n+" types="+t+" symbols="+sy);
  }
}
