#pragma once

#include "BaseDeclarations.h"
#include "ADestructibleActor.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ADestroyedMeshActor : ADestructibleActor
{
	char __padding[0x18L];
	float& TimeToSetNoCollisionField() { return *GetNativePointerField<float*>(this, "ADestroyedMeshActor.TimeToSetNoCollision"); }
	FName& NoCollisionProfileNameField() { return *GetNativePointerField<FName*>(this, "ADestroyedMeshActor.NoCollisionProfileName"); }
	FName& DefaultCollisionProfileNameField() { return *GetNativePointerField<FName*>(this, "ADestroyedMeshActor.DefaultCollisionProfileName"); }

	// Functions

	void BeginPlay() { NativeCall<void>(this, "ADestroyedMeshActor.BeginPlay"); }
	void SetNoCollisionProfile() { NativeCall<void>(this, "ADestroyedMeshActor.SetNoCollisionProfile"); }
};

