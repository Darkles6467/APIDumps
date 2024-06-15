#pragma once

#include "BaseDeclarations.h"
struct FManagedBoneSetup
{
	char __padding[0x1cL];
	FName& BoneNameField() { return *GetNativePointerField<FName*>(this, "FManagedBoneSetup.BoneName"); }
	TEnumAsByte<enum ETraceType::Type>& TraceTypeField() { return *GetNativePointerField<TEnumAsByte<enum ETraceType::Type>*>(this, "FManagedBoneSetup.TraceType"); }
	float& StartOffsetField() { return *GetNativePointerField<float*>(this, "FManagedBoneSetup.StartOffset"); }
	float& LineTraceLengthField() { return *GetNativePointerField<float*>(this, "FManagedBoneSetup.LineTraceLength"); }
	float& LaunchSpeedField() { return *GetNativePointerField<float*>(this, "FManagedBoneSetup.LaunchSpeed"); }
	float& GravityOverrideField() { return *GetNativePointerField<float*>(this, "FManagedBoneSetup.GravityOverride"); }

	// Functions

	FManagedBoneSetup * operator=(const FManagedBoneSetup * __that) { return NativeCall<FManagedBoneSetup *, const FManagedBoneSetup *>(this, "FManagedBoneSetup.operator=", __that); }
};

