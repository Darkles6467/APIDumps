#pragma once

#include "BaseDeclarations.h"
struct FStreamingViewInfo
{
	char __padding[0x28L];
	FVector& ViewOriginField() { return *GetNativePointerField<FVector*>(this, "FStreamingViewInfo.ViewOrigin"); }
	float& ScreenSizeField() { return *GetNativePointerField<float*>(this, "FStreamingViewInfo.ScreenSize"); }
	float& FOVScreenSizeField() { return *GetNativePointerField<float*>(this, "FStreamingViewInfo.FOVScreenSize"); }
	float& BoostFactorField() { return *GetNativePointerField<float*>(this, "FStreamingViewInfo.BoostFactor"); }
	float& DurationField() { return *GetNativePointerField<float*>(this, "FStreamingViewInfo.Duration"); }
	bool& bOverrideLocationField() { return *GetNativePointerField<bool*>(this, "FStreamingViewInfo.bOverrideLocation"); }
};

