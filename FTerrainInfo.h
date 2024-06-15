#pragma once

#include "BaseDeclarations.h"
struct FTerrainInfo
{
	char __padding[0x58L];
	AInstancedFoliageActor * FoliageActorField() { return GetNativePointerField<AInstancedFoliageActor *>(this, "FTerrainInfo.FoliageActor"); }
	TArray<FInstancedFoligeData>& InstancedFoligeDataField() { return *GetNativePointerField<TArray<FInstancedFoligeData>*>(this, "FTerrainInfo.InstancedFoligeData"); }
	unsigned __int16& PGPropertiesBufferSizeField() { return *GetNativePointerField<unsigned __int16*>(this, "FTerrainInfo.PGPropertiesBufferSize"); }
	TArray<unsigned char>& PGPropertiesBufferField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FTerrainInfo.PGPropertiesBuffer"); }
	int& VersionField() { return *GetNativePointerField<int*>(this, "FTerrainInfo.Version"); }
	TArray<float>& FromFloatCacheInputsField() { return *GetNativePointerField<TArray<float>*>(this, "FTerrainInfo.FromFloatCacheInputs"); }
	TArray<int>& FromFloatCacheRawOutputsField() { return *GetNativePointerField<TArray<int>*>(this, "FTerrainInfo.FromFloatCacheRawOutputs"); }

	// Functions

	FTerrainInfo * operator=(const FTerrainInfo * __that) { return NativeCall<FTerrainInfo *, const FTerrainInfo *>(this, "FTerrainInfo.operator=", __that); }
};

