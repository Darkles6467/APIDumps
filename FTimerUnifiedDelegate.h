#pragma once

#include "BaseDeclarations.h"
struct FTimerUnifiedDelegate
{
	char __padding[0x20L];
	__int64& QuickCacheObjectPointerField() { return *GetNativePointerField<__int64*>(this, "FTimerUnifiedDelegate.QuickCacheObjectPointer"); }

	// Functions

};

