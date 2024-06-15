#pragma once

#include "BaseDeclarations.h"
#include "UBTTaskNode.h"
#include "UBTNode.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UBTTask_MakeNoise : UBTTaskNode
{
	char __padding[0x8L];
	float& LoudnesField() { return *GetNativePointerField<float*>(this, "UBTTask_MakeNoise.Loudnes"); }

	// Functions

	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent * OwnerComp, char * NodeMemory) { return NativeCall<EBTNodeResult::Type, UBehaviorTreeComponent *, char *>(this, "UBTTask_MakeNoise.ExecuteTask", OwnerComp, NodeMemory); }
};

