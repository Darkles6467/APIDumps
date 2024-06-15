#pragma once

#include "BaseDeclarations.h"
struct FLinkerIndexPair
{
	char __padding[0x10L];
	int& LinkerIndexField() { return *GetNativePointerField<int*>(this, "FLinkerIndexPair.LinkerIndex"); }
};

