#pragma once

#include "BaseDeclarations.h"
struct FDynamicUpdateVertexInfluencesData
{
	char __padding[0x20L];
	int& LODIdxField() { return *GetNativePointerField<int*>(this, "FDynamicUpdateVertexInfluencesData.LODIdx"); }
	TArray<FBoneIndexPair>& BonePairsField() { return *GetNativePointerField<TArray<FBoneIndexPair>*>(this, "FDynamicUpdateVertexInfluencesData.BonePairs"); }
	bool& bResetInfluencesField() { return *GetNativePointerField<bool*>(this, "FDynamicUpdateVertexInfluencesData.bResetInfluences"); }
};

