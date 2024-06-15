#pragma once

#include "BaseDeclarations.h"
struct ShooterCharacter_eventServerSetViewingInventory_Parms
{
	char __padding[0x1L];
	bool& bIsViewingField() { return *GetNativePointerField<bool*>(this, "ShooterCharacter_eventServerSetViewingInventory_Parms.bIsViewing"); }
};

