#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerRequestDropAllItems_Parms
{
	char __padding[0x20L];
	FString& CurrentCustomFolderFilterField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerController_eventServerRequestDropAllItems_Parms.CurrentCustomFolderFilter"); }
	FString& CurrentNameFilterField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerController_eventServerRequestDropAllItems_Parms.CurrentNameFilter"); }

	// Functions

};

