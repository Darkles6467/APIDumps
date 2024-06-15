#pragma once

#include "BaseDeclarations.h"
struct FVoiceCaptureDeviceWindows
{
	char __padding[0x20L];
	bool& bInitializedField() { return *GetNativePointerField<bool*>(this, "FVoiceCaptureDeviceWindows.bInitialized"); }

	// Functions

	static FVoiceCaptureDeviceWindows * Create() { return NativeCall<FVoiceCaptureDeviceWindows *>(nullptr, "FVoiceCaptureDeviceWindows.Create"); }
	FVoiceCaptureWindows * CreateVoiceCaptureObject() { return NativeCall<FVoiceCaptureWindows *>(this, "FVoiceCaptureDeviceWindows.CreateVoiceCaptureObject"); }
	void FreeVoiceCaptureObject(IVoiceCapture * VoiceCaptureObj) { NativeCall<void, IVoiceCapture *>(this, "FVoiceCaptureDeviceWindows.FreeVoiceCaptureObject", VoiceCaptureObj); }
	void Shutdown() { NativeCall<void>(this, "FVoiceCaptureDeviceWindows.Shutdown"); }
};

