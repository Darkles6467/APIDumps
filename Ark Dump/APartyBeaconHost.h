#pragma once

#include "BaseDeclarations.h"
#include "AOnlineBeaconHostObject.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "UPartyBeaconState.h"

struct APartyBeaconHost : AOnlineBeaconHostObject
{
	char __padding[0x48L];
	UPartyBeaconState * StateField() { return GetNativePointerField<UPartyBeaconState *>(this, "APartyBeaconHost.State"); }
	float& SessionTimeoutSecsField() { return *GetNativePointerField<float*>(this, "APartyBeaconHost.SessionTimeoutSecs"); }
	float& TravelSessionTimeoutSecsField() { return *GetNativePointerField<float*>(this, "APartyBeaconHost.TravelSessionTimeoutSecs"); }

	// Functions

	EPartyReservationResult::Type AddPartyReservation(const FPartyReservation * ReservationRequest) { return NativeCall<EPartyReservationResult::Type, const FPartyReservation *>(this, "APartyBeaconHost.AddPartyReservation", ReservationRequest); }
	bool ChangeTeam(const FUniqueNetIdRepl * PartyLeader, int NewTeamNum) { return NativeCall<bool, const FUniqueNetIdRepl *, int>(this, "APartyBeaconHost.ChangeTeam", PartyLeader, NewTeamNum); }
	void ClientConnected(AOnlineBeaconClient * NewClientActor, UNetConnection * ClientConnection) { NativeCall<void, AOnlineBeaconClient *, UNetConnection *>(this, "APartyBeaconHost.ClientConnected", NewClientActor, ClientConnection); }
	bool DoesSessionMatch(const FString * SessionId) { return NativeCall<bool, const FString *>(this, "APartyBeaconHost.DoesSessionMatch", SessionId); }
	void DumpReservations() { NativeCall<void>(this, "APartyBeaconHost.DumpReservations"); }
	int GetMaxPlayersPerTeam() { return NativeCall<int>(this, "APartyBeaconHost.GetMaxPlayersPerTeam"); }
	TSubclassOf<UPartyBeaconState> * GetPartyBeaconHostClass(TSubclassOf<UPartyBeaconState> * result) { return NativeCall<TSubclassOf<UPartyBeaconState> *, TSubclassOf<UPartyBeaconState> *>(this, "APartyBeaconHost.GetPartyBeaconHostClass", result); }
	bool GetPlayerValidation(const FUniqueNetId * PlayerId, FString * OutValidation) { return NativeCall<bool, const FUniqueNetId *, FString *>(this, "APartyBeaconHost.GetPlayerValidation", PlayerId, OutValidation); }
	int GetReservationCount() { return NativeCall<int>(this, "APartyBeaconHost.GetReservationCount"); }
	void HandlePlayerLogout(const FUniqueNetIdRepl * PlayerId) { NativeCall<void, const FUniqueNetIdRepl *>(this, "APartyBeaconHost.HandlePlayerLogout", PlayerId); }
	bool InitFromBeaconState(UPartyBeaconState * PrevState) { return NativeCall<bool, UPartyBeaconState *>(this, "APartyBeaconHost.InitFromBeaconState", PrevState); }
	bool InitHostBeacon(int InTeamCount, int InTeamSize, int InMaxReservations, FName InSessionName, int InForceTeamNum) { return NativeCall<bool, int, int, int, FName, int>(this, "APartyBeaconHost.InitHostBeacon", InTeamCount, InTeamSize, InMaxReservations, InSessionName, InForceTeamNum); }
	bool PlayerHasReservation(const FUniqueNetId * PlayerId) { return NativeCall<bool, const FUniqueNetId *>(this, "APartyBeaconHost.PlayerHasReservation", PlayerId); }
	void ProcessCancelReservationRequest(APartyBeaconClient * Client, const FUniqueNetIdRepl * PartyLeader) { NativeCall<void, APartyBeaconClient *, const FUniqueNetIdRepl *>(this, "APartyBeaconHost.ProcessCancelReservationRequest", Client, PartyLeader); }
	void ProcessReservationRequest(APartyBeaconClient * Client, const FString * SessionId, const FPartyReservation * ReservationRequest) { NativeCall<void, APartyBeaconClient *, const FString *, const FPartyReservation *>(this, "APartyBeaconHost.ProcessReservationRequest", Client, SessionId, ReservationRequest); }
	bool ReconfigureTeamAndPlayerCount(int InNumTeams, int InNumPlayersPerTeam, int InNumReservations) { return NativeCall<bool, int, int, int>(this, "APartyBeaconHost.ReconfigureTeamAndPlayerCount", InNumTeams, InNumPlayersPerTeam, InNumReservations); }
	void RemoveClientActor(AOnlineBeaconClient * ClientActor) { NativeCall<void, AOnlineBeaconClient *>(this, "APartyBeaconHost.RemoveClientActor", ClientActor); }
	void RemovePartyReservation(const FUniqueNetIdRepl * PartyLeader) { NativeCall<void, const FUniqueNetIdRepl *>(this, "APartyBeaconHost.RemovePartyReservation", PartyLeader); }
	bool SwapTeams(const FUniqueNetIdRepl * PartyLeader, const FUniqueNetIdRepl * OtherPartyLeader) { return NativeCall<bool, const FUniqueNetIdRepl *, const FUniqueNetIdRepl *>(this, "APartyBeaconHost.SwapTeams", PartyLeader, OtherPartyLeader); }
	void Tick(float DeltaTime) { NativeCall<void, float>(this, "APartyBeaconHost.Tick", DeltaTime); }
};

