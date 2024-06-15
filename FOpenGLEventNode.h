#pragma once

#include "BaseDeclarations.h"
#include "FGPUProfilerEventNode.h"
#include "FGPUProfilerEventNodeStats.h"
#include "FRefCountedObject.h"

struct FOpenGLEventNode : FGPUProfilerEventNode
{
	char __padding[0x70L];
	FOpenGLBufferedGPUTiming& TimingField() { return *GetNativePointerField<FOpenGLBufferedGPUTiming*>(this, "FOpenGLEventNode.Timing"); }

	// Functions

	float GetTiming() { return NativeCall<float>(this, "FOpenGLEventNode.GetTiming"); }
	void StartTiming() { NativeCall<void>(this, "FOpenGLEventNode.StartTiming"); }
	void StopTiming() { NativeCall<void>(this, "FOpenGLEventNode.StopTiming"); }
};

