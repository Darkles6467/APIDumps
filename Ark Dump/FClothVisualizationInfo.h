#pragma once

#include "BaseDeclarations.h"
struct FClothVisualizationInfo
{
	char __padding[0x58L];
	TArray<FVector>& ClothPhysicalMeshVerticesField() { return *GetNativePointerField<TArray<FVector>*>(this, "FClothVisualizationInfo.ClothPhysicalMeshVertices"); }
	TArray<FVector>& ClothPhysicalMeshNormalsField() { return *GetNativePointerField<TArray<FVector>*>(this, "FClothVisualizationInfo.ClothPhysicalMeshNormals"); }
	TArray<unsigned int>& ClothPhysicalMeshIndicesField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "FClothVisualizationInfo.ClothPhysicalMeshIndices"); }
	TArray<FClothConstrainCoeff>& ClothConstrainCoeffsField() { return *GetNativePointerField<TArray<FClothConstrainCoeff>*>(this, "FClothVisualizationInfo.ClothConstrainCoeffs"); }
	TArray<FClothBoneWeightsInfo>& ClothPhysicalMeshBoneWeightsInfoField() { return *GetNativePointerField<TArray<FClothBoneWeightsInfo>*>(this, "FClothVisualizationInfo.ClothPhysicalMeshBoneWeightsInfo"); }
	char& NumMaxBoneInfluencesField() { return *GetNativePointerField<char*>(this, "FClothVisualizationInfo.NumMaxBoneInfluences"); }
	float& MaximumMaxDistanceField() { return *GetNativePointerField<float*>(this, "FClothVisualizationInfo.MaximumMaxDistance"); }
};

