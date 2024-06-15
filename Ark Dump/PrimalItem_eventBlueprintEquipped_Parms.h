#pragma once

#include "BaseDeclarations.h"
struct PrimalItem_eventBlueprintEquipped_Parms
{
	char __padding[0x1L];
	bool& bIsFromSaveGameField() { return *GetNativePointerField<bool*>(this, "PrimalItem_eventBlueprintEquipped_Parms.bIsFromSaveGame"); }
};

