#pragma once

#include "BaseDeclarations.h"
#include "FColor.h"

struct FGPUProfiler
{
	char __padding[0x28L];
	bool& bTrackingEventsField() { return *GetNativePointerField<bool*>(this, "FGPUProfiler.bTrackingEvents"); }
	bool& bTrackingGPUCrashDataField() { return *GetNativePointerField<bool*>(this, "FGPUProfiler.bTrackingGPUCrashData"); }
	bool& bLatchedGProfilingGPUField() { return *GetNativePointerField<bool*>(this, "FGPUProfiler.bLatchedGProfilingGPU"); }
	bool& bLatchedGProfilingGPUHitchesField() { return *GetNativePointerField<bool*>(this, "FGPUProfiler.bLatchedGProfilingGPUHitches"); }
	bool& bPreviousLatchedGProfilingGPUHitchesField() { return *GetNativePointerField<bool*>(this, "FGPUProfiler.bPreviousLatchedGProfilingGPUHitches"); }
	bool& bOriginalGEmitDrawEventsField() { return *GetNativePointerField<bool*>(this, "FGPUProfiler.bOriginalGEmitDrawEvents"); }
	int& GPUHitchDebounceField() { return *GetNativePointerField<int*>(this, "FGPUProfiler.GPUHitchDebounce"); }
	int& GPUCrashDataDepthField() { return *GetNativePointerField<int*>(this, "FGPUProfiler.GPUCrashDataDepth"); }

	// Functions

	void PopEvent() { NativeCall<void>(this, "FGPUProfiler.PopEvent"); }
	void PushEvent(const wchar_t * Name, FColor Color) { NativeCall<void, const wchar_t *, FColor>(this, "FGPUProfiler.PushEvent", Name, Color); }
};

