#pragma once

#include "BaseDeclarations.h"
struct PartyBeaconClient_eventServerReservationRequest_Parms
{
	char __padding[0x38L];
	FString& SessionIdField() { return *GetNativePointerField<FString*>(this, "PartyBeaconClient_eventServerReservationRequest_Parms.SessionId"); }
	FPartyReservation& ReservationField() { return *GetNativePointerField<FPartyReservation*>(this, "PartyBeaconClient_eventServerReservationRequest_Parms.Reservation"); }
};

