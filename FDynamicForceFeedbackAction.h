#pragma once

#include "BaseDeclarations.h"
#include "FPendingLatentAction.h"

struct FDynamicForceFeedbackAction : FPendingLatentAction
{
	char __padding[0x50L];
	float& TotalTimeField() { return *GetNativePointerField<float*>(this, "FDynamicForceFeedbackAction.TotalTime"); }
	float& TimeElapsedField() { return *GetNativePointerField<float*>(this, "FDynamicForceFeedbackAction.TimeElapsed"); }
	FDynamicForceFeedbackDetails& ForceFeedbackDetailsField() { return *GetNativePointerField<FDynamicForceFeedbackDetails*>(this, "FDynamicForceFeedbackAction.ForceFeedbackDetails"); }
	FLatentActionInfo& LatentInfoField() { return *GetNativePointerField<FLatentActionInfo*>(this, "FDynamicForceFeedbackAction.LatentInfo"); }
	FName& ExecutionFunctionField() { return *GetNativePointerField<FName*>(this, "FDynamicForceFeedbackAction.ExecutionFunction"); }
	int& OutputLinkField() { return *GetNativePointerField<int*>(this, "FDynamicForceFeedbackAction.OutputLink"); }
	int& LatentUUIDField() { return *GetNativePointerField<int*>(this, "FDynamicForceFeedbackAction.LatentUUID"); }
	FWeakObjectPtr& CallbackTargetField() { return *GetNativePointerField<FWeakObjectPtr*>(this, "FDynamicForceFeedbackAction.CallbackTarget"); }

	// Functions

	void UpdateOperation(FLatentResponse * Response) { NativeCall<void, FLatentResponse *>(this, "FDynamicForceFeedbackAction.UpdateOperation", Response); }
};

