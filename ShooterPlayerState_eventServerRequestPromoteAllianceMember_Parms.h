#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerState_eventServerRequestPromoteAllianceMember_Parms
{
	char __padding[0x8L];
	unsigned int& AllianceIDField() { return *GetNativePointerField<unsigned int*>(this, "ShooterPlayerState_eventServerRequestPromoteAllianceMember_Parms.AllianceID"); }
	unsigned int& MemberIDField() { return *GetNativePointerField<unsigned int*>(this, "ShooterPlayerState_eventServerRequestPromoteAllianceMember_Parms.MemberID"); }
};

