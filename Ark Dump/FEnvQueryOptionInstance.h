#pragma once

#include "BaseDeclarations.h"
struct FEnvQueryOptionInstance
{
	char __padding[0x28L];
	TSubclassOf<UEnvQueryItemType>& ItemTypeField() { return *GetNativePointerField<TSubclassOf<UEnvQueryItemType>*>(this, "FEnvQueryOptionInstance.ItemType"); }
	bool& bShuffleItemsField() { return *GetNativePointerField<bool*>(this, "FEnvQueryOptionInstance.bShuffleItems"); }

	// Functions

};

