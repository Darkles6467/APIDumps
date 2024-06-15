#pragma once

#include "BaseDeclarations.h"
struct FSkyBoxLoadedStatus
{
	char __padding[0x20L];
	FieldArray<bool, 3> bActivelyStreamingField() { return {this, "FSkyBoxLoadedStatus.bActivelyStreaming"}; }
	bool& bPendingUnloadField() { return *GetNativePointerField<bool*>(this, "FSkyBoxLoadedStatus.bPendingUnload"); }

	// Functions

	bool IsLoaded(bool SkyOnly) { return NativeCall<bool, bool>(this, "FSkyBoxLoadedStatus.IsLoaded", SkyOnly); }
};

