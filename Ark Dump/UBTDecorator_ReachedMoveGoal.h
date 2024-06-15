#pragma once

#include "BaseDeclarations.h"
#include "UBTDecorator.h"
#include "UBTAuxiliaryNode.h"
#include "UBTNode.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UBTDecorator_ReachedMoveGoal : UBTDecorator
{

	// Functions

	bool CalculateRawConditionValue(UBehaviorTreeComponent * OwnerComp, char * NodeMemory) { return NativeCall<bool, UBehaviorTreeComponent *, char *>(this, "UBTDecorator_ReachedMoveGoal.CalculateRawConditionValue", OwnerComp, NodeMemory); }
};

