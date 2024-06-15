#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerDeleteCustomFolder_Parms
{
	char __padding[0x20L];
	FString& CFolderNameField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerController_eventServerDeleteCustomFolder_Parms.CFolderName"); }
	int& InventoryCompTypeField() { return *GetNativePointerField<int*>(this, "ShooterPlayerController_eventServerDeleteCustomFolder_Parms.InventoryCompType"); }
};

