#pragma once

#include "BaseDeclarations.h"
struct DetermineBitfieldOffsetAndMask
{
	char __padding[0x10L];
	int& OffsetField() { return *GetNativePointerField<int*>(this, "DetermineBitfieldOffsetAndMask.Offset"); }
	unsigned int& BitMaskField() { return *GetNativePointerField<unsigned int*>(this, "DetermineBitfieldOffsetAndMask.BitMask"); }

	// Functions

	void * AllocateBuffer(const unsigned __int64 SizeOf) { return NativeCall<void *, const unsigned __int64>(this, "DetermineBitfieldOffsetAndMask.AllocateBuffer", SizeOf); }
};

