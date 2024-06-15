#pragma once

#include "BaseDeclarations.h"
struct FWeightmapLayerAllocationInfo
{
	char __padding[0x18L];
	FName& LayerName_DEPRECATEDField() { return *GetNativePointerField<FName*>(this, "FWeightmapLayerAllocationInfo.LayerName_DEPRECATED"); }
	ULandscapeLayerInfoObject * LayerInfoField() { return GetNativePointerField<ULandscapeLayerInfoObject *>(this, "FWeightmapLayerAllocationInfo.LayerInfo"); }
	char& WeightmapTextureIndexField() { return *GetNativePointerField<char*>(this, "FWeightmapLayerAllocationInfo.WeightmapTextureIndex"); }
	char& WeightmapTextureChannelField() { return *GetNativePointerField<char*>(this, "FWeightmapLayerAllocationInfo.WeightmapTextureChannel"); }

	// Functions

};

