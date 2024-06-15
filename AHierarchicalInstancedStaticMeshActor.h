#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct AHierarchicalInstancedStaticMeshActor : AActor
{
	char __padding[0x8L];
	TSubobjectPtr<UHierarchicalInstancedStaticMeshComponent>& InstancedStaticMeshComponentField() { return *GetNativePointerField<TSubobjectPtr<UHierarchicalInstancedStaticMeshComponent>*>(this, "AHierarchicalInstancedStaticMeshActor.InstancedStaticMeshComponent"); }

	// Functions

};

