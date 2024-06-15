#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerTransferAllToRemoteInventory_Parms
{
	char __padding[0x40L];
	FString& CurrentCustomFolderFilterField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerController_eventServerTransferAllToRemoteInventory_Parms.CurrentCustomFolderFilter"); }
	FString& CurrentNameFilterField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerController_eventServerTransferAllToRemoteInventory_Parms.CurrentNameFilter"); }
	FString& CurrentDestinationFolderField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerController_eventServerTransferAllToRemoteInventory_Parms.CurrentDestinationFolder"); }
	bool& bNoFolderViewField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerController_eventServerTransferAllToRemoteInventory_Parms.bNoFolderView"); }

	// Functions

};

