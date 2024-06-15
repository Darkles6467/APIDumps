#pragma once

#include "BaseDeclarations.h"
struct FStaticParameterSet
{
	char __padding[0x30L];
	TArray<FStaticSwitchParameter>& StaticSwitchParametersField() { return *GetNativePointerField<TArray<FStaticSwitchParameter>*>(this, "FStaticParameterSet.StaticSwitchParameters"); }
	TArray<FStaticComponentMaskParameter>& StaticComponentMaskParametersField() { return *GetNativePointerField<TArray<FStaticComponentMaskParameter>*>(this, "FStaticParameterSet.StaticComponentMaskParameters"); }
	TArray<FStaticTerrainLayerWeightParameter>& TerrainLayerWeightParametersField() { return *GetNativePointerField<TArray<FStaticTerrainLayerWeightParameter>*>(this, "FStaticParameterSet.TerrainLayerWeightParameters"); }

	// Functions

	bool operator==(const FStaticParameterSet * ReferenceSet) { return NativeCall<bool, const FStaticParameterSet *>(this, "FStaticParameterSet.operator==", ReferenceSet); }
	void AppendKeyString(FString * KeyString) { NativeCall<void, FString *>(this, "FStaticParameterSet.AppendKeyString", KeyString); }
	void UpdateHash(FSHA1 * HashState) { NativeCall<void, FSHA1 *>(this, "FStaticParameterSet.UpdateHash", HashState); }
};

