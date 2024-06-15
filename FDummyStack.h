#pragma once

#include "BaseDeclarations.h"
struct FDummyStack
{
	char __padding[0x20L];
	unsigned __int64& Dummy1Field() { return *GetNativePointerField<unsigned __int64*>(this, "FDummyStack.Dummy1"); }
	unsigned __int64& Dummy2Field() { return *GetNativePointerField<unsigned __int64*>(this, "FDummyStack.Dummy2"); }
	unsigned __int64& Dummy3Field() { return *GetNativePointerField<unsigned __int64*>(this, "FDummyStack.Dummy3"); }
	unsigned __int64& Dummy4Field() { return *GetNativePointerField<unsigned __int64*>(this, "FDummyStack.Dummy4"); }
};

