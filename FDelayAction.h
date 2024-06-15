#pragma once

#include "BaseDeclarations.h"
#include "FPendingLatentAction.h"

struct FDelayAction : FPendingLatentAction
{
	char __padding[0x18L];
	float& TimeRemainingField() { return *GetNativePointerField<float*>(this, "FDelayAction.TimeRemaining"); }
	FName& ExecutionFunctionField() { return *GetNativePointerField<FName*>(this, "FDelayAction.ExecutionFunction"); }
	int& OutputLinkField() { return *GetNativePointerField<int*>(this, "FDelayAction.OutputLink"); }
	FWeakObjectPtr& CallbackTargetField() { return *GetNativePointerField<FWeakObjectPtr*>(this, "FDelayAction.CallbackTarget"); }

	// Functions

	void UpdateOperation(FLatentResponse * Response) { NativeCall<void, FLatentResponse *>(this, "FDelayAction.UpdateOperation", Response); }
};

