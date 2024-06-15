#pragma once

#include "BaseDeclarations.h"
#include "ACharacter.h"
#include "APawn.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct AEQSTestingPawn : ACharacter
{
	char __padding[0x50L];
	UEnvQuery * QueryTemplateField() { return GetNativePointerField<UEnvQuery *>(this, "AEQSTestingPawn.QueryTemplate"); }
	TArray<FEnvNamedValue>& QueryParamsField() { return *GetNativePointerField<TArray<FEnvNamedValue>*>(this, "AEQSTestingPawn.QueryParams"); }
	float& TimeLimitPerStepField() { return *GetNativePointerField<float*>(this, "AEQSTestingPawn.TimeLimitPerStep"); }
	int& StepToDebugDrawField() { return *GetNativePointerField<int*>(this, "AEQSTestingPawn.StepToDebugDraw"); }
	TEnumAsByte<enum EEnvQueryRunMode::Type>& QueryingModeField() { return *GetNativePointerField<TEnumAsByte<enum EEnvQueryRunMode::Type>*>(this, "AEQSTestingPawn.QueryingMode"); }
	TSharedPtr<FEnvQueryInstance,0>& QueryInstanceField() { return *GetNativePointerField<TSharedPtr<FEnvQueryInstance,0>*>(this, "AEQSTestingPawn.QueryInstance"); }
	TArray<FEnvQueryInstance>& StepResultsField() { return *GetNativePointerField<TArray<FEnvQueryInstance>*>(this, "AEQSTestingPawn.StepResults"); }

	// Functions

	bool GetShouldDebugDrawLabels() { return NativeCall<bool>(this, "AEQSTestingPawn.GetShouldDebugDrawLabels"); }
	bool GetShouldDrawFailedItems() { return NativeCall<bool>(this, "AEQSTestingPawn.GetShouldDrawFailedItems"); }
	void MakeOneStep() { NativeCall<void>(this, "AEQSTestingPawn.MakeOneStep"); }
	void PostLoad() { NativeCall<void>(this, "AEQSTestingPawn.PostLoad"); }
	void Reset() { NativeCall<void>(this, "AEQSTestingPawn.Reset"); }
	void RunEQSQuery() { NativeCall<void>(this, "AEQSTestingPawn.RunEQSQuery"); }
};

