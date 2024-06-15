#pragma once

#include "BaseDeclarations.h"
#include "FGPUProfilerEventNode.h"
#include "FGPUProfilerEventNodeStats.h"
#include "FRefCountedObject.h"

struct FD3D11EventNode : FGPUProfilerEventNode
{
	char __padding[0x60L];
	FD3D11BufferedGPUTiming& TimingField() { return *GetNativePointerField<FD3D11BufferedGPUTiming*>(this, "FD3D11EventNode.Timing"); }

	// Functions

	float GetTiming() { return NativeCall<float>(this, "FD3D11EventNode.GetTiming"); }
	void StartTiming() { NativeCall<void>(this, "FD3D11EventNode.StartTiming"); }
	void StopTiming() { NativeCall<void>(this, "FD3D11EventNode.StopTiming"); }
};

