#pragma once

#include "BaseDeclarations.h"
struct FFrameEndSync
{
	char __padding[0x18L];
	FieldArray<FRenderCommandFence, 2> FenceField() { return {this, "FFrameEndSync.Fence"}; }
	int& EventIndexField() { return *GetNativePointerField<int*>(this, "FFrameEndSync.EventIndex"); }

	// Functions

	void Sync(bool bAllowOneFrameThreadLag) { NativeCall<void, bool>(this, "FFrameEndSync.Sync", bAllowOneFrameThreadLag); }
};

