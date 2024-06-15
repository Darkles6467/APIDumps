#pragma once

#include "BaseDeclarations.h"
#include "UBTTask_BlackboardBase.h"
#include "UBTTaskNode.h"
#include "UBTNode.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UBTTask_GetRandomWanderDestination : UBTTask_BlackboardBase
{
	char __padding[0x20L];
	FVector& LocOverrideField() { return *GetNativePointerField<FVector*>(this, "UBTTask_GetRandomWanderDestination.LocOverride"); }
	float& RandomOffsetMultiplierField() { return *GetNativePointerField<float*>(this, "UBTTask_GetRandomWanderDestination.RandomOffsetMultiplier"); }
	bool& bUseRandomNegativeXDirField() { return *GetNativePointerField<bool*>(this, "UBTTask_GetRandomWanderDestination.bUseRandomNegativeXDir"); }
	bool& bOrientRandOffsetByRotationField() { return *GetNativePointerField<bool*>(this, "UBTTask_GetRandomWanderDestination.bOrientRandOffsetByRotation"); }
	FRotator& OrientRandOffsetByRotationField() { return *GetNativePointerField<FRotator*>(this, "UBTTask_GetRandomWanderDestination.OrientRandOffsetByRotation"); }

	// Functions

	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent * OwnerComp, char * NodeMemory) { return NativeCall<EBTNodeResult::Type, UBehaviorTreeComponent *, char *>(this, "UBTTask_GetRandomWanderDestination.ExecuteTask", OwnerComp, NodeMemory); }
};

