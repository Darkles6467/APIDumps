#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerRequestDinoCharStats_Parms
{
	char __padding[0x8L];
	APrimalDinoCharacter * theDinoCharField() { return GetNativePointerField<APrimalDinoCharacter *>(this, "ShooterPlayerController_eventServerRequestDinoCharStats_Parms.theDinoChar"); }
};

