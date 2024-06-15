#pragma once

#include "BaseDeclarations.h"
struct FTitleSafeZoneArea
{
	char __padding[0x10L];
	float& MaxPercentXField() { return *GetNativePointerField<float*>(this, "FTitleSafeZoneArea.MaxPercentX"); }
	float& MaxPercentYField() { return *GetNativePointerField<float*>(this, "FTitleSafeZoneArea.MaxPercentY"); }
	float& RecommendedPercentXField() { return *GetNativePointerField<float*>(this, "FTitleSafeZoneArea.RecommendedPercentX"); }
	float& RecommendedPercentYField() { return *GetNativePointerField<float*>(this, "FTitleSafeZoneArea.RecommendedPercentY"); }
};

