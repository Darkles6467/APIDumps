#pragma once

#include "BaseDeclarations.h"
#include "UBTTaskNode.h"

struct UBTTask_BlackboardBase : UBTTaskNode
{
	char __padding[0x28L];
	FBlackboardKeySelector& BlackboardKeyField() { return *GetNativePointerField<FBlackboardKeySelector*>(this, "UBTTask_BlackboardBase.BlackboardKey"); }

	// Functions

	void InitializeFromAsset(UBehaviorTree * Asset) { NativeCall<void, UBehaviorTree *>(this, "UBTTask_BlackboardBase.InitializeFromAsset", Asset); }
};

