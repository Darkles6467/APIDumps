#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientAddFolderToInventoryComponent_Parms
{
	char __padding[0x20L];
	FString& NewCustomFolderNameField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerController_eventClientAddFolderToInventoryComponent_Parms.NewCustomFolderName"); }
	int& InventoryCompTypeField() { return *GetNativePointerField<int*>(this, "ShooterPlayerController_eventClientAddFolderToInventoryComponent_Parms.InventoryCompType"); }
};

