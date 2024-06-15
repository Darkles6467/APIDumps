#pragma once

#include "BaseDeclarations.h"
struct FApexClothPhysToRenderVertData
{
	char __padding[0x40L];
	FVector4& PositionBaryCoordsAndDistField() { return *GetNativePointerField<FVector4*>(this, "FApexClothPhysToRenderVertData.PositionBaryCoordsAndDist"); }
	FVector4& NormalBaryCoordsAndDistField() { return *GetNativePointerField<FVector4*>(this, "FApexClothPhysToRenderVertData.NormalBaryCoordsAndDist"); }
	FVector4& TangentBaryCoordsAndDistField() { return *GetNativePointerField<FVector4*>(this, "FApexClothPhysToRenderVertData.TangentBaryCoordsAndDist"); }
	FieldArray<unsigned __int16, 4> SimulMeshVertIndicesField() { return {this, "FApexClothPhysToRenderVertData.SimulMeshVertIndices"}; }
	FieldArray<unsigned int, 2> PaddingField() { return {this, "FApexClothPhysToRenderVertData.Padding"}; }
};

