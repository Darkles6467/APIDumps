#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FAIRequestID.h"

struct UAIAsyncTaskBlueprintProxy : UObject
{
	char __padding[0x38L];
	FAIRequestID& MoveRequestIdField() { return *GetNativePointerField<FAIRequestID*>(this, "UAIAsyncTaskBlueprintProxy.MoveRequestId"); }
	TWeakObjectPtr<UWorld>& MyWorldField() { return *GetNativePointerField<TWeakObjectPtr<UWorld>*>(this, "UAIAsyncTaskBlueprintProxy.MyWorld"); }

	// Functions

	void BeginDestroy() { NativeCall<void>(this, "UAIAsyncTaskBlueprintProxy.BeginDestroy"); }
	void OnMoveCompleted(FAIRequestID RequestID, EPathFollowingResult::Type MovementResult) { NativeCall<void, FAIRequestID, EPathFollowingResult::Type>(this, "UAIAsyncTaskBlueprintProxy.OnMoveCompleted", RequestID, MovementResult); }
	void OnNoPath() { NativeCall<void>(this, "UAIAsyncTaskBlueprintProxy.OnNoPath"); }
};

