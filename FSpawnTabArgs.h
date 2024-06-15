#pragma once

#include "BaseDeclarations.h"
struct FSpawnTabArgs
{
	char __padding[0x20L];
	FTabId& TabIdBeingSpawnedField() { return *GetNativePointerField<FTabId*>(this, "FSpawnTabArgs.TabIdBeingSpawned"); }
	TSharedPtr<SWindow,0>& OwnerWindowField() { return *GetNativePointerField<TSharedPtr<SWindow,0>*>(this, "FSpawnTabArgs.OwnerWindow"); }
};

