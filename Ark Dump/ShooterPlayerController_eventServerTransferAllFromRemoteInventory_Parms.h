#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerTransferAllFromRemoteInventory_Parms
{
	char __padding[0x40L];
	FString& CurrentCustomFolderFilterField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerController_eventServerTransferAllFromRemoteInventory_Parms.CurrentCustomFolderFilter"); }
	FString& CurrentNameFilterField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerController_eventServerTransferAllFromRemoteInventory_Parms.CurrentNameFilter"); }
	FString& CurrentDestinationFolderField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerController_eventServerTransferAllFromRemoteInventory_Parms.CurrentDestinationFolder"); }
	bool& bNoFolderViewField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerController_eventServerTransferAllFromRemoteInventory_Parms.bNoFolderView"); }

	// Functions

};

