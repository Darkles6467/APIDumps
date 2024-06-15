#pragma once

#include "BaseDeclarations.h"
struct FLandscapeLayerStruct
{
	char __padding[0x8L];
	ULandscapeLayerInfoObject * LayerInfoObjField() { return GetNativePointerField<ULandscapeLayerInfoObject *>(this, "FLandscapeLayerStruct.LayerInfoObj"); }

	// Functions

};

