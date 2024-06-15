#pragma once

#include "BaseDeclarations.h"
struct IDVRStreamingSystem
{
	char __padding[0x8L];
};

struct FGenericDVRStreamingSystem : IDVRStreamingSystem
{
	char __padding[0x8L];
	bool& bIsStreamingEnabledField() { return *GetNativePointerField<bool*>(this, "FGenericDVRStreamingSystem.bIsStreamingEnabled"); }

	// Functions

	void EnableStreaming(bool Enable) { NativeCall<void, bool>(this, "FGenericDVRStreamingSystem.EnableStreaming", Enable); }
	void GetStreamingStatus(FDVRStreamingStatus * StreamingStatus) { NativeCall<void, FDVRStreamingStatus *>(this, "FGenericDVRStreamingSystem.GetStreamingStatus", StreamingStatus); }
};

