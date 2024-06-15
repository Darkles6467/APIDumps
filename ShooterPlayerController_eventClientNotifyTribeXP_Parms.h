#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientNotifyTribeXP_Parms
{
	char __padding[0x4L];
	float& HowMuchField() { return *GetNativePointerField<float*>(this, "ShooterPlayerController_eventClientNotifyTribeXP_Parms.HowMuch"); }
};

