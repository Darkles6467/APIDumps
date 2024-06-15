#pragma once

#include "BaseDeclarations.h"
#include "UBTService.h"
#include "UBTAuxiliaryNode.h"
#include "UBTNode.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UBTService_UpdateAggro : UBTService
{

	// Functions

	void TickNode(UBehaviorTreeComponent * OwnerComp, char * NodeMemory, float DeltaSeconds) { NativeCall<void, UBehaviorTreeComponent *, char *, float>(this, "UBTService_UpdateAggro.TickNode", OwnerComp, NodeMemory, DeltaSeconds); }
};

