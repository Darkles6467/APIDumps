#pragma once

#include "BaseDeclarations.h"
#include "AInfo.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct AMatineeActorManager : AInfo
{
	char __padding[0x18L];
	bool& bPriorityToFloatSetsField() { return *GetNativePointerField<bool*>(this, "AMatineeActorManager.bPriorityToFloatSets"); }
	bool& bPriorityToVectorSetsField() { return *GetNativePointerField<bool*>(this, "AMatineeActorManager.bPriorityToVectorSets"); }
	bool& bTickedOrderField() { return *GetNativePointerField<bool*>(this, "AMatineeActorManager.bTickedOrder"); }

	// Functions

	void PostLoad() { NativeCall<void>(this, "AMatineeActorManager.PostLoad"); }
	void PreInitializeComponents() { NativeCall<void>(this, "AMatineeActorManager.PreInitializeComponents"); }
	void Tick(float DeltaTime) { NativeCall<void, float>(this, "AMatineeActorManager.Tick", DeltaTime); }
};

