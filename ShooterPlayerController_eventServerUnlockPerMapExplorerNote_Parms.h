#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerUnlockPerMapExplorerNote_Parms
{
	char __padding[0x8L];
	int& ExplorerNoteIndexField() { return *GetNativePointerField<int*>(this, "ShooterPlayerController_eventServerUnlockPerMapExplorerNote_Parms.ExplorerNoteIndex"); }
	bool& bAvoidBuffField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerController_eventServerUnlockPerMapExplorerNote_Parms.bAvoidBuff"); }
};

