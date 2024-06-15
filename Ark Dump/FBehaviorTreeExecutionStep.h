#pragma once

#include "BaseDeclarations.h"
struct FBehaviorTreeExecutionStep
{
	char __padding[0x68L];
	TArray<FBehaviorTreeDebuggerInstance>& InstanceStackField() { return *GetNativePointerField<TArray<FBehaviorTreeDebuggerInstance>*>(this, "FBehaviorTreeExecutionStep.InstanceStack"); }
	float& TimeStampField() { return *GetNativePointerField<float*>(this, "FBehaviorTreeExecutionStep.TimeStamp"); }
	int& StepIndexField() { return *GetNativePointerField<int*>(this, "FBehaviorTreeExecutionStep.StepIndex"); }
};

