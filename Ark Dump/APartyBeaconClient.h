#pragma once

#include "BaseDeclarations.h"
#include "AOnlineBeaconClient.h"
#include "AOnlineBeacon.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FPlayerReservation.h"
#include "FUniqueNetIdRepl.h"
#include "FPartyReservation.h"

struct APartyBeaconClient : AOnlineBeaconClient
{
	char __padding[0x50L];
	FString& DestSessionIdField() { return *GetNativePointerField<FString*>(this, "APartyBeaconClient.DestSessionId"); }
	FPartyReservation& PendingReservationField() { return *GetNativePointerField<FPartyReservation*>(this, "APartyBeaconClient.PendingReservation"); }
	bool& bPendingReservationSentField() { return *GetNativePointerField<bool*>(this, "APartyBeaconClient.bPendingReservationSent"); }
	bool& bCancelReservationField() { return *GetNativePointerField<bool*>(this, "APartyBeaconClient.bCancelReservation"); }

	// Functions

	void CancelReservation() { NativeCall<void>(this, "APartyBeaconClient.CancelReservation"); }
	void ClientReservationResponse_Implementation(EPartyReservationResult::Type ReservationResponse) { NativeCall<void, EPartyReservationResult::Type>(this, "APartyBeaconClient.ClientReservationResponse_Implementation", ReservationResponse); }
	FString * GetBeaconType(FString * result) { return NativeCall<FString *, FString *>(this, "APartyBeaconClient.GetBeaconType", result); }
	void OnConnected() { NativeCall<void>(this, "APartyBeaconClient.OnConnected"); }
	void OnFailure() { NativeCall<void>(this, "APartyBeaconClient.OnFailure"); }
	void RequestReservation(const FOnlineSessionSearchResult * DesiredHost, const FUniqueNetIdRepl * RequestingPartyLeader, const TArray<FPlayerReservation> * PartyMembers) { NativeCall<void, const FOnlineSessionSearchResult *, const FUniqueNetIdRepl *, const TArray<FPlayerReservation> *>(this, "APartyBeaconClient.RequestReservation", DesiredHost, RequestingPartyLeader, PartyMembers); }
	void ServerCancelReservationRequest_Implementation(FUniqueNetIdRepl PartyLeader) { NativeCall<void, FUniqueNetIdRepl>(this, "APartyBeaconClient.ServerCancelReservationRequest_Implementation", PartyLeader); }
	bool ServerCancelReservationRequest_Validate(FUniqueNetIdRepl PartyLeader) { return NativeCall<bool, FUniqueNetIdRepl>(this, "APartyBeaconClient.ServerCancelReservationRequest_Validate", PartyLeader); }
	void ServerReservationRequest_Implementation(const FString * SessionId, FPartyReservation Reservation) { NativeCall<void, const FString *, FPartyReservation>(this, "APartyBeaconClient.ServerReservationRequest_Implementation", SessionId, Reservation); }
	bool ServerReservationRequest_Validate(const FString * SessionId, FPartyReservation Reservation) { return NativeCall<bool, const FString *, FPartyReservation>(this, "APartyBeaconClient.ServerReservationRequest_Validate", SessionId, Reservation); }
	void ClientReservationResponse(EPartyReservationResult::Type ReservationResponse) { NativeCall<void, EPartyReservationResult::Type>(this, "APartyBeaconClient.ClientReservationResponse", ReservationResponse); }
	void ServerCancelReservationRequest(FUniqueNetIdRepl PartyLeader) { NativeCall<void, FUniqueNetIdRepl>(this, "APartyBeaconClient.ServerCancelReservationRequest", PartyLeader); }
	void ServerReservationRequest(const FString * SessionId, FPartyReservation Reservation) { NativeCall<void, const FString *, FPartyReservation>(this, "APartyBeaconClient.ServerReservationRequest", SessionId, Reservation); }
};

