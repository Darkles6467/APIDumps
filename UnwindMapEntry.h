#pragma once

#include "BaseDeclarations.h"
struct UnwindMapEntry
{
	char __padding[0x8L];
	None& toStateField() { return *GetNativePointerField<None*>(this, "UnwindMapEntry.toState"); }
	None& actionField() { return *GetNativePointerField<None*>(this, "UnwindMapEntry.action"); }
};

