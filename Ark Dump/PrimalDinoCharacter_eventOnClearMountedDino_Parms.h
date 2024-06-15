#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventOnClearMountedDino_Parms
{
	char __padding[0x10L];
	APrimalDinoCharacter * UnmountedDinoField() { return GetNativePointerField<APrimalDinoCharacter *>(this, "PrimalDinoCharacter_eventOnClearMountedDino_Parms.UnmountedDino"); }
};

