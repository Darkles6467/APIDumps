#pragma once

#include "BaseDeclarations.h"
#include "FTickableGameObject.h"
#include "FTickableObjectBase.h"

struct FRecastTickHelper : FTickableGameObject
{
	char __padding[0x8L];
	ARecastNavMesh * OwnerField() { return GetNativePointerField<ARecastNavMesh *>(this, "FRecastTickHelper.Owner"); }

	// Functions

	void Tick(float DeltaTime) { NativeCall<void, float>(this, "FRecastTickHelper.Tick", DeltaTime); }
};

