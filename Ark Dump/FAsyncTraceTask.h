#pragma once

#include "BaseDeclarations.h"
struct FAsyncTraceTask
{
	char __padding[0x18L];
	FTraceDatum * TraceDataField() { return GetNativePointerField<FTraceDatum *>(this, "FAsyncTraceTask.TraceData"); }
	FOverlapDatum * OverlapDataField() { return GetNativePointerField<FOverlapDatum *>(this, "FAsyncTraceTask.OverlapData"); }
	int& DataCountField() { return *GetNativePointerField<int*>(this, "FAsyncTraceTask.DataCount"); }
};

