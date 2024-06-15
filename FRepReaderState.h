#pragma once

#include "BaseDeclarations.h"
struct FRepReaderState
{
	char __padding[0x20L];
	unsigned int& WaitingHandleField() { return *GetNativePointerField<unsigned int*>(this, "FRepReaderState.WaitingHandle"); }
	unsigned int& CurrentHandleField() { return *GetNativePointerField<unsigned int*>(this, "FRepReaderState.CurrentHandle"); }
	FRepState * RepStateField() { return GetNativePointerField<FRepState *>(this, "FRepReaderState.RepState"); }
	bool& bDoChecksumField() { return *GetNativePointerField<bool*>(this, "FRepReaderState.bDoChecksum"); }
	bool& bHasUnmappedField() { return *GetNativePointerField<bool*>(this, "FRepReaderState.bHasUnmapped"); }
};

