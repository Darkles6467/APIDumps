#pragma once

#include "BaseDeclarations.h"
struct FLightMapData2D
{
	char __padding[0x30L];
	TArray<FGuid>& LightGuidsField() { return *GetNativePointerField<TArray<FGuid>*>(this, "FLightMapData2D.LightGuids"); }
	TChunkedArray<FLightSample,16384>& DataField() { return *GetNativePointerField<TChunkedArray<FLightSample,16384>*>(this, "FLightMapData2D.Data"); }
	unsigned int& SizeXField() { return *GetNativePointerField<unsigned int*>(this, "FLightMapData2D.SizeX"); }
	unsigned int& SizeYField() { return *GetNativePointerField<unsigned int*>(this, "FLightMapData2D.SizeY"); }
};

