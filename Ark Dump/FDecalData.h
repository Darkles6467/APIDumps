#pragma once

#include "BaseDeclarations.h"
struct FDecalData
{
	char __padding[0x20L];
	float& DecalSizeField() { return *GetNativePointerField<float*>(this, "FDecalData.DecalSize"); }
	float& DecalDepthField() { return *GetNativePointerField<float*>(this, "FDecalData.DecalDepth"); }
	float& DecalImpactNormalOffsetField() { return *GetNativePointerField<float*>(this, "FDecalData.DecalImpactNormalOffset"); }
	float& LifeSpanField() { return *GetNativePointerField<float*>(this, "FDecalData.LifeSpan"); }
	float& RandomAngleRangeField() { return *GetNativePointerField<float*>(this, "FDecalData.RandomAngleRange"); }

	// Functions

};

