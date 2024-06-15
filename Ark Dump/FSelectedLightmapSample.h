#pragma once

#include "BaseDeclarations.h"
struct FSelectedLightmapSample
{
	char __padding[0x40L];
	int& NodeIndexField() { return *GetNativePointerField<int*>(this, "FSelectedLightmapSample.NodeIndex"); }
	FVector& PositionField() { return *GetNativePointerField<FVector*>(this, "FSelectedLightmapSample.Position"); }
	int& LocalXField() { return *GetNativePointerField<int*>(this, "FSelectedLightmapSample.LocalX"); }
	int& LocalYField() { return *GetNativePointerField<int*>(this, "FSelectedLightmapSample.LocalY"); }
	int& MappingSizeXField() { return *GetNativePointerField<int*>(this, "FSelectedLightmapSample.MappingSizeX"); }
	int& MappingSizeYField() { return *GetNativePointerField<int*>(this, "FSelectedLightmapSample.MappingSizeY"); }
	int& LightmapXField() { return *GetNativePointerField<int*>(this, "FSelectedLightmapSample.LightmapX"); }
	int& LightmapYField() { return *GetNativePointerField<int*>(this, "FSelectedLightmapSample.LightmapY"); }
	FColor& OriginalColorField() { return *GetNativePointerField<FColor*>(this, "FSelectedLightmapSample.OriginalColor"); }
};

