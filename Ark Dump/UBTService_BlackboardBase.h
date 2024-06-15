#pragma once

#include "BaseDeclarations.h"
#include "UBTService.h"

struct UBTService_BlackboardBase : UBTService
{
	char __padding[0x28L];
	FBlackboardKeySelector& BlackboardKeyField() { return *GetNativePointerField<FBlackboardKeySelector*>(this, "UBTService_BlackboardBase.BlackboardKey"); }

	// Functions

	void InitializeFromAsset(UBehaviorTree * Asset) { NativeCall<void, UBehaviorTree *>(this, "UBTService_BlackboardBase.InitializeFromAsset", Asset); }
};

