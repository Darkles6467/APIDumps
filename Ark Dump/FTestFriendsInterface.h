#pragma once

#include "BaseDeclarations.h"
struct FTestFriendsInterface
{
	char __padding[0x88L];
	const FString& SubsystemNameField() { return *GetNativePointerField<const FString*>(this, "FTestFriendsInterface.SubsystemName"); }
	FString& FriendsListNameField() { return *GetNativePointerField<FString*>(this, "FTestFriendsInterface.FriendsListName"); }
	bool& bReadFriendsListField() { return *GetNativePointerField<bool*>(this, "FTestFriendsInterface.bReadFriendsList"); }
	bool& bAcceptInvitesField() { return *GetNativePointerField<bool*>(this, "FTestFriendsInterface.bAcceptInvites"); }
	bool& bSendInvitesField() { return *GetNativePointerField<bool*>(this, "FTestFriendsInterface.bSendInvites"); }
	bool& bDeleteFriendsField() { return *GetNativePointerField<bool*>(this, "FTestFriendsInterface.bDeleteFriends"); }
	bool& bDeleteFriendsListField() { return *GetNativePointerField<bool*>(this, "FTestFriendsInterface.bDeleteFriendsList"); }

	// Functions

	void FinishTest() { NativeCall<void>(this, "FTestFriendsInterface.FinishTest"); }
	void OnAcceptInviteComplete(int LocalPlayer, bool bWasSuccessful, const FUniqueNetId * FriendId, const FString * ListName, const FString * ErrorStr) { NativeCall<void, int, bool, const FUniqueNetId *, const FString *, const FString *>(this, "FTestFriendsInterface.OnAcceptInviteComplete", LocalPlayer, bWasSuccessful, FriendId, ListName, ErrorStr); }
	void OnDeleteFriendComplete(int LocalPlayer, bool bWasSuccessful, const FUniqueNetId * FriendId, const FString * ListName, const FString * ErrorStr) { NativeCall<void, int, bool, const FUniqueNetId *, const FString *, const FString *>(this, "FTestFriendsInterface.OnDeleteFriendComplete", LocalPlayer, bWasSuccessful, FriendId, ListName, ErrorStr); }
	void OnDeleteFriendsListComplete(int LocalPlayer, bool bWasSuccessful, const FString * ListName, const FString * ErrorStr) { NativeCall<void, int, bool, const FString *, const FString *>(this, "FTestFriendsInterface.OnDeleteFriendsListComplete", LocalPlayer, bWasSuccessful, ListName, ErrorStr); }
	void OnReadFriendsComplete(int LocalPlayer, bool bWasSuccessful, const FString * ListName, const FString * ErrorStr) { NativeCall<void, int, bool, const FString *, const FString *>(this, "FTestFriendsInterface.OnReadFriendsComplete", LocalPlayer, bWasSuccessful, ListName, ErrorStr); }
	void OnSendInviteComplete(int LocalPlayer, bool bWasSuccessful, const FUniqueNetId * FriendId, const FString * ListName, const FString * ErrorStr) { NativeCall<void, int, bool, const FUniqueNetId *, const FString *, const FString *>(this, "FTestFriendsInterface.OnSendInviteComplete", LocalPlayer, bWasSuccessful, FriendId, ListName, ErrorStr); }
	void StartNextTest() { NativeCall<void>(this, "FTestFriendsInterface.StartNextTest"); }
	void Test(UWorld * InWorld, const TArray<FString> * Invites) { NativeCall<void, UWorld *, const TArray<FString> *>(this, "FTestFriendsInterface.Test", InWorld, Invites); }
};

