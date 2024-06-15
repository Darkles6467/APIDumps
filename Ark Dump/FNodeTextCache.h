#pragma once

#include "BaseDeclarations.h"
struct FNodeTextCache
{
	char __padding[0x28L];
	FText& CachedTextField() { return *GetNativePointerField<FText*>(this, "FNodeTextCache.CachedText"); }
};

