#pragma once

#include "BaseDeclarations.h"
struct FPrimitiveFadingState
{
	char __padding[0x20L];
	unsigned int& FrameNumberField() { return *GetNativePointerField<unsigned int*>(this, "FPrimitiveFadingState.FrameNumber"); }
	float& EndTimeField() { return *GetNativePointerField<float*>(this, "FPrimitiveFadingState.EndTime"); }
	FVector2D& FadeTimeScaleBiasField() { return *GetNativePointerField<FVector2D*>(this, "FPrimitiveFadingState.FadeTimeScaleBias"); }
	TUniformBufferRef<FDistanceCullFadeUniformShaderParameters>& UniformBufferField() { return *GetNativePointerField<TUniformBufferRef<FDistanceCullFadeUniformShaderParameters>*>(this, "FPrimitiveFadingState.UniformBuffer"); }
	bool& bIsVisibleField() { return *GetNativePointerField<bool*>(this, "FPrimitiveFadingState.bIsVisible"); }
	bool& bValidField() { return *GetNativePointerField<bool*>(this, "FPrimitiveFadingState.bValid"); }
};

