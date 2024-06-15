#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientSetControlRotation_Parms
{
	char __padding[0xcL];
	FRotator& NewRotationField() { return *GetNativePointerField<FRotator*>(this, "ShooterPlayerController_eventClientSetControlRotation_Parms.NewRotation"); }
};

