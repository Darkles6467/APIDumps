#pragma once

#include "BaseDeclarations.h"
struct FRepWriterState
{
	char __padding[0x18L];
	TArray<unsigned short> * ChangedField() { return GetNativePointerField<TArray<unsigned short> *>(this, "FRepWriterState.Changed"); }
	int& CurrentChangedField() { return *GetNativePointerField<int*>(this, "FRepWriterState.CurrentChanged"); }
	bool& bDoChecksumField() { return *GetNativePointerField<bool*>(this, "FRepWriterState.bDoChecksum"); }
};

