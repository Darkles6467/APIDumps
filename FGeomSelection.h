#pragma once

#include "BaseDeclarations.h"
struct FGeomSelection
{
	char __padding[0xcL];
	int& TypeField() { return *GetNativePointerField<int*>(this, "FGeomSelection.Type"); }
	int& IndexField() { return *GetNativePointerField<int*>(this, "FGeomSelection.Index"); }
	int& SelectionIndexField() { return *GetNativePointerField<int*>(this, "FGeomSelection.SelectionIndex"); }

	// Functions

};

