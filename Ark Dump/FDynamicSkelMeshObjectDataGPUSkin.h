#pragma once

#include "BaseDeclarations.h"
#include "FDynamicSkelMeshObjectData.h"

struct FDynamicSkelMeshObjectDataGPUSkin : FDynamicSkelMeshObjectData
{
	char __padding[0x58L];
	TArray<FMatrix>& ReferenceToLocalField() { return *GetNativePointerField<TArray<FMatrix>*>(this, "FDynamicSkelMeshObjectDataGPUSkin.ReferenceToLocal"); }
	TArray<FTwoVectors>& CustomLeftRightVectorsField() { return *GetNativePointerField<TArray<FTwoVectors>*>(this, "FDynamicSkelMeshObjectDataGPUSkin.CustomLeftRightVectors"); }
	int& LODIndexField() { return *GetNativePointerField<int*>(this, "FDynamicSkelMeshObjectDataGPUSkin.LODIndex"); }
	TArray<FActiveVertexAnim>& ActiveVertexAnimsField() { return *GetNativePointerField<TArray<FActiveVertexAnim>*>(this, "FDynamicSkelMeshObjectDataGPUSkin.ActiveVertexAnims"); }
	int& NumWeightedActiveVertexAnimsField() { return *GetNativePointerField<int*>(this, "FDynamicSkelMeshObjectDataGPUSkin.NumWeightedActiveVertexAnims"); }
	TArray<FClothSimulData>& ClothSimulUpdateDataField() { return *GetNativePointerField<TArray<FClothSimulData>*>(this, "FDynamicSkelMeshObjectDataGPUSkin.ClothSimulUpdateData"); }
	float& ClothBlendWeightField() { return *GetNativePointerField<float*>(this, "FDynamicSkelMeshObjectDataGPUSkin.ClothBlendWeight"); }
};

