#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventUpdateTribeGroupRanks_Parms
{
	char __padding[0x2L];
	char& NewTribeGroupPetOrderingRankField() { return *GetNativePointerField<char*>(this, "PrimalDinoCharacter_eventUpdateTribeGroupRanks_Parms.NewTribeGroupPetOrderingRank"); }
	char& NewTribeGroupPetRidingRankField() { return *GetNativePointerField<char*>(this, "PrimalDinoCharacter_eventUpdateTribeGroupRanks_Parms.NewTribeGroupPetRidingRank"); }
};

