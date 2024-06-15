#pragma once

#include "BaseDeclarations.h"
struct FNulPointerIterator
{
	char __padding[0x8L];
	char * Ptr_Field() { return GetNativePointerField<char *>(this, "FNulPointerIterator.Ptr_"); }

	// Functions

	char operator=(char Val) { return NativeCall<char, char>(this, "FNulPointerIterator.operator=", Val); }
	const FNulPointerIterator * operator++(int __formal) { return NativeCall<const FNulPointerIterator *, int>(this, "FNulPointerIterator.operator++", __formal); }
};

