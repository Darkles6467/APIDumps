#pragma once

#include "BaseDeclarations.h"
#include "FGPUProfilerEventNodeFrame.h"

struct FD3D11EventNodeFrame : FGPUProfilerEventNodeFrame
{
	char __padding[0xa0L];
	FD3D11BufferedGPUTiming& RootEventTimingField() { return *GetNativePointerField<FD3D11BufferedGPUTiming*>(this, "FD3D11EventNodeFrame.RootEventTiming"); }
	FD3D11DisjointTimeStampQuery& DisjointQueryField() { return *GetNativePointerField<FD3D11DisjointTimeStampQuery*>(this, "FD3D11EventNodeFrame.DisjointQuery"); }

	// Functions

	void EndFrame() { NativeCall<void>(this, "FD3D11EventNodeFrame.EndFrame"); }
	float GetRootTimingResults() { return NativeCall<float>(this, "FD3D11EventNodeFrame.GetRootTimingResults"); }
	void StartFrame() { NativeCall<void>(this, "FD3D11EventNodeFrame.StartFrame"); }
};

