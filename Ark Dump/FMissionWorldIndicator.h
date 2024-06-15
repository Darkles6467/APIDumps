#pragma once

#include "BaseDeclarations.h"
struct FMissionWorldIndicator
{
	char __padding[0xa8L];
	FName& DescriptionTagStringField() { return *GetNativePointerField<FName*>(this, "FMissionWorldIndicator.DescriptionTagString"); }
	FVector& WorldPositionField() { return *GetNativePointerField<FVector*>(this, "FMissionWorldIndicator.WorldPosition"); }
	int& PriorityField() { return *GetNativePointerField<int*>(this, "FMissionWorldIndicator.Priority"); }
	FLinearColor& IndicatorColorField() { return *GetNativePointerField<FLinearColor*>(this, "FMissionWorldIndicator.IndicatorColor"); }
	FLinearColor& IconColorField() { return *GetNativePointerField<FLinearColor*>(this, "FMissionWorldIndicator.IconColor"); }
	float& ProgressValueField() { return *GetNativePointerField<float*>(this, "FMissionWorldIndicator.ProgressValue"); }
	FString& ProgressLabelTextField() { return *GetNativePointerField<FString*>(this, "FMissionWorldIndicator.ProgressLabelText"); }
	FLinearColor& ProgressBarColorField() { return *GetNativePointerField<FLinearColor*>(this, "FMissionWorldIndicator.ProgressBarColor"); }
	FLinearColor& ProgressLabelColorField() { return *GetNativePointerField<FLinearColor*>(this, "FMissionWorldIndicator.ProgressLabelColor"); }

	// Functions

	FMissionWorldIndicator * operator=(const FMissionWorldIndicator * __that) { return NativeCall<FMissionWorldIndicator *, const FMissionWorldIndicator *>(this, "FMissionWorldIndicator.operator=", __that); }
	bool operator==(const FMissionWorldIndicator * Rhs) { return NativeCall<bool, const FMissionWorldIndicator *>(this, "FMissionWorldIndicator.operator==", Rhs); }
	int GetHash() { return NativeCall<int>(this, "FMissionWorldIndicator.GetHash"); }
};

