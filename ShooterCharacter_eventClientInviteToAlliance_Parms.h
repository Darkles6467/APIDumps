#pragma once

#include "BaseDeclarations.h"
struct ShooterCharacter_eventClientInviteToAlliance_Parms
{
	char __padding[0x28L];
	int& RequestingTeamField() { return *GetNativePointerField<int*>(this, "ShooterCharacter_eventClientInviteToAlliance_Parms.RequestingTeam"); }
	unsigned int& AllianceIDField() { return *GetNativePointerField<unsigned int*>(this, "ShooterCharacter_eventClientInviteToAlliance_Parms.AllianceID"); }
	FString& AllianceNameField() { return *GetNativePointerField<FString*>(this, "ShooterCharacter_eventClientInviteToAlliance_Parms.AllianceName"); }
	FString& InviteeNameField() { return *GetNativePointerField<FString*>(this, "ShooterCharacter_eventClientInviteToAlliance_Parms.InviteeName"); }

	// Functions

};

