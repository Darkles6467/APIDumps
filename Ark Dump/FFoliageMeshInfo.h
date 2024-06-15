#pragma once

#include "BaseDeclarations.h"
struct FFoliageMeshInfo
{
	char __padding[0xc0L];
	UHierarchicalInstancedStaticMeshComponent * ComponentField() { return GetNativePointerField<UHierarchicalInstancedStaticMeshComponent *>(this, "FFoliageMeshInfo.Component"); }
	TArray<FFoliageInstance>& InstancesField() { return *GetNativePointerField<TArray<FFoliageInstance>*>(this, "FFoliageMeshInfo.Instances"); }
	TUniquePtr<FFoliageInstanceHash>& InstanceHashField() { return *GetNativePointerField<TUniquePtr<FFoliageInstanceHash>*>(this, "FFoliageMeshInfo.InstanceHash"); }

	// Functions

	void AddInstance(AInstancedFoliageActor * InIFA, UFoliageType * InSettings, const FFoliageInstance * InNewInstance, UHierarchicalInstancedStaticMeshComponent * InComponent) { NativeCall<void, AInstancedFoliageActor *, UFoliageType *, const FFoliageInstance *, UHierarchicalInstancedStaticMeshComponent *>(this, "FFoliageMeshInfo.AddInstance", InIFA, InSettings, InNewInstance, InComponent); }
};

