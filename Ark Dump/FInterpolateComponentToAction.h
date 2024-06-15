#pragma once

#include "BaseDeclarations.h"
#include "FPendingLatentAction.h"

struct FInterpolateComponentToAction : FPendingLatentAction
{
	char __padding[0x68L];
	float& TotalTimeField() { return *GetNativePointerField<float*>(this, "FInterpolateComponentToAction.TotalTime"); }
	float& TimeElapsedField() { return *GetNativePointerField<float*>(this, "FInterpolateComponentToAction.TimeElapsed"); }
	bool& bInterpolatingField() { return *GetNativePointerField<bool*>(this, "FInterpolateComponentToAction.bInterpolating"); }
	FName& ExecutionFunctionField() { return *GetNativePointerField<FName*>(this, "FInterpolateComponentToAction.ExecutionFunction"); }
	int& OutputLinkField() { return *GetNativePointerField<int*>(this, "FInterpolateComponentToAction.OutputLink"); }
	FWeakObjectPtr& CallbackTargetField() { return *GetNativePointerField<FWeakObjectPtr*>(this, "FInterpolateComponentToAction.CallbackTarget"); }
	bool& bInterpRotationField() { return *GetNativePointerField<bool*>(this, "FInterpolateComponentToAction.bInterpRotation"); }
	FRotator& InitialRotationField() { return *GetNativePointerField<FRotator*>(this, "FInterpolateComponentToAction.InitialRotation"); }
	FRotator& TargetRotationField() { return *GetNativePointerField<FRotator*>(this, "FInterpolateComponentToAction.TargetRotation"); }
	bool& bInterpLocationField() { return *GetNativePointerField<bool*>(this, "FInterpolateComponentToAction.bInterpLocation"); }
	FVector& InitialLocationField() { return *GetNativePointerField<FVector*>(this, "FInterpolateComponentToAction.InitialLocation"); }
	FVector& TargetLocationField() { return *GetNativePointerField<FVector*>(this, "FInterpolateComponentToAction.TargetLocation"); }
	bool& bEaseInField() { return *GetNativePointerField<bool*>(this, "FInterpolateComponentToAction.bEaseIn"); }
	bool& bEaseOutField() { return *GetNativePointerField<bool*>(this, "FInterpolateComponentToAction.bEaseOut"); }
	bool& bSweepField() { return *GetNativePointerField<bool*>(this, "FInterpolateComponentToAction.bSweep"); }

	// Functions

	void UpdateOperation(FLatentResponse * Response) { NativeCall<void, FLatentResponse *>(this, "FInterpolateComponentToAction.UpdateOperation", Response); }
};

