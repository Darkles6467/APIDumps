#pragma once

#include "BaseDeclarations.h"
#include "ARigidBodyBase.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ARadialForceActor : ARigidBodyBase
{
	char __padding[0x8L];
	TSubobjectPtr<URadialForceComponent>& ForceComponentField() { return *GetNativePointerField<TSubobjectPtr<URadialForceComponent>*>(this, "ARadialForceActor.ForceComponent"); }

	// Functions

	void DisableForce() { NativeCall<void>(this, "ARadialForceActor.DisableForce"); }
	void EnableForce() { NativeCall<void>(this, "ARadialForceActor.EnableForce"); }
	void FireImpulse() { NativeCall<void>(this, "ARadialForceActor.FireImpulse"); }
	void ToggleForce() { NativeCall<void>(this, "ARadialForceActor.ToggleForce"); }
};

