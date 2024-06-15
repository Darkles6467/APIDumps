#pragma once

#include "BaseDeclarations.h"
struct FAlphamapAccessor
{
	char __padding[0xe0L];
	ULandscapeInfo * LandscapeInfoField() { return GetNativePointerField<ULandscapeInfo *>(this, "FAlphamapAccessor.LandscapeInfo"); }
	FLandscapeEditDataInterface& LandscapeEditField() { return *GetNativePointerField<FLandscapeEditDataInterface*>(this, "FAlphamapAccessor.LandscapeEdit"); }
	ULandscapeLayerInfoObject * LayerInfoField() { return GetNativePointerField<ULandscapeLayerInfoObject *>(this, "FAlphamapAccessor.LayerInfo"); }
	bool& bBlendWeightField() { return *GetNativePointerField<bool*>(this, "FAlphamapAccessor.bBlendWeight"); }
	bool& bUseTotalNormalizeField() { return *GetNativePointerField<bool*>(this, "FAlphamapAccessor.bUseTotalNormalize"); }
};

