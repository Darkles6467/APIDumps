#pragma once

#include "BaseDeclarations.h"
#include "USceneComponent.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UPhysicsThrusterComponent : USceneComponent
{

	// Functions

	void PostLoad() { NativeCall<void>(this, "UPhysicsThrusterComponent.PostLoad"); }
};

