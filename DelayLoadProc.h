#pragma once

#include "BaseDeclarations.h"
struct DelayLoadProc
{
	char __padding[0x10L];
	int& fImportByNameField() { return *GetNativePointerField<int*>(this, "DelayLoadProc.fImportByName"); }
};

