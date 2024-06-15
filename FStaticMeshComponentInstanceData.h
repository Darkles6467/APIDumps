#pragma once

#include "BaseDeclarations.h"
#include "FComponentInstanceDataBase.h"

struct FStaticMeshComponentInstanceData : FComponentInstanceDataBase
{
	char __padding[0x88L];
	UStaticMesh * StaticMeshField() { return GetNativePointerField<UStaticMesh *>(this, "FStaticMeshComponentInstanceData.StaticMesh"); }
	TArray<FStaticMeshComponentInstanceData::FVertexColorLODData>& VertexColorLODsField() { return *GetNativePointerField<TArray<FStaticMeshComponentInstanceData::FVertexColorLODData>*>(this, "FStaticMeshComponentInstanceData.VertexColorLODs"); }
	bool& bHasCachedStaticLightingField() { return *GetNativePointerField<bool*>(this, "FStaticMeshComponentInstanceData.bHasCachedStaticLighting"); }

	// Functions

	bool ApplyVertexColorData(UStaticMeshComponent * StaticMeshComponent) { return NativeCall<bool, UStaticMeshComponent *>(this, "FStaticMeshComponentInstanceData.ApplyVertexColorData", StaticMeshComponent); }
	bool MatchesComponent(const UActorComponent * Component) { return NativeCall<bool, const UActorComponent *>(this, "FStaticMeshComponentInstanceData.MatchesComponent", Component); }
};

