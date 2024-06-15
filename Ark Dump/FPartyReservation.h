#pragma once

#include "BaseDeclarations.h"
struct FPartyReservation
{
	char __padding[0x28L];
	int& TeamNumField() { return *GetNativePointerField<int*>(this, "FPartyReservation.TeamNum"); }
	TArray<FPlayerReservation>& PartyMembersField() { return *GetNativePointerField<TArray<FPlayerReservation>*>(this, "FPartyReservation.PartyMembers"); }

	// Functions

};

