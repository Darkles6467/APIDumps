#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClient_ReceiveBuffFromDayCycle_Parms
{
	char __padding[0x10L];
	ADayCycleManager * FromDayCycleField() { return GetNativePointerField<ADayCycleManager *>(this, "ShooterPlayerController_eventClient_ReceiveBuffFromDayCycle_Parms.FromDayCycle"); }
};

