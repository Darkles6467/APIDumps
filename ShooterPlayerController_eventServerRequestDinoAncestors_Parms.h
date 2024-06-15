#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerRequestDinoAncestors_Parms
{
	char __padding[0x8L];
	APrimalDinoCharacter * ForDinoField() { return GetNativePointerField<APrimalDinoCharacter *>(this, "ShooterPlayerController_eventServerRequestDinoAncestors_Parms.ForDino"); }
};

