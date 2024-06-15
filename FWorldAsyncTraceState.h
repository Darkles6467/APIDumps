#pragma once

#include "BaseDeclarations.h"
struct FWorldAsyncTraceState
{
	char __padding[0x1c8L];
	int& CurrentFrameField() { return *GetNativePointerField<int*>(this, "FWorldAsyncTraceState.CurrentFrame"); }
	int& NextAvailableTraceIndexField() { return *GetNativePointerField<int*>(this, "FWorldAsyncTraceState.NextAvailableTraceIndex"); }
	int& NextAvailableOverlapIndexField() { return *GetNativePointerField<int*>(this, "FWorldAsyncTraceState.NextAvailableOverlapIndex"); }

	// Functions

};

