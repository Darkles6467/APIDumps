#pragma once

#include "BaseDeclarations.h"
struct FCustomWheelSettings
{
	char __padding[0x40L];
	FString& CenterTextField() { return *GetNativePointerField<FString*>(this, "FCustomWheelSettings.CenterText"); }
	FLinearColor& CenterTextColorOverrideField() { return *GetNativePointerField<FLinearColor*>(this, "FCustomWheelSettings.CenterTextColorOverride"); }
	FVector2D& CenterImageSizeField() { return *GetNativePointerField<FVector2D*>(this, "FCustomWheelSettings.CenterImageSize"); }
	int& MinNumDivisionsField() { return *GetNativePointerField<int*>(this, "FCustomWheelSettings.MinNumDivisions"); }
	float& InnerDistanceField() { return *GetNativePointerField<float*>(this, "FCustomWheelSettings.InnerDistance"); }
	float& OuterDistanceField() { return *GetNativePointerField<float*>(this, "FCustomWheelSettings.OuterDistance"); }

	// Functions

	FCustomWheelSettings * operator=(const FCustomWheelSettings * __that) { return NativeCall<FCustomWheelSettings *, const FCustomWheelSettings *>(this, "FCustomWheelSettings.operator=", __that); }
};

