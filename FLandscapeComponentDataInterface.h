#pragma once

#include "BaseDeclarations.h"
struct FLandscapeComponentDataInterface
{
	char __padding[0x48L];
	FLandscapeDataInterface * DataInterfaceField() { return GetNativePointerField<FLandscapeDataInterface *>(this, "FLandscapeComponentDataInterface.DataInterface"); }
	ULandscapeComponent * ComponentField() { return GetNativePointerField<ULandscapeComponent *>(this, "FLandscapeComponentDataInterface.Component"); }
	int& HeightmapStrideField() { return *GetNativePointerField<int*>(this, "FLandscapeComponentDataInterface.HeightmapStride"); }
	int& HeightmapComponentOffsetXField() { return *GetNativePointerField<int*>(this, "FLandscapeComponentDataInterface.HeightmapComponentOffsetX"); }
	int& HeightmapComponentOffsetYField() { return *GetNativePointerField<int*>(this, "FLandscapeComponentDataInterface.HeightmapComponentOffsetY"); }
	int& HeightmapSubsectionOffsetField() { return *GetNativePointerField<int*>(this, "FLandscapeComponentDataInterface.HeightmapSubsectionOffset"); }
	FColor * HeightMipDataField() { return GetNativePointerField<FColor *>(this, "FLandscapeComponentDataInterface.HeightMipData"); }
	FColor * XYOffsetMipDataField() { return GetNativePointerField<FColor *>(this, "FLandscapeComponentDataInterface.XYOffsetMipData"); }
	int& ComponentSizeVertsField() { return *GetNativePointerField<int*>(this, "FLandscapeComponentDataInterface.ComponentSizeVerts"); }
	int& SubsectionSizeVertsField() { return *GetNativePointerField<int*>(this, "FLandscapeComponentDataInterface.SubsectionSizeVerts"); }
	int& ComponentNumSubsectionsField() { return *GetNativePointerField<int*>(this, "FLandscapeComponentDataInterface.ComponentNumSubsections"); }
	bool& bNeedToDeleteDataInterfaceField() { return *GetNativePointerField<bool*>(this, "FLandscapeComponentDataInterface.bNeedToDeleteDataInterface"); }
	const int& MipLevelField() { return *GetNativePointerField<const int*>(this, "FLandscapeComponentDataInterface.MipLevel"); }
};

