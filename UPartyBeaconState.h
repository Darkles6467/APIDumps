#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UPartyBeaconState : UObject
{
	char __padding[0x40L];
	FName& SessionNameField() { return *GetNativePointerField<FName*>(this, "UPartyBeaconState.SessionName"); }
	int& NumConsumedReservationsField() { return *GetNativePointerField<int*>(this, "UPartyBeaconState.NumConsumedReservations"); }
	int& MaxReservationsField() { return *GetNativePointerField<int*>(this, "UPartyBeaconState.MaxReservations"); }
	int& NumTeamsField() { return *GetNativePointerField<int*>(this, "UPartyBeaconState.NumTeams"); }
	int& NumPlayersPerTeamField() { return *GetNativePointerField<int*>(this, "UPartyBeaconState.NumPlayersPerTeam"); }
	int& ReservedHostTeamNumField() { return *GetNativePointerField<int*>(this, "UPartyBeaconState.ReservedHostTeamNum"); }
	int& ForceTeamNumField() { return *GetNativePointerField<int*>(this, "UPartyBeaconState.ForceTeamNum"); }
	TArray<FPartyReservation>& ReservationsField() { return *GetNativePointerField<TArray<FPartyReservation>*>(this, "UPartyBeaconState.Reservations"); }

	// Functions

	bool AddReservation(const FPartyReservation * ReservationRequest) { return NativeCall<bool, const FPartyReservation *>(this, "UPartyBeaconState.AddReservation", ReservationRequest); }
	bool AreTeamsAvailable(const FPartyReservation * ReservationRequest) { return NativeCall<bool, const FPartyReservation *>(this, "UPartyBeaconState.AreTeamsAvailable", ReservationRequest); }
	bool ChangeTeam(const FUniqueNetIdRepl * PartyLeader, int NewTeamNum) { return NativeCall<bool, const FUniqueNetIdRepl *, int>(this, "UPartyBeaconState.ChangeTeam", PartyLeader, NewTeamNum); }
	bool DoesReservationFit(const FPartyReservation * ReservationRequest) { return NativeCall<bool, const FPartyReservation *>(this, "UPartyBeaconState.DoesReservationFit", ReservationRequest); }
	void DumpReservations() { NativeCall<void>(this, "UPartyBeaconState.DumpReservations"); }
	int GetExistingReservation(const FUniqueNetIdRepl * PartyLeader) { return NativeCall<int, const FUniqueNetIdRepl *>(this, "UPartyBeaconState.GetExistingReservation", PartyLeader); }
	int GetNumPlayersOnTeam(int TeamIdx) { return NativeCall<int, int>(this, "UPartyBeaconState.GetNumPlayersOnTeam", TeamIdx); }
	bool GetPlayerValidation(const FUniqueNetId * PlayerId, FString * OutValidation) { return NativeCall<bool, const FUniqueNetId *, FString *>(this, "UPartyBeaconState.GetPlayerValidation", PlayerId, OutValidation); }
	int GetTeamAssignment(const FPartyReservation * Party) { return NativeCall<int, const FPartyReservation *>(this, "UPartyBeaconState.GetTeamAssignment", Party); }
	int GetTeamForCurrentPlayer(const FUniqueNetId * PlayerId) { return NativeCall<int, const FUniqueNetId *>(this, "UPartyBeaconState.GetTeamForCurrentPlayer", PlayerId); }
	bool InitState(int InTeamCount, int InTeamSize, int InMaxReservations, FName InSessionName, int InForceTeamNum) { return NativeCall<bool, int, int, int, FName, int>(this, "UPartyBeaconState.InitState", InTeamCount, InTeamSize, InMaxReservations, InSessionName, InForceTeamNum); }
	void InitTeamArray() { NativeCall<void>(this, "UPartyBeaconState.InitTeamArray"); }
	bool IsBeaconFull() { return NativeCall<bool>(this, "UPartyBeaconState.IsBeaconFull"); }
	bool PlayerHasReservation(const FUniqueNetId * PlayerId) { return NativeCall<bool, const FUniqueNetId *>(this, "UPartyBeaconState.PlayerHasReservation", PlayerId); }
	bool ReconfigureTeamAndPlayerCount(int InNumTeams, int InNumPlayersPerTeam, int InNumReservations) { return NativeCall<bool, int, int, int>(this, "UPartyBeaconState.ReconfigureTeamAndPlayerCount", InNumTeams, InNumPlayersPerTeam, InNumReservations); }
	bool RemovePlayer(const FUniqueNetIdRepl * PlayerId) { return NativeCall<bool, const FUniqueNetIdRepl *>(this, "UPartyBeaconState.RemovePlayer", PlayerId); }
	bool RemoveReservation(const FUniqueNetIdRepl * PartyLeader) { return NativeCall<bool, const FUniqueNetIdRepl *>(this, "UPartyBeaconState.RemoveReservation", PartyLeader); }
	bool SwapTeams(const FUniqueNetIdRepl * PartyLeader, const FUniqueNetIdRepl * OtherPartyLeader) { return NativeCall<bool, const FUniqueNetIdRepl *, const FUniqueNetIdRepl *>(this, "UPartyBeaconState.SwapTeams", PartyLeader, OtherPartyLeader); }
};

