#pragma once

#include "BaseDeclarations.h"
struct FCPUUpdatedBuffer
{
	char __padding[0x20L];
	EPixelFormat& FormatField() { return *GetNativePointerField<EPixelFormat*>(this, "FCPUUpdatedBuffer.Format"); }
	int& StrideField() { return *GetNativePointerField<int*>(this, "FCPUUpdatedBuffer.Stride"); }
	int& MaxElementsField() { return *GetNativePointerField<int*>(this, "FCPUUpdatedBuffer.MaxElements"); }

	// Functions

	void Initialize() { NativeCall<void>(this, "FCPUUpdatedBuffer.Initialize"); }
};

