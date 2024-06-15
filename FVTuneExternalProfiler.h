#pragma once

#include "BaseDeclarations.h"
#include "FExternalProfiler.h"
#include "IModularFeature.h"

struct FVTuneExternalProfiler : FExternalProfiler
{
	char __padding[0x18L];
	void * DLLHandleField() { return GetNativePointerField<void *>(this, "FVTuneExternalProfiler.DLLHandle"); }

	// Functions

	const wchar_t * GetProfilerName() { return NativeCall<const wchar_t *>(this, "FVTuneExternalProfiler.GetProfilerName"); }
	bool Initialize() { return NativeCall<bool>(this, "FVTuneExternalProfiler.Initialize"); }
	void ProfilerPauseFunction() { NativeCall<void>(this, "FVTuneExternalProfiler.ProfilerPauseFunction"); }
	void ProfilerResumeFunction() { NativeCall<void>(this, "FVTuneExternalProfiler.ProfilerResumeFunction"); }
};

