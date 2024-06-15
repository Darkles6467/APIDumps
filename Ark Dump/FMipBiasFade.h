#pragma once

#include "BaseDeclarations.h"
struct FMipBiasFade
{
	char __padding[0x14L];
	float& TotalMipCountField() { return *GetNativePointerField<float*>(this, "FMipBiasFade.TotalMipCount"); }
	float& MipCountDeltaField() { return *GetNativePointerField<float*>(this, "FMipBiasFade.MipCountDelta"); }
	float& StartTimeField() { return *GetNativePointerField<float*>(this, "FMipBiasFade.StartTime"); }
	float& MipCountFadingRateField() { return *GetNativePointerField<float*>(this, "FMipBiasFade.MipCountFadingRate"); }
	float& BiasOffsetField() { return *GetNativePointerField<float*>(this, "FMipBiasFade.BiasOffset"); }

	// Functions

	float CalcMipBias() { return NativeCall<float>(this, "FMipBiasFade.CalcMipBias"); }
	void SetNewMipCount(float ActualMipCount, float TargetMipCount, long double LastRenderTime, EMipFadeSettings FadeSetting) { NativeCall<void, float, float, long double, EMipFadeSettings>(this, "FMipBiasFade.SetNewMipCount", ActualMipCount, TargetMipCount, LastRenderTime, FadeSetting); }
	bool IsFading() { return NativeCall<bool>(this, "FMipBiasFade.IsFading"); }
};

