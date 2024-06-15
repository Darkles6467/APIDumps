#pragma once

#include "BaseDeclarations.h"
struct FBitWriterMark
{
	char __padding[0x10L];
	bool& OverflowedField() { return *GetNativePointerField<bool*>(this, "FBitWriterMark.Overflowed"); }
	__int64& NumField() { return *GetNativePointerField<__int64*>(this, "FBitWriterMark.Num"); }

	// Functions

	void Pop(FBitWriter * Writer) { NativeCall<void, FBitWriter *>(this, "FBitWriterMark.Pop", Writer); }
	void PopWithoutClear(FBitWriter * Writer) { NativeCall<void, FBitWriter *>(this, "FBitWriterMark.PopWithoutClear", Writer); }
};

