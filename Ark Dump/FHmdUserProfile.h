#pragma once

#include "BaseDeclarations.h"
struct FHmdUserProfile
{
	char __padding[0x48L];
	FString& NameField() { return *GetNativePointerField<FString*>(this, "FHmdUserProfile.Name"); }
	FString& GenderField() { return *GetNativePointerField<FString*>(this, "FHmdUserProfile.Gender"); }
	float& PlayerHeightField() { return *GetNativePointerField<float*>(this, "FHmdUserProfile.PlayerHeight"); }
	float& EyeHeightField() { return *GetNativePointerField<float*>(this, "FHmdUserProfile.EyeHeight"); }
	float& IPDField() { return *GetNativePointerField<float*>(this, "FHmdUserProfile.IPD"); }
	FVector2D& NeckToEyeDistanceField() { return *GetNativePointerField<FVector2D*>(this, "FHmdUserProfile.NeckToEyeDistance"); }
	TArray<FHmdUserProfileField>& ExtraFieldsField() { return *GetNativePointerField<TArray<FHmdUserProfileField>*>(this, "FHmdUserProfile.ExtraFields"); }

	// Functions

};

