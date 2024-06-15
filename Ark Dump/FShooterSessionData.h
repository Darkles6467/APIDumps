#pragma once

#include "BaseDeclarations.h"
struct FShooterSessionData
{
	char __padding[0xc0L];
	int& EntryIndexField() { return *GetNativePointerField<int*>(this, "FShooterSessionData.EntryIndex"); }
	FString& GameNameField() { return *GetNativePointerField<FString*>(this, "FShooterSessionData.GameName"); }
	FString& MapNameField() { return *GetNativePointerField<FString*>(this, "FShooterSessionData.MapName"); }
	FString& OwnerNameField() { return *GetNativePointerField<FString*>(this, "FShooterSessionData.OwnerName"); }
	FString& DayTimeStrField() { return *GetNativePointerField<FString*>(this, "FShooterSessionData.DayTimeStr"); }
	int& NumPlayersField() { return *GetNativePointerField<int*>(this, "FShooterSessionData.NumPlayers"); }
	int& MaxNumPlayersField() { return *GetNativePointerField<int*>(this, "FShooterSessionData.MaxNumPlayers"); }
	int& PingField() { return *GetNativePointerField<int*>(this, "FShooterSessionData.Ping"); }
	FString& HostAddrWithPortField() { return *GetNativePointerField<FString*>(this, "FShooterSessionData.HostAddrWithPort"); }
	FString& HostAddrField() { return *GetNativePointerField<FString*>(this, "FShooterSessionData.HostAddr"); }
	unsigned __int64& ModIdField() { return *GetNativePointerField<unsigned __int64*>(this, "FShooterSessionData.ModId"); }
	bool& bIsOfficialField() { return *GetNativePointerField<bool*>(this, "FShooterSessionData.bIsOfficial"); }
	bool& bHasPasswordField() { return *GetNativePointerField<bool*>(this, "FShooterSessionData.bHasPassword"); }
	bool& bPVEServerField() { return *GetNativePointerField<bool*>(this, "FShooterSessionData.bPVEServer"); }
	bool& bUsingBattleEyeField() { return *GetNativePointerField<bool*>(this, "FShooterSessionData.bUsingBattleEye"); }
	bool& bAllowDownloadCharactersField() { return *GetNativePointerField<bool*>(this, "FShooterSessionData.bAllowDownloadCharacters"); }
	bool& bAllowDownloadItemsField() { return *GetNativePointerField<bool*>(this, "FShooterSessionData.bAllowDownloadItems"); }
	bool& bIsLegacyServerField() { return *GetNativePointerField<bool*>(this, "FShooterSessionData.bIsLegacyServer"); }
	bool& bLastPlayedSessionField() { return *GetNativePointerField<bool*>(this, "FShooterSessionData.bLastPlayedSession"); }
	bool& bHasActiveModsField() { return *GetNativePointerField<bool*>(this, "FShooterSessionData.bHasActiveMods"); }
	int& QueryPortField() { return *GetNativePointerField<int*>(this, "FShooterSessionData.QueryPort"); }
	int& LobbyReportedBuildIDField() { return *GetNativePointerField<int*>(this, "FShooterSessionData.LobbyReportedBuildID"); }
	FString& SessionIdField() { return *GetNativePointerField<FString*>(this, "FShooterSessionData.SessionId"); }
	unsigned __int64& TotalConversionIDField() { return *GetNativePointerField<unsigned __int64*>(this, "FShooterSessionData.TotalConversionID"); }
	FGuid& IdentifierField() { return *GetNativePointerField<FGuid*>(this, "FShooterSessionData.Identifier"); }

	// Functions

	FShooterSessionData * operator=(const FShooterSessionData * __that) { return NativeCall<FShooterSessionData *, const FShooterSessionData *>(this, "FShooterSessionData.operator=", __that); }
};

