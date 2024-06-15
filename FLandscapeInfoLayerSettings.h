#pragma once

#include "BaseDeclarations.h"
struct FLandscapeInfoLayerSettings
{
	char __padding[0x20L];
	ULandscapeLayerInfoObject * LayerInfoObjField() { return GetNativePointerField<ULandscapeLayerInfoObject *>(this, "FLandscapeInfoLayerSettings.LayerInfoObj"); }
	FName& LayerNameField() { return *GetNativePointerField<FName*>(this, "FLandscapeInfoLayerSettings.LayerName"); }

	// Functions

};

