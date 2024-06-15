#pragma once

#include "BaseDeclarations.h"
struct FStaticTerrainLayerWeightParameter
{
	char __padding[0x20L];
	FName& ParameterNameField() { return *GetNativePointerField<FName*>(this, "FStaticTerrainLayerWeightParameter.ParameterName"); }
	bool& bOverrideField() { return *GetNativePointerField<bool*>(this, "FStaticTerrainLayerWeightParameter.bOverride"); }
	FGuid& ExpressionGUIDField() { return *GetNativePointerField<FGuid*>(this, "FStaticTerrainLayerWeightParameter.ExpressionGUID"); }
	int& WeightmapIndexField() { return *GetNativePointerField<int*>(this, "FStaticTerrainLayerWeightParameter.WeightmapIndex"); }
};

