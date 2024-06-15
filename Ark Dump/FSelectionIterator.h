#pragma once

#include "BaseDeclarations.h"
struct FSelectionIterator
{
	char __padding[0x10L];
	USelection * SelectionField() { return GetNativePointerField<USelection *>(this, "FSelectionIterator.Selection"); }
	int& IndexField() { return *GetNativePointerField<int*>(this, "FSelectionIterator.Index"); }
};

