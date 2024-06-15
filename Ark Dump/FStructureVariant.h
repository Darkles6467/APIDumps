#pragma once

#include "BaseDeclarations.h"
struct FStructureVariant
{
	char __padding[0x70L];
	FString& VariantNameField() { return *GetNativePointerField<FString*>(this, "FStructureVariant.VariantName"); }
	bool& bUseBPAllowSwitchToVariantField() { return *GetNativePointerField<bool*>(this, "FStructureVariant.bUseBPAllowSwitchToVariant"); }
	UStaticMesh * MeshField() { return GetNativePointerField<UStaticMesh *>(this, "FStructureVariant.Mesh"); }
	bool& bUseMeshTransformField() { return *GetNativePointerField<bool*>(this, "FStructureVariant.bUseMeshTransform"); }
	FTransform& MeshTransformField() { return *GetNativePointerField<FTransform*>(this, "FStructureVariant.MeshTransform"); }
	UDestructibleMesh * DestroyedMeshOverrideField() { return GetNativePointerField<UDestructibleMesh *>(this, "FStructureVariant.DestroyedMeshOverride"); }

	// Functions

	FStructureVariant * operator=(const FStructureVariant * __that) { return NativeCall<FStructureVariant *, const FStructureVariant *>(this, "FStructureVariant.operator=", __that); }
};

