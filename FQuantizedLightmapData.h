#pragma once

#include "BaseDeclarations.h"
struct FQuantizedLightmapData
{
	char __padding[0xb0L];
	unsigned int& SizeXField() { return *GetNativePointerField<unsigned int*>(this, "FQuantizedLightmapData.SizeX"); }
	unsigned int& SizeYField() { return *GetNativePointerField<unsigned int*>(this, "FQuantizedLightmapData.SizeY"); }
	FieldArray<float[4][4], 44> ScaleField() { return {this, "FQuantizedLightmapData.Scale"}; }
	FieldArray<float[4][4], 44> AddField() { return {this, "FQuantizedLightmapData.Add"}; }
	TArray<FGuid>& LightGuidsField() { return *GetNativePointerField<TArray<FGuid>*>(this, "FQuantizedLightmapData.LightGuids"); }
	bool& bHasSkyShadowingField() { return *GetNativePointerField<bool*>(this, "FQuantizedLightmapData.bHasSkyShadowing"); }
};

