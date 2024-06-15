#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventOnSetMountedDino_Parms
{
	char __padding[0x10L];
	APrimalDinoCharacter * MountDinoField() { return GetNativePointerField<APrimalDinoCharacter *>(this, "PrimalDinoCharacter_eventOnSetMountedDino_Parms.MountDino"); }
};

