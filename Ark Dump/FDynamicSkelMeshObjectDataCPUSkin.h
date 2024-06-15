#pragma once

#include "BaseDeclarations.h"
#include "FDynamicSkelMeshObjectData.h"

struct FDynamicSkelMeshObjectDataCPUSkin : FDynamicSkelMeshObjectData
{
	char __padding[0x38L];
	TArray<FMatrix>& ReferenceToLocalField() { return *GetNativePointerField<TArray<FMatrix>*>(this, "FDynamicSkelMeshObjectDataCPUSkin.ReferenceToLocal"); }
	TArray<FTwoVectors>& CustomLeftRightVectorsField() { return *GetNativePointerField<TArray<FTwoVectors>*>(this, "FDynamicSkelMeshObjectDataCPUSkin.CustomLeftRightVectors"); }
	int& LODIndexField() { return *GetNativePointerField<int*>(this, "FDynamicSkelMeshObjectDataCPUSkin.LODIndex"); }
	TArray<FActiveVertexAnim>& ActiveVertexAnimsField() { return *GetNativePointerField<TArray<FActiveVertexAnim>*>(this, "FDynamicSkelMeshObjectDataCPUSkin.ActiveVertexAnims"); }
};

