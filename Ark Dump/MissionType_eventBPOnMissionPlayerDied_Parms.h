#pragma once

#include "BaseDeclarations.h"
struct MissionType_eventBPOnMissionPlayerDied_Parms
{
	char __padding[0x48L];
	AShooterCharacter * PlayerField() { return GetNativePointerField<AShooterCharacter *>(this, "MissionType_eventBPOnMissionPlayerDied_Parms.Player"); }
	AShooterPlayerController * ControllerField() { return GetNativePointerField<AShooterPlayerController *>(this, "MissionType_eventBPOnMissionPlayerDied_Parms.Controller"); }
	float& KillingDamageField() { return *GetNativePointerField<float*>(this, "MissionType_eventBPOnMissionPlayerDied_Parms.KillingDamage"); }
};

