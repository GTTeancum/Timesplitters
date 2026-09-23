// @category TimeSplitters
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import java.io.*;
import java.util.*;
public class TSDecompile extends GhidraScript {
 public void run() throws Exception {
  String[] args=getScriptArgs();File root=new File(args[0]);root.mkdirs();
  Set<String> names=new HashSet<>(Arrays.asList(args).subList(1,args.length));
  DecompInterface d=new DecompInterface();d.openProgram(currentProgram);
  for(Function f: currentProgram.getFunctionManager().getFunctions(true)) if(names.contains(f.getName())) {
   DecompileResults r=d.decompileFunction(f,60,monitor);
   try(PrintWriter w=new PrintWriter(new File(root,"decompile_"+f.getName()+".c"))) {
    w.printf("/* Ghidra analysis, not original source. %s at %s */%n",f.getName(),f.getEntryPoint());
    if(r.decompileCompleted())w.println(r.getDecompiledFunction().getC());else w.println("/* FAILED: "+r.getErrorMessage()+" */");
   }
   println("Exported "+f.getName()+" complete="+r.decompileCompleted());
  }
  d.dispose();
 }
}
