#pragma once

#include "BaseDeclarations.h"
struct FTriIndices
{
	char __padding[0xcL];
	int& v0Field() { return *GetNativePointerField<int*>(this, "FTriIndices.v0"); }
	int& v1Field() { return *GetNativePointerField<int*>(this, "FTriIndices.v1"); }
	int& v2Field() { return *GetNativePointerField<int*>(this, "FTriIndices.v2"); }

	// Functions

};

