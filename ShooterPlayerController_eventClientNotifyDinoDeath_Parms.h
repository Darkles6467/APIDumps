#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientNotifyDinoDeath_Parms
{
	char __padding[0x28L];
	FString& DinoNameField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerController_eventClientNotifyDinoDeath_Parms.DinoName"); }
	FString& AttackerNameField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerController_eventClientNotifyDinoDeath_Parms.AttackerName"); }
	bool& bIsVehicleField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerController_eventClientNotifyDinoDeath_Parms.bIsVehicle"); }

	// Functions

};

