#pragma once

#include "BaseDeclarations.h"
struct FStatUnitData
{
	char __padding[0x28L];
	float& RenderThreadTimeField() { return *GetNativePointerField<float*>(this, "FStatUnitData.RenderThreadTime"); }
	float& GameThreadTimeField() { return *GetNativePointerField<float*>(this, "FStatUnitData.GameThreadTime"); }
	float& GPUFrameTimeField() { return *GetNativePointerField<float*>(this, "FStatUnitData.GPUFrameTime"); }
	float& FrameTimeField() { return *GetNativePointerField<float*>(this, "FStatUnitData.FrameTime"); }
	float& RawRenderThreadTimeField() { return *GetNativePointerField<float*>(this, "FStatUnitData.RawRenderThreadTime"); }
	float& RawGameThreadTimeField() { return *GetNativePointerField<float*>(this, "FStatUnitData.RawGameThreadTime"); }
	float& RawGPUFrameTimeField() { return *GetNativePointerField<float*>(this, "FStatUnitData.RawGPUFrameTime"); }
	float& RawFrameTimeField() { return *GetNativePointerField<float*>(this, "FStatUnitData.RawFrameTime"); }
	long double& LastTimeField() { return *GetNativePointerField<long double*>(this, "FStatUnitData.LastTime"); }

	// Functions

	int DrawStat(FViewport * InViewport, FCanvas * InCanvas, int InX, int InY) { return NativeCall<int, FViewport *, FCanvas *, int, int>(this, "FStatUnitData.DrawStat", InViewport, InCanvas, InX, InY); }
};

