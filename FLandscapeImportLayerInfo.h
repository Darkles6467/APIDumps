#pragma once

#include "BaseDeclarations.h"
struct FLandscapeImportLayerInfo
{
	char __padding[0x20L];
	FName& LayerNameField() { return *GetNativePointerField<FName*>(this, "FLandscapeImportLayerInfo.LayerName"); }
	ULandscapeLayerInfoObject * LayerInfoField() { return GetNativePointerField<ULandscapeLayerInfoObject *>(this, "FLandscapeImportLayerInfo.LayerInfo"); }
	TArray<unsigned char>& LayerDataField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FLandscapeImportLayerInfo.LayerData"); }

	// Functions

};

