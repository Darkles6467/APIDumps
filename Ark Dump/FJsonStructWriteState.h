#pragma once

#include "BaseDeclarations.h"
struct FJsonStructWriteState
{
	char __padding[0x20L];
	const void * DataField() { return GetNativePointerField<const void *>(this, "FJsonStructWriteState.Data"); }
	bool& HasBeenProcessedField() { return *GetNativePointerField<bool*>(this, "FJsonStructWriteState.HasBeenProcessed"); }
};

