#pragma once

#include "BaseDeclarations.h"
struct ShooterWeapon_eventBPGetTPVCameraOffset_Parms
{
	char __padding[0xcL];
	FVector& ReturnValueField() { return *GetNativePointerField<FVector*>(this, "ShooterWeapon_eventBPGetTPVCameraOffset_Parms.ReturnValue"); }
};

