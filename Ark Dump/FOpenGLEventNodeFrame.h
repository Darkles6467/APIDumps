#pragma once

#include "BaseDeclarations.h"
#include "FGPUProfilerEventNodeFrame.h"

struct FOpenGLEventNodeFrame : FGPUProfilerEventNodeFrame
{
	char __padding[0xb8L];
	FOpenGLBufferedGPUTiming& RootEventTimingField() { return *GetNativePointerField<FOpenGLBufferedGPUTiming*>(this, "FOpenGLEventNodeFrame.RootEventTiming"); }
	FOpenGLDisjointTimeStampQuery& DisjointQueryField() { return *GetNativePointerField<FOpenGLDisjointTimeStampQuery*>(this, "FOpenGLEventNodeFrame.DisjointQuery"); }

	// Functions

	void EndFrame() { NativeCall<void>(this, "FOpenGLEventNodeFrame.EndFrame"); }
	float GetRootTimingResults() { return NativeCall<float>(this, "FOpenGLEventNodeFrame.GetRootTimingResults"); }
	void StartFrame() { NativeCall<void>(this, "FOpenGLEventNodeFrame.StartFrame"); }
};

