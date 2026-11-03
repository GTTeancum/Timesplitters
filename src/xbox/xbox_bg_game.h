#pragma once

class PS2Runtime;

// Call after loadELF has installed the game's native overrides, before running
// guest code. Entry-only observers chain the handlers already in the table;
// generated resume entries remain untouched.
void xboxBgInstallGameHooks(PS2Runtime &runtime);
