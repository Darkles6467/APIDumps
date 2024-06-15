#pragma once

#include "BaseDeclarations.h"
#include "UBTService_BlackboardBase.h"
#include "UBTService.h"
#include "UBTAuxiliaryNode.h"
#include "UBTNode.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UBTService_FindTarget : UBTService_BlackboardBase
{
	char __padding[0x8L];
	bool& bDontSetField() { return *GetNativePointerField<bool*>(this, "UBTService_FindTarget.bDontSet"); }

	// Functions

	void TickNode(UBehaviorTreeComponent * OwnerComp, char * NodeMemory, float DeltaSeconds) { NativeCall<void, UBehaviorTreeComponent *, char *, float>(this, "UBTService_FindTarget.TickNode", OwnerComp, NodeMemory, DeltaSeconds); }
};

