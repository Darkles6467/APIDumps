#pragma once

#include "BaseDeclarations.h"
#include "FTickerObjectBase.h"

struct FTestSessionInterface : FTickerObjectBase
{
	char __padding[0x1b0L];
	const FString& SubsystemField() { return *GetNativePointerField<const FString*>(this, "FTestSessionInterface.Subsystem"); }
	bool& bOverallSuccessField() { return *GetNativePointerField<bool*>(this, "FTestSessionInterface.bOverallSuccess"); }
	bool& bIsHostField() { return *GetNativePointerField<bool*>(this, "FTestSessionInterface.bIsHost"); }
	UWorld * WorldField() { return GetNativePointerField<UWorld *>(this, "FTestSessionInterface.World"); }
	TSharedPtr<TestOnlineGameSettings,0>& HostSettingsField() { return *GetNativePointerField<TSharedPtr<TestOnlineGameSettings,0>*>(this, "FTestSessionInterface.HostSettings"); }
	TSharedPtr<TestOnlineSearchSettings,0>& SearchSettingsField() { return *GetNativePointerField<TSharedPtr<TestOnlineSearchSettings,0>*>(this, "FTestSessionInterface.SearchSettings"); }
	int& TestPhaseField() { return *GetNativePointerField<int*>(this, "FTestSessionInterface.TestPhase"); }
	int& LastTestPhaseField() { return *GetNativePointerField<int*>(this, "FTestSessionInterface.LastTestPhase"); }
	bool& bWasLastCommandSuccessfulField() { return *GetNativePointerField<bool*>(this, "FTestSessionInterface.bWasLastCommandSuccessful"); }

	// Functions

	bool Exec(UWorld * InWorld, const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, UWorld *, const wchar_t *, FOutputDevice *>(this, "FTestSessionInterface.Exec", InWorld, Cmd, Ar); }
	void JoinSession(int LocalUserNum, FName SessionName, const FOnlineSessionSearchResult * SearchResult) { NativeCall<void, int, FName, const FOnlineSessionSearchResult *>(this, "FTestSessionInterface.JoinSession", LocalUserNum, SessionName, SearchResult); }
	void OnCancelFindSessionsComplete(bool bWasSuccessful) { NativeCall<void, bool>(this, "FTestSessionInterface.OnCancelFindSessionsComplete", bWasSuccessful); }
	void OnCreateSessionComplete(FName SessionName, bool bWasSuccessful) { NativeCall<void, FName, bool>(this, "FTestSessionInterface.OnCreateSessionComplete", SessionName, bWasSuccessful); }
	void OnDestroyForJoinSessionComplete(FName SessionName, bool bWasSuccessful) { NativeCall<void, FName, bool>(this, "FTestSessionInterface.OnDestroyForJoinSessionComplete", SessionName, bWasSuccessful); }
	void OnDestroySessionComplete(FName SessionName, bool bWasSuccessful) { NativeCall<void, FName, bool>(this, "FTestSessionInterface.OnDestroySessionComplete", SessionName, bWasSuccessful); }
	void OnEndForJoinSessionComplete(FName SessionName, bool bWasSuccessful) { NativeCall<void, FName, bool>(this, "FTestSessionInterface.OnEndForJoinSessionComplete", SessionName, bWasSuccessful); }
	void OnEndSessionComplete(FName SessionName, bool bWasSuccessful) { NativeCall<void, FName, bool>(this, "FTestSessionInterface.OnEndSessionComplete", SessionName, bWasSuccessful); }
	void OnFindFriendSessionComplete(int LocalUserNum, bool bWasSuccessful, const FOnlineSessionSearchResult * SearchResult) { NativeCall<void, int, bool, const FOnlineSessionSearchResult *>(this, "FTestSessionInterface.OnFindFriendSessionComplete", LocalUserNum, bWasSuccessful, SearchResult); }
	void OnFindSessionsComplete(bool bWasSuccessful) { NativeCall<void, bool>(this, "FTestSessionInterface.OnFindSessionsComplete", bWasSuccessful); }
	void OnJoinSessionComplete(FName SessionName, EOnJoinSessionCompleteResult::Type Result) { NativeCall<void, FName, EOnJoinSessionCompleteResult::Type>(this, "FTestSessionInterface.OnJoinSessionComplete", SessionName, Result); }
	void OnReadFriendsListComplete(int LocalUserNum, bool bWasSuccessful, const FString * ListName, const FString * ErrorStr) { NativeCall<void, int, bool, const FString *, const FString *>(this, "FTestSessionInterface.OnReadFriendsListComplete", LocalUserNum, bWasSuccessful, ListName, ErrorStr); }
	void OnRegisterPlayerComplete(FName SessionName, const TArray<TSharedRef<FUniqueNetId,0>> * Players, bool bWasSuccessful) { NativeCall<void, FName, const TArray<TSharedRef<FUniqueNetId,0>> *, bool>(this, "FTestSessionInterface.OnRegisterPlayerComplete", SessionName, Players, bWasSuccessful); }
	void OnSessionInviteAccepted(int LocalUserNum, bool bWasSuccessful, const FOnlineSessionSearchResult * SearchResult) { NativeCall<void, int, bool, const FOnlineSessionSearchResult *>(this, "FTestSessionInterface.OnSessionInviteAccepted", LocalUserNum, bWasSuccessful, SearchResult); }
	void OnStartSessionComplete(FName SessionName, bool bWasSuccessful) { NativeCall<void, FName, bool>(this, "FTestSessionInterface.OnStartSessionComplete", SessionName, bWasSuccessful); }
	void OnUnregisterPlayerComplete(FName SessionName, const TArray<TSharedRef<FUniqueNetId,0>> * Players, bool bWasSuccessful) { NativeCall<void, FName, const TArray<TSharedRef<FUniqueNetId,0>> *, bool>(this, "FTestSessionInterface.OnUnregisterPlayerComplete", SessionName, Players, bWasSuccessful); }
	void OnUpdateSessionComplete(FName SessionName, bool bWasSuccessful) { NativeCall<void, FName, bool>(this, "FTestSessionInterface.OnUpdateSessionComplete", SessionName, bWasSuccessful); }
	void Test(UWorld * InWorld, bool bTestLAN, bool bIsPresence) { NativeCall<void, UWorld *, bool, bool>(this, "FTestSessionInterface.Test", InWorld, bTestLAN, bIsPresence); }
	bool Tick(float DeltaTime) { return NativeCall<bool, float>(this, "FTestSessionInterface.Tick", DeltaTime); }
	void WorldDestroyed(UWorld * InWorld) { NativeCall<void, UWorld *>(this, "FTestSessionInterface.WorldDestroyed", InWorld); }
};

