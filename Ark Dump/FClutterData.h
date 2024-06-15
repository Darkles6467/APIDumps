#pragma once

#include "BaseDeclarations.h"
struct FClutterData
{
	char __padding[0x30L];
	float& DensityField() { return *GetNativePointerField<float*>(this, "FClutterData.Density"); }
	float& MinSizeField() { return *GetNativePointerField<float*>(this, "FClutterData.MinSize"); }
	float& MaxSizeField() { return *GetNativePointerField<float*>(this, "FClutterData.MaxSize"); }
	int& GenerationSeedField() { return *GetNativePointerField<int*>(this, "FClutterData.GenerationSeed"); }
	bool& bAllowShadowsField() { return *GetNativePointerField<bool*>(this, "FClutterData.bAllowShadows"); }
	UStaticMesh * StaticMeshField() { return GetNativePointerField<UStaticMesh *>(this, "FClutterData.StaticMesh"); }
	int& TextureChannelField() { return *GetNativePointerField<int*>(this, "FClutterData.TextureChannel"); }

	// Functions

};

