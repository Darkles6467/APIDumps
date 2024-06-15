#pragma once

#include "BaseDeclarations.h"
struct FAutomationTestExecutionInfo
{
	char __padding[0x40L];
	bool& bSuccessfulField() { return *GetNativePointerField<bool*>(this, "FAutomationTestExecutionInfo.bSuccessful"); }
	TArray<FString>& ErrorsField() { return *GetNativePointerField<TArray<FString>*>(this, "FAutomationTestExecutionInfo.Errors"); }
	TArray<FString>& WarningsField() { return *GetNativePointerField<TArray<FString>*>(this, "FAutomationTestExecutionInfo.Warnings"); }
	TArray<FString>& LogItemsField() { return *GetNativePointerField<TArray<FString>*>(this, "FAutomationTestExecutionInfo.LogItems"); }
	float& DurationField() { return *GetNativePointerField<float*>(this, "FAutomationTestExecutionInfo.Duration"); }

	// Functions

	void Clear() { NativeCall<void>(this, "FAutomationTestExecutionInfo.Clear"); }
};

