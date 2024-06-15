#pragma once

#include "BaseDeclarations.h"
#include "ARigidBodyBase.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct APhysicsThruster : ARigidBodyBase
{
	char __padding[0x8L];
	TSubobjectPtr<UPhysicsThrusterComponent>& ThrusterComponentField() { return *GetNativePointerField<TSubobjectPtr<UPhysicsThrusterComponent>*>(this, "APhysicsThruster.ThrusterComponent"); }

	// Functions

};

