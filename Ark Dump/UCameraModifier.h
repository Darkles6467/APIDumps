#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"

struct UCameraModifier : UObject
{
	char __padding[0x30L];
	char& PriorityField() { return *GetNativePointerField<char*>(this, "UCameraModifier.Priority"); }
	float& AlphaInTimeField() { return *GetNativePointerField<float*>(this, "UCameraModifier.AlphaInTime"); }
	float& AlphaOutTimeField() { return *GetNativePointerField<float*>(this, "UCameraModifier.AlphaOutTime"); }
	float& AlphaField() { return *GetNativePointerField<float*>(this, "UCameraModifier.Alpha"); }
	float& TargetAlphaField() { return *GetNativePointerField<float*>(this, "UCameraModifier.TargetAlpha"); }

	// Functions

	bool AddCameraModifier(APlayerCameraManager * Camera) { return NativeCall<bool, APlayerCameraManager *>(this, "UCameraModifier.AddCameraModifier", Camera); }
	void DisableModifier(bool bImmediate) { NativeCall<void, bool>(this, "UCameraModifier.DisableModifier", bImmediate); }
	void EnableModifier() { NativeCall<void>(this, "UCameraModifier.EnableModifier"); }
	float GetTargetAlpha(APlayerCameraManager * Camera) { return NativeCall<float, APlayerCameraManager *>(this, "UCameraModifier.GetTargetAlpha", Camera); }
	void Init(APlayerCameraManager * Camera) { NativeCall<void, APlayerCameraManager *>(this, "UCameraModifier.Init", Camera); }
	bool ModifyCamera(APlayerCameraManager * Camera, float DeltaTime, FMinimalViewInfo * InOutPOV, bool IgnoredBasedOnModifiers) { return NativeCall<bool, APlayerCameraManager *, float, FMinimalViewInfo *, bool>(this, "UCameraModifier.ModifyCamera", Camera, DeltaTime, InOutPOV, IgnoredBasedOnModifiers); }
	bool RemoveCameraModifier(APlayerCameraManager * Camera) { return NativeCall<bool, APlayerCameraManager *>(this, "UCameraModifier.RemoveCameraModifier", Camera); }
	void ToggleModifier() { NativeCall<void>(this, "UCameraModifier.ToggleModifier"); }
	void UpdateAlpha(APlayerCameraManager * Camera, float DeltaTime) { NativeCall<void, APlayerCameraManager *, float>(this, "UCameraModifier.UpdateAlpha", Camera, DeltaTime); }
};

