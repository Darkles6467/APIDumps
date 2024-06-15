#pragma once

#include "BaseDeclarations.h"
#include "FGPUProfiler.h"
#include "FColor.h"

struct FD3DGPUProfiler : FGPUProfiler
{
	char __padding[0x78L];
	FD3D11BufferedGPUTiming& FrameTimingField() { return *GetNativePointerField<FD3D11BufferedGPUTiming*>(this, "FD3DGPUProfiler.FrameTiming"); }
	FD3D11DynamicRHI * D3D11RHIField() { return GetNativePointerField<FD3D11DynamicRHI *>(this, "FD3DGPUProfiler.D3D11RHI"); }
	TIndirectArray<FD3D11EventNodeFrame>& GPUHitchEventNodeFramesField() { return *GetNativePointerField<TIndirectArray<FD3D11EventNodeFrame>*>(this, "FD3DGPUProfiler.GPUHitchEventNodeFrames"); }

	// Functions

	void BeginFrame(FD3D11DynamicRHI * InRHI) { NativeCall<void, FD3D11DynamicRHI *>(this, "FD3DGPUProfiler.BeginFrame", InRHI); }
	void EndFrame() { NativeCall<void>(this, "FD3DGPUProfiler.EndFrame"); }
	void PopEvent() { NativeCall<void>(this, "FD3DGPUProfiler.PopEvent"); }
	void PushEvent(const wchar_t * Name, FColor Color) { NativeCall<void, const wchar_t *, FColor>(this, "FD3DGPUProfiler.PushEvent", Name, Color); }
};

