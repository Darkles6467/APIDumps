#pragma once

#include "BaseDeclarations.h"
struct UCharIterator
{
	char __padding[0x70L];
	const void * contextField() { return GetNativePointerField<const void *>(this, "UCharIterator.context"); }
	int& lengthField() { return *GetNativePointerField<int*>(this, "UCharIterator.length"); }
	int& startField() { return *GetNativePointerField<int*>(this, "UCharIterator.start"); }
	int& indexField() { return *GetNativePointerField<int*>(this, "UCharIterator.index"); }
	int& limitField() { return *GetNativePointerField<int*>(this, "UCharIterator.limit"); }
	int& reservedFieldField() { return *GetNativePointerField<int*>(this, "UCharIterator.reservedField"); }
};

