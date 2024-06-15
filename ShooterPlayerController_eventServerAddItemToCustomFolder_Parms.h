#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerAddItemToCustomFolder_Parms
{
	char __padding[0x28L];
	FString& CFolderNameField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerController_eventServerAddItemToCustomFolder_Parms.CFolderName"); }
	int& InventoryCompTypeField() { return *GetNativePointerField<int*>(this, "ShooterPlayerController_eventServerAddItemToCustomFolder_Parms.InventoryCompType"); }
	FItemNetID& ItemIdField() { return *GetNativePointerField<FItemNetID*>(this, "ShooterPlayerController_eventServerAddItemToCustomFolder_Parms.ItemId"); }
};

