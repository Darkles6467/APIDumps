#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientNotifyDinoKill_Parms
{
	char __padding[0x10L];
	APrimalDinoCharacter * InstigatingPawnField() { return GetNativePointerField<APrimalDinoCharacter *>(this, "ShooterPlayerController_eventClientNotifyDinoKill_Parms.InstigatingPawn"); }
};

