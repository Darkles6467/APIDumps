#pragma once

#include "BaseDeclarations.h"
struct FStaticMeshRenderData
{
	char __padding[0x90L];
	TArray<FStaticMeshStreamingData>& LODStreamingDataField() { return *GetNativePointerField<TArray<FStaticMeshStreamingData>*>(this, "FStaticMeshRenderData.LODStreamingData"); }
	TIndirectArray<FStaticMeshLODResources>& LODResourcesField() { return *GetNativePointerField<TIndirectArray<FStaticMeshLODResources>*>(this, "FStaticMeshRenderData.LODResources"); }
	FieldArray<float, 10> ScreenSizeField() { return {this, "FStaticMeshRenderData.ScreenSize"}; }
	FieldArray<float, 8> StreamingTextureFactorsField() { return {this, "FStaticMeshRenderData.StreamingTextureFactors"}; }
	float& MaxStreamingTextureFactorField() { return *GetNativePointerField<float*>(this, "FStaticMeshRenderData.MaxStreamingTextureFactor"); }
	FBoxSphereBounds& BoundsField() { return *GetNativePointerField<FBoxSphereBounds*>(this, "FStaticMeshRenderData.Bounds"); }
	bool& bLODsShareStaticLightingField() { return *GetNativePointerField<bool*>(this, "FStaticMeshRenderData.bLODsShareStaticLighting"); }
	bool& bReducedBySimplygonField() { return *GetNativePointerField<bool*>(this, "FStaticMeshRenderData.bReducedBySimplygon"); }

	// Functions

	unsigned __int64 GetResourceSize() { return NativeCall<unsigned __int64>(this, "FStaticMeshRenderData.GetResourceSize"); }
	void InitResources(UStaticMesh * Owner) { NativeCall<void, UStaticMesh *>(this, "FStaticMeshRenderData.InitResources", Owner); }
	void ReleaseResources() { NativeCall<void>(this, "FStaticMeshRenderData.ReleaseResources"); }
	void Serialize(FArchive * Ar, UStaticMesh * Owner, bool bCooked) { NativeCall<void, FArchive *, UStaticMesh *, bool>(this, "FStaticMeshRenderData.Serialize", Ar, Owner, bCooked); }
};

