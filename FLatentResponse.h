#pragma once

#include "BaseDeclarations.h"
struct FLatentResponse
{
	char __padding[0x68L];
	bool& bRemoveActionField() { return *GetNativePointerField<bool*>(this, "FLatentResponse.bRemoveAction"); }
	float& DeltaTimeField() { return *GetNativePointerField<float*>(this, "FLatentResponse.DeltaTime"); }

	// Functions

	FLatentResponse * FinishAndTriggerIf(bool Condition, FName ExecutionFunction, int LinkID InCallbackTarget) { return NativeCall<FLatentResponse *, bool, FName, int>(this, "FLatentResponse.FinishAndTriggerIf", Condition, ExecutionFunction, LinkID, InCallbackTarget); }
};

