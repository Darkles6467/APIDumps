#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientUnlockExplorerNote_Parms
{
	char __padding[0x8L];
	int& ExplorerNoteIndexField() { return *GetNativePointerField<int*>(this, "ShooterPlayerController_eventClientUnlockExplorerNote_Parms.ExplorerNoteIndex"); }
	bool& forceShowExplorerNoteUIField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerController_eventClientUnlockExplorerNote_Parms.forceShowExplorerNoteUI"); }
};

