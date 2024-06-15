#pragma once

#include "BaseDeclarations.h"
#include "FGPUProfiler.h"
#include "FColor.h"

struct FOpenGLGPUProfiler : FGPUProfiler
{
	char __padding[0x1b0L];
	FOpenGLBufferedGPUTiming& FrameTimingField() { return *GetNativePointerField<FOpenGLBufferedGPUTiming*>(this, "FOpenGLGPUProfiler.FrameTiming"); }
	FieldArray<FOpenGLDisjointTimeStampQuery, 4> DisjointGPUFrameTimeQueryField() { return {this, "FOpenGLGPUProfiler.DisjointGPUFrameTimeQuery"}; }
	int& CurrentGPUFrameQueryIndexField() { return *GetNativePointerField<int*>(this, "FOpenGLGPUProfiler.CurrentGPUFrameQueryIndex"); }
	FOpenGLDynamicRHI * OpenGLRHIField() { return GetNativePointerField<FOpenGLDynamicRHI *>(this, "FOpenGLGPUProfiler.OpenGLRHI"); }
	TIndirectArray<FOpenGLEventNodeFrame>& GPUHitchEventNodeFramesField() { return *GetNativePointerField<TIndirectArray<FOpenGLEventNodeFrame>*>(this, "FOpenGLGPUProfiler.GPUHitchEventNodeFrames"); }

	// Functions

	void BeginFrame(FOpenGLDynamicRHI * InRHI) { NativeCall<void, FOpenGLDynamicRHI *>(this, "FOpenGLGPUProfiler.BeginFrame", InRHI); }
	void Cleanup() { NativeCall<void>(this, "FOpenGLGPUProfiler.Cleanup"); }
	void EndFrame() { NativeCall<void>(this, "FOpenGLGPUProfiler.EndFrame"); }
	void PopEvent() { NativeCall<void>(this, "FOpenGLGPUProfiler.PopEvent"); }
	void PushEvent(const wchar_t * Name, FColor Color) { NativeCall<void, const wchar_t *, FColor>(this, "FOpenGLGPUProfiler.PushEvent", Name, Color); }
};

