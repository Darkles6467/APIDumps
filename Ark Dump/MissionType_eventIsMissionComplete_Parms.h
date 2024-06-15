#pragma once

#include "BaseDeclarations.h"
struct MissionType_eventIsMissionComplete_Parms
{
	char __padding[0x18L];
	AShooterCharacter * ForCharacterField() { return GetNativePointerField<AShooterCharacter *>(this, "MissionType_eventIsMissionComplete_Parms.ForCharacter"); }
	AShooterPlayerController * ForControllerField() { return GetNativePointerField<AShooterPlayerController *>(this, "MissionType_eventIsMissionComplete_Parms.ForController"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "MissionType_eventIsMissionComplete_Parms.ReturnValue"); }
};

