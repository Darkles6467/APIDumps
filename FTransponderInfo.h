#pragma once

#include "BaseDeclarations.h"
struct FTransponderInfo
{
	char __padding[0x28L];
	FString& TransNameField() { return *GetNativePointerField<FString*>(this, "FTransponderInfo.TransName"); }
	FVector& TransLocationField() { return *GetNativePointerField<FVector*>(this, "FTransponderInfo.TransLocation"); }
	float& FrequencyField() { return *GetNativePointerField<float*>(this, "FTransponderInfo.Frequency"); }
	FColor& DrawingColorField() { return *GetNativePointerField<FColor*>(this, "FTransponderInfo.DrawingColor"); }

	// Functions

	FTransponderInfo * operator=(const FTransponderInfo * __that) { return NativeCall<FTransponderInfo *, const FTransponderInfo *>(this, "FTransponderInfo.operator=", __that); }
};

