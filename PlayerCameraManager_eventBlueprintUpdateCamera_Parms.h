#pragma once

#include "BaseDeclarations.h"
struct PlayerCameraManager_eventBlueprintUpdateCamera_Parms
{
	char __padding[0x28L];
	FVector& NewCameraLocationField() { return *GetNativePointerField<FVector*>(this, "PlayerCameraManager_eventBlueprintUpdateCamera_Parms.NewCameraLocation"); }
	FRotator& NewCameraRotationField() { return *GetNativePointerField<FRotator*>(this, "PlayerCameraManager_eventBlueprintUpdateCamera_Parms.NewCameraRotation"); }
	float& NewCameraFOVField() { return *GetNativePointerField<float*>(this, "PlayerCameraManager_eventBlueprintUpdateCamera_Parms.NewCameraFOV"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PlayerCameraManager_eventBlueprintUpdateCamera_Parms.ReturnValue"); }
};

