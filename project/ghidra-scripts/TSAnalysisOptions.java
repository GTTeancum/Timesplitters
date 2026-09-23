// @category TimeSplitters
import ghidra.app.script.GhidraScript;
public class TSAnalysisOptions extends GhidraScript {
  public void run() throws Exception {
    setAnalysisOption(currentProgram, "Decompiler Parameter ID", "false");
    setAnalysisOption(currentProgram, "Demangler GNU.Use Deprecated Demangler", "true");
    println("TimeSplitters analysis: original ELF retained; decompiler parameter inference disabled.");
  }
}
