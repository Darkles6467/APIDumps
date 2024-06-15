#pragma once

#include "BaseDeclarations.h"
struct FHeightfieldComponentDescription
{
	char __padding[0xb0L];
	FVector4& HeightfieldScaleBiasField() { return *GetNativePointerField<FVector4*>(this, "FHeightfieldComponentDescription.HeightfieldScaleBias"); }
	FVector4& WeightmapScaleBiasField() { return *GetNativePointerField<FVector4*>(this, "FHeightfieldComponentDescription.WeightmapScaleBias"); }
	FVector4& MinMaxUVField() { return *GetNativePointerField<FVector4*>(this, "FHeightfieldComponentDescription.MinMaxUV"); }
	FMatrix& LocalToWorldField() { return *GetNativePointerField<FMatrix*>(this, "FHeightfieldComponentDescription.LocalToWorld"); }
	FVector2D& LightingAtlasLocationField() { return *GetNativePointerField<FVector2D*>(this, "FHeightfieldComponentDescription.LightingAtlasLocation"); }
	FIntRect& HeightfieldRectField() { return *GetNativePointerField<FIntRect*>(this, "FHeightfieldComponentDescription.HeightfieldRect"); }
	bool& bIsCloseField() { return *GetNativePointerField<bool*>(this, "FHeightfieldComponentDescription.bIsClose"); }
	int& VisibilityMapChannelField() { return *GetNativePointerField<int*>(this, "FHeightfieldComponentDescription.VisibilityMapChannel"); }
	float& WeightmapSubsectionOffsetField() { return *GetNativePointerField<float*>(this, "FHeightfieldComponentDescription.WeightmapSubsectionOffset"); }
	int& NumSubsectionsField() { return *GetNativePointerField<int*>(this, "FHeightfieldComponentDescription.NumSubsections"); }
	FVector4& SubsectionScaleAndBiasField() { return *GetNativePointerField<FVector4*>(this, "FHeightfieldComponentDescription.SubsectionScaleAndBias"); }
};

