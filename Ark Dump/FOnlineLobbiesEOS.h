#pragma once

#include "BaseDeclarations.h"
struct FOnlineLobbiesEOS
{
	char __padding[0x918L];
	FOnlineSubsystemEOS * EOSSubsystemField() { return GetNativePointerField<FOnlineSubsystemEOS *>(this, "FOnlineLobbiesEOS.EOSSubsystem"); }
	EOS_ProductUserIdDetails * CurrentUserProductIdField() { return GetNativePointerField<EOS_ProductUserIdDetails *>(this, "FOnlineLobbiesEOS.CurrentUserProductId"); }
	FOnlineLobbyEOS& CurrentLobbyField() { return *GetNativePointerField<FOnlineLobbyEOS*>(this, "FOnlineLobbiesEOS.CurrentLobby"); }
	FOnlineLobbyInviteEOS * CurrentInviteField() { return GetNativePointerField<FOnlineLobbyInviteEOS *>(this, "FOnlineLobbiesEOS.CurrentInvite"); }
	FOnlineLobbySearchEOS& CurrentSearchField() { return *GetNativePointerField<FOnlineLobbySearchEOS*>(this, "FOnlineLobbiesEOS.CurrentSearch"); }
	unsigned __int64& LobbyUpdateNotificationField() { return *GetNativePointerField<unsigned __int64*>(this, "FOnlineLobbiesEOS.LobbyUpdateNotification"); }
	unsigned __int64& LobbyMemberUpdateNotificationField() { return *GetNativePointerField<unsigned __int64*>(this, "FOnlineLobbiesEOS.LobbyMemberUpdateNotification"); }
	unsigned __int64& LobbyMemberStatusNotificationField() { return *GetNativePointerField<unsigned __int64*>(this, "FOnlineLobbiesEOS.LobbyMemberStatusNotification"); }
	unsigned __int64& LobbyInviteNotificationField() { return *GetNativePointerField<unsigned __int64*>(this, "FOnlineLobbiesEOS.LobbyInviteNotification"); }
	bool& bLobbyLeaveInProgressField() { return *GetNativePointerField<bool*>(this, "FOnlineLobbiesEOS.bLobbyLeaveInProgress"); }
	bool& bDirtyField() { return *GetNativePointerField<bool*>(this, "FOnlineLobbiesEOS.bDirty"); }

	// Functions

	bool DestroyCurrentLobby() { return NativeCall<bool>(this, "FOnlineLobbiesEOS.DestroyCurrentLobby"); }
	void LeaveLobby() { NativeCall<void>(this, "FOnlineLobbiesEOS.LeaveLobby"); }
	static void OnLeaveLobbyFinished(const _tagEOS_Lobby_LeaveLobbyCallbackInfo * Data) { NativeCall<void, const _tagEOS_Lobby_LeaveLobbyCallbackInfo *>(nullptr, "FOnlineLobbiesEOS.OnLeaveLobbyFinished", Data); }
	void OnLoginComplete(int LocalUserNum, bool bWasSuccessful, const FUniqueNetId * UserId, const FString * Error) { NativeCall<void, int, bool, const FUniqueNetId *, const FString *>(this, "FOnlineLobbiesEOS.OnLoginComplete", LocalUserNum, bWasSuccessful, UserId, Error); }
	void OnLogoutComplete(int LocalUserNum, bool bWasSuccessful) { NativeCall<void, int, bool>(this, "FOnlineLobbiesEOS.OnLogoutComplete", LocalUserNum, bWasSuccessful); }
	void UnsubscribeFromLobbyUpdates() { NativeCall<void>(this, "FOnlineLobbiesEOS.UnsubscribeFromLobbyUpdates"); }
};

