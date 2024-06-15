#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UBehaviorTree : UObject
{
	char __padding[0x38L];
	UBlackboardData * BlackboardAssetField() { return GetNativePointerField<UBlackboardData *>(this, "UBehaviorTree.BlackboardAsset"); }
	TArray<FBTDecoratorLogic>& RootDecoratorOpsField() { return *GetNativePointerField<TArray<FBTDecoratorLogic>*>(this, "UBehaviorTree.RootDecoratorOps"); }
	unsigned __int16& InstanceMemorySizeField() { return *GetNativePointerField<unsigned __int16*>(this, "UBehaviorTree.InstanceMemorySize"); }

	// Functions

};

