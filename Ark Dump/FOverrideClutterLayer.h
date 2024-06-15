#pragma once

#include "BaseDeclarations.h"
struct FOverrideClutterLayer
{
	char __padding[0x18L];
	int& LayerIDField() { return *GetNativePointerField<int*>(this, "FOverrideClutterLayer.LayerID"); }
	TArray<FClutterData>& ClutterLayersField() { return *GetNativePointerField<TArray<FClutterData>*>(this, "FOverrideClutterLayer.ClutterLayers"); }

	// Functions

};

