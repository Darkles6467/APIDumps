#pragma once

#include "BaseDeclarations.h"
struct FInputLatencyTimer
{
	char __padding[0x14L];
	bool& bInitializedField() { return *GetNativePointerField<bool*>(this, "FInputLatencyTimer.bInitialized"); }
	bool& GameThreadTriggerField() { return *GetNativePointerField<bool*>(this, "FInputLatencyTimer.GameThreadTrigger"); }
	bool& RenderThreadTriggerField() { return *GetNativePointerField<bool*>(this, "FInputLatencyTimer.RenderThreadTrigger"); }
	unsigned int& StartTimeField() { return *GetNativePointerField<unsigned int*>(this, "FInputLatencyTimer.StartTime"); }
	unsigned int& DeltaTimeField() { return *GetNativePointerField<unsigned int*>(this, "FInputLatencyTimer.DeltaTime"); }
	float& LastCaptureTimeField() { return *GetNativePointerField<float*>(this, "FInputLatencyTimer.LastCaptureTime"); }
	float& UpdateFrequencyField() { return *GetNativePointerField<float*>(this, "FInputLatencyTimer.UpdateFrequency"); }
};

