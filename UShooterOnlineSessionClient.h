#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UOnlineSession : UObject
{

	// Functions

	void HandleDisconnect(UWorld * World, UNetDriver * NetDriver) { NativeCall<void, UWorld *, UNetDriver *>(this, "UOnlineSession.HandleDisconnect", World, NetDriver); }
};

struct UOnlineSessionClient : UOnlineSession
{
	char __padding[0xd8L];
	bool& bIsFromInviteField() { return *GetNativePointerField<bool*>(this, "UOnlineSessionClient.bIsFromInvite"); }
	bool& bHandlingDisconnectField() { return *GetNativePointerField<bool*>(this, "UOnlineSessionClient.bHandlingDisconnect"); }

	// Functions

	void HandleDisconnect(UWorld * World, UNetDriver * NetDriver) { NativeCall<void, UWorld *, UNetDriver *>(this, "UOnlineSessionClient.HandleDisconnect", World, NetDriver); }
	bool HandleDisconnectInternal(UWorld * World, UNetDriver * NetDriver) { return NativeCall<bool, UWorld *, UNetDriver *>(this, "UOnlineSessionClient.HandleDisconnectInternal", World, NetDriver); }
	void JoinSession(int LocalUserNum, FName SessionName, const FOnlineSessionSearchResult * SearchResult) { NativeCall<void, int, FName, const FOnlineSessionSearchResult *>(this, "UOnlineSessionClient.JoinSession", LocalUserNum, SessionName, SearchResult); }
	void OnDestroyForJoinSessionComplete(FName SessionName, bool bWasSuccessful) { NativeCall<void, FName, bool>(this, "UOnlineSessionClient.OnDestroyForJoinSessionComplete", SessionName, bWasSuccessful); }
	void OnDestroyForMainMenuComplete(FName SessionName, bool bWasSuccessful) { NativeCall<void, FName, bool>(this, "UOnlineSessionClient.OnDestroyForMainMenuComplete", SessionName, bWasSuccessful); }
	void OnEndForJoinSessionComplete(FName SessionName, bool bWasSuccessful) { NativeCall<void, FName, bool>(this, "UOnlineSessionClient.OnEndForJoinSessionComplete", SessionName, bWasSuccessful); }
	void OnJoinSessionComplete(FName SessionName, EOnJoinSessionCompleteResult::Type Result) { NativeCall<void, FName, EOnJoinSessionCompleteResult::Type>(this, "UOnlineSessionClient.OnJoinSessionComplete", SessionName, Result); }
	void OnPlayerAcceptInviteInitiated(int LocalUserNum, const FString * ServerIp) { NativeCall<void, int, const FString *>(this, "UOnlineSessionClient.OnPlayerAcceptInviteInitiated", LocalUserNum, ServerIp); }
	void OnSessionInviteAccepted(int LocalUserNum, bool bWasSuccessful, const FOnlineSessionSearchResult * SearchResult) { NativeCall<void, int, bool, const FOnlineSessionSearchResult *>(this, "UOnlineSessionClient.OnSessionInviteAccepted", LocalUserNum, bWasSuccessful, SearchResult); }
	void RemoveFirstNamedSession() { NativeCall<void>(this, "UOnlineSessionClient.RemoveFirstNamedSession"); }
};

struct UShooterOnlineSessionClient : UOnlineSessionClient
{

	// Functions

	bool ShouldAcceptInvite(int LocalUserNum, const FOnlineSessionSearchResult * SearchResult) { return NativeCall<bool, int, const FOnlineSessionSearchResult *>(this, "UShooterOnlineSessionClient.ShouldAcceptInvite", LocalUserNum, SearchResult); }
};

