#pragma once

#include "BaseDeclarations.h"
#include "FExternalProfiler.h"
#include "IModularFeature.h"

struct FAQtimeExternalProfiler : FExternalProfiler
{
	char __padding[0x10L];
	void * DLLHandleField() { return GetNativePointerField<void *>(this, "FAQtimeExternalProfiler.DLLHandle"); }

	// Functions

	const wchar_t * GetProfilerName() { return NativeCall<const wchar_t *>(this, "FAQtimeExternalProfiler.GetProfilerName"); }
	void ProfilerPauseFunction() { NativeCall<void>(this, "FAQtimeExternalProfiler.ProfilerPauseFunction"); }
	void ProfilerResumeFunction() { NativeCall<void>(this, "FAQtimeExternalProfiler.ProfilerResumeFunction"); }
};

