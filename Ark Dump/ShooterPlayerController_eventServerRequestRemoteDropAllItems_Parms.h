#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerRequestRemoteDropAllItems_Parms
{
	char __padding[0x28L];
	FString& CurrentCustomFolderFilterField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerController_eventServerRequestRemoteDropAllItems_Parms.CurrentCustomFolderFilter"); }
	FString& CurrentNameFilterField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerController_eventServerRequestRemoteDropAllItems_Parms.CurrentNameFilter"); }

	// Functions

};

