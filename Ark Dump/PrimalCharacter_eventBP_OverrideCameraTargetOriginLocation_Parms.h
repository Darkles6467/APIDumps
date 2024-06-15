#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBP_OverrideCameraTargetOriginLocation_Parms
{
	char __padding[0x14L];
	FVector& OutOverrideOriginField() { return *GetNativePointerField<FVector*>(this, "PrimalCharacter_eventBP_OverrideCameraTargetOriginLocation_Parms.OutOverrideOrigin"); }
	FName& WithCameraStyleField() { return *GetNativePointerField<FName*>(this, "PrimalCharacter_eventBP_OverrideCameraTargetOriginLocation_Parms.WithCameraStyle"); }
};

