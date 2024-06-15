#pragma once

#include "BaseDeclarations.h"
struct FTimerHandle
{
	char __padding[0x4L];
	int& HandleField() { return *GetNativePointerField<int*>(this, "FTimerHandle.Handle"); }

	// Functions

	void Invalidate() { NativeCall<void>(this, "FTimerHandle.Invalidate"); }
	bool IsValid() { return NativeCall<bool>(this, "FTimerHandle.IsValid"); }
};

