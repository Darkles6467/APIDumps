#pragma once

#include "BaseDeclarations.h"
struct PartyBeaconClient_eventClientReservationResponse_Parms
{
	char __padding[0x1L];
	TEnumAsByte<enum EPartyReservationResult::Type>& ReservationResponseField() { return *GetNativePointerField<TEnumAsByte<enum EPartyReservationResult::Type>*>(this, "PartyBeaconClient_eventClientReservationResponse_Parms.ReservationResponse"); }
};

