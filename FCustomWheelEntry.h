#pragma once

#include "BaseDeclarations.h"
struct FCustomWheelEntry
{
	char __padding[0x68L];
	FString& TargetFunctionNameField() { return *GetNativePointerField<FString*>(this, "FCustomWheelEntry.TargetFunctionName"); }
	FString& LabelField() { return *GetNativePointerField<FString*>(this, "FCustomWheelEntry.Label"); }
	int& PriorityField() { return *GetNativePointerField<int*>(this, "FCustomWheelEntry.Priority"); }
	float& ActivationTimeField() { return *GetNativePointerField<float*>(this, "FCustomWheelEntry.ActivationTime"); }
	int& CustomDataIntField() { return *GetNativePointerField<int*>(this, "FCustomWheelEntry.CustomDataInt"); }
	FName& CustomDataNameField() { return *GetNativePointerField<FName*>(this, "FCustomWheelEntry.CustomDataName"); }
	FLinearColor& TextColorOverrideField() { return *GetNativePointerField<FLinearColor*>(this, "FCustomWheelEntry.TextColorOverride"); }
	FLinearColor& BackgroundColorOverrideField() { return *GetNativePointerField<FLinearColor*>(this, "FCustomWheelEntry.BackgroundColorOverride"); }

	// Functions

	FCustomWheelEntry * operator=(const FCustomWheelEntry * __that) { return NativeCall<FCustomWheelEntry *, const FCustomWheelEntry *>(this, "FCustomWheelEntry.operator=", __that); }
};

