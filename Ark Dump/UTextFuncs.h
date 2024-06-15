#pragma once

#include "BaseDeclarations.h"
struct UTextFuncs
{
	char __padding[0x70L];
	int& tableSizeField() { return *GetNativePointerField<int*>(this, "UTextFuncs.tableSize"); }
	int& reserved1Field() { return *GetNativePointerField<int*>(this, "UTextFuncs.reserved1"); }
	int& reserved2Field() { return *GetNativePointerField<int*>(this, "UTextFuncs.reserved2"); }
	int& reserved3Field() { return *GetNativePointerField<int*>(this, "UTextFuncs.reserved3"); }
};

