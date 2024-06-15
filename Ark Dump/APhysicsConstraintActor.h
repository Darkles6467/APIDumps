#pragma once

#include "BaseDeclarations.h"
#include "ARigidBodyBase.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct APhysicsConstraintActor : ARigidBodyBase
{
	char __padding[0x20L];
	TSubobjectPtr<UPhysicsConstraintComponent>& ConstraintCompField() { return *GetNativePointerField<TSubobjectPtr<UPhysicsConstraintComponent>*>(this, "APhysicsConstraintActor.ConstraintComp"); }

	// Functions

	void PostLoad() { NativeCall<void>(this, "APhysicsConstraintActor.PostLoad"); }
};

