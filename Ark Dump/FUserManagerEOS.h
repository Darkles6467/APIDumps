#pragma once

#include "BaseDeclarations.h"
#include "IOnlineIdentity.h"
#include "FUniqueNetIdEOS.h"
#include "FOnlineUser.h"
#include "IAttributeAccessInterface.h"
#include "FOnlineUserPresence.h"

struct FUserManagerEOS : IOnlineIdentity
{
	char __padding[0x748L];
	FOnlineSubsystemEOS * EOSSubsystemField() { return GetNativePointerField<FOnlineSubsystemEOS *>(this, "FUserManagerEOS.EOSSubsystem"); }
	int& DefaultLocalUserField() { return *GetNativePointerField<int*>(this, "FUserManagerEOS.DefaultLocalUser"); }
	unsigned __int64& LoginNotificationIdField() { return *GetNativePointerField<unsigned __int64*>(this, "FUserManagerEOS.LoginNotificationId"); }
	FCallbackBase * LoginNotificationCallbackField() { return GetNativePointerField<FCallbackBase *>(this, "FUserManagerEOS.LoginNotificationCallback"); }
	unsigned __int64& FriendsNotificationIdField() { return *GetNativePointerField<unsigned __int64*>(this, "FUserManagerEOS.FriendsNotificationId"); }
	FCallbackBase * FriendsNotificationCallbackField() { return GetNativePointerField<FCallbackBase *>(this, "FUserManagerEOS.FriendsNotificationCallback"); }
	unsigned __int64& PresenceNotificationIdField() { return *GetNativePointerField<unsigned __int64*>(this, "FUserManagerEOS.PresenceNotificationId"); }
	FCallbackBase * PresenceNotificationCallbackField() { return GetNativePointerField<FCallbackBase *>(this, "FUserManagerEOS.PresenceNotificationCallback"); }

	// Functions

	bool AcceptInvite(int LocalUserNum, const FUniqueNetId * FriendId, const FString * ListName) { return NativeCall<bool, int, const FUniqueNetId *, const FString *>(this, "FUserManagerEOS.AcceptInvite", LocalUserNum, FriendId, ListName); }
	void AddFriend(int LocalUserNum, EOS_EpicAccountIdDetails * EpicAccountId) { NativeCall<void, int, EOS_EpicAccountIdDetails *>(this, "FUserManagerEOS.AddFriend", LocalUserNum, EpicAccountId); }
	void AddLocalUser(int LocalUserNum, EOS_EpicAccountIdDetails * EpicAccountId, EOS_ProductUserIdDetails * UserId) { NativeCall<void, int, EOS_EpicAccountIdDetails *, EOS_ProductUserIdDetails *>(this, "FUserManagerEOS.AddLocalUser", LocalUserNum, EpicAccountId, UserId); }
	void AddRemotePlayer(const FString * NetId, EOS_EpicAccountIdDetails * EpicAccountId) { NativeCall<void, const FString *, EOS_EpicAccountIdDetails *>(this, "FUserManagerEOS.AddRemotePlayer", NetId, EpicAccountId); }
	void AddRemotePlayer(const FString * NetId, EOS_EpicAccountIdDetails * EpicAccountId, TSharedPtr<FUniqueNetIdEOS,0> UniqueNetId, TSharedPtr<FOnlineUser,0> OnlineUser, TSharedRef<IAttributeAccessInterface,0> AttributeRef) { NativeCall<void, const FString *, EOS_EpicAccountIdDetails *, TSharedPtr<FUniqueNetIdEOS,0>, TSharedPtr<FOnlineUser,0>, TSharedRef<IAttributeAccessInterface,0>>(this, "FUserManagerEOS.AddRemotePlayer", NetId, EpicAccountId, UniqueNetId, OnlineUser, AttributeRef); }
	void ConnectLogin(int LocalUserNum, EOS_EpicAccountIdDetails * AccountId) { NativeCall<void, int, EOS_EpicAccountIdDetails *>(this, "FUserManagerEOS.ConnectLogin", LocalUserNum, AccountId); }
	void CreateConnectedLogin(int LocalUserNum, EOS_EpicAccountIdDetails * AccountId, EOS_ContinuanceTokenDetails * Token) { NativeCall<void, int, EOS_EpicAccountIdDetails *, EOS_ContinuanceTokenDetails *>(this, "FUserManagerEOS.CreateConnectedLogin", LocalUserNum, AccountId, Token); }
	void FriendStatusChanged(const _tagEOS_Friends_OnFriendsUpdateInfo * Data) { NativeCall<void, const _tagEOS_Friends_OnFriendsUpdateInfo *>(this, "FUserManagerEOS.FriendStatusChanged", Data); }
	void FullLoginCallback(int LocalUserNum, EOS_EpicAccountIdDetails * AccountId, EOS_ProductUserIdDetails * UserId) { NativeCall<void, int, EOS_EpicAccountIdDetails *, EOS_ProductUserIdDetails *>(this, "FUserManagerEOS.FullLoginCallback", LocalUserNum, AccountId, UserId); }
	bool GetAllUserInfo(int LocalUserNum, TArray<TSharedRef<FOnlineUser,0>> * OutUsers) { return NativeCall<bool, int, TArray<TSharedRef<FOnlineUser,0>> *>(this, "FUserManagerEOS.GetAllUserInfo", LocalUserNum, OutUsers); }
	FString * GetAuthToken(FString * result, int LocalUserNum) { return NativeCall<FString *, FString *, int>(this, "FUserManagerEOS.GetAuthToken", result, LocalUserNum); }
	FString * GetAuthType(FString * result) { return NativeCall<FString *, FString *>(this, "FUserManagerEOS.GetAuthType", result); }
	EOnlineCachedResult::Type GetCachedPresence(const FUniqueNetId * UserId, TSharedPtr<FOnlineUserPresence,0> * OutPresence) { return NativeCall<EOnlineCachedResult::Type, const FUniqueNetId *, TSharedPtr<FOnlineUserPresence,0> *>(this, "FUserManagerEOS.GetCachedPresence", UserId, OutPresence); }
	EOnlineCachedResult::Type GetCachedPresenceForApp(const FUniqueNetId * __formal, const FUniqueNetId * UserId, const FString * __formal, TSharedPtr<FOnlineUserPresence,0> * OutPresence) { return NativeCall<EOnlineCachedResult::Type, const FUniqueNetId *, const FUniqueNetId *, const FString *, TSharedPtr<FOnlineUserPresence,0> *>(this, "FUserManagerEOS.GetCachedPresenceForApp", __formal, UserId, __formal, OutPresence); }
	void GetExternalIdMappings(const FExternalIdQueryOptions * QueryOptions, const TArray<FString> * ExternalIds, TArray<TSharedPtr<FUniqueNetId const ,0>> * OutIds) { NativeCall<void, const FExternalIdQueryOptions *, const TArray<FString> *, TArray<TSharedPtr<FUniqueNetId const ,0>> *>(this, "FUserManagerEOS.GetExternalIdMappings", QueryOptions, ExternalIds, OutIds); }
	bool GetFriendsList(int LocalUserNum, const FString * ListName, TArray<TSharedRef<FOnlineFriend,0>> * OutFriends) { return NativeCall<bool, int, const FString *, TArray<TSharedRef<FOnlineFriend,0>> *>(this, "FUserManagerEOS.GetFriendsList", LocalUserNum, ListName, OutFriends); }
	EOS_EpicAccountIdDetails * GetLocalEpicAccountId(int LocalUserNum) { return NativeCall<EOS_EpicAccountIdDetails *, int>(this, "FUserManagerEOS.GetLocalEpicAccountId", LocalUserNum); }
	EOS_ProductUserIdDetails * GetLocalProductUserId(int LocalUserNum) { return NativeCall<EOS_ProductUserIdDetails *, int>(this, "FUserManagerEOS.GetLocalProductUserId", LocalUserNum); }
	int GetLocalUserNumFromEpicAccountId(EOS_EpicAccountIdDetails * AccountId) { return NativeCall<int, EOS_EpicAccountIdDetails *>(this, "FUserManagerEOS.GetLocalUserNumFromEpicAccountId", AccountId); }
	int GetLocalUserNumFromProductUserId(EOS_ProductUserIdDetails * UserId) { return NativeCall<int, EOS_ProductUserIdDetails *>(this, "FUserManagerEOS.GetLocalUserNumFromProductUserId", UserId); }
	int GetLocalUserNumFromUniqueNetId(const FUniqueNetId * NetId) { return NativeCall<int, const FUniqueNetId *>(this, "FUserManagerEOS.GetLocalUserNumFromUniqueNetId", NetId); }
	ELoginStatus::Type GetLoginStatus(const FUniqueNetIdEOS * UserId) { return NativeCall<ELoginStatus::Type, const FUniqueNetIdEOS *>(this, "FUserManagerEOS.GetLoginStatus", UserId); }
	ELoginStatus::Type GetLoginStatus(const FUniqueNetId * UserId) { return NativeCall<ELoginStatus::Type, const FUniqueNetId *>(this, "FUserManagerEOS.GetLoginStatus", UserId); }
	ELoginStatus::Type GetLoginStatus(int LocalUserNum) { return NativeCall<ELoginStatus::Type, int>(this, "FUserManagerEOS.GetLoginStatus", LocalUserNum); }
	int GetPlatformUserIdFromUniqueNetId(const FUniqueNetId * UniqueNetId) { return NativeCall<int, const FUniqueNetId *>(this, "FUserManagerEOS.GetPlatformUserIdFromUniqueNetId", UniqueNetId); }
	FString * GetPlayerNickname(FString * result, const FUniqueNetId * UserId) { return NativeCall<FString *, FString *, const FUniqueNetId *>(this, "FUserManagerEOS.GetPlayerNickname", result, UserId); }
	FString * GetPlayerNickname(FString * result, int LocalUserNum) { return NativeCall<FString *, FString *, int>(this, "FUserManagerEOS.GetPlayerNickname", result, LocalUserNum); }
	EOS_ProductUserIdDetails * GetProductUserId(const FUniqueNetId * NetId) { return NativeCall<EOS_ProductUserIdDetails *, const FUniqueNetId *>(this, "FUserManagerEOS.GetProductUserId", NetId); }
	bool IsFriend(int LocalUserNum, const FUniqueNetId * FriendId, const FString * ListName) { return NativeCall<bool, int, const FUniqueNetId *, const FString *>(this, "FUserManagerEOS.IsFriend", LocalUserNum, FriendId, ListName); }
	bool Login(int LocalUserNum, const FOnlineAccountCredentials * AccountCredentials) { return NativeCall<bool, int, const FOnlineAccountCredentials *>(this, "FUserManagerEOS.Login", LocalUserNum, AccountCredentials); }
	void LoginStatusChanged(const _tagEOS_Auth_LoginStatusChangedCallbackInfo * Data) { NativeCall<void, const _tagEOS_Auth_LoginStatusChangedCallbackInfo *>(this, "FUserManagerEOS.LoginStatusChanged", Data); }
	bool Logout(int LocalUserNum) { return NativeCall<bool, int>(this, "FUserManagerEOS.Logout", LocalUserNum); }
	bool QueryUserInfo(int LocalUserNum, const TArray<TSharedRef<FUniqueNetId,0>> * UserIds) { return NativeCall<bool, int, const TArray<TSharedRef<FUniqueNetId,0>> *>(this, "FUserManagerEOS.QueryUserInfo", LocalUserNum, UserIds); }
	bool ReadFriendsList(int LocalUserNum, const FString * ListName) { return NativeCall<bool, int, const FString *>(this, "FUserManagerEOS.ReadFriendsList", LocalUserNum, ListName); }
	void ReadUserInfo(EOS_EpicAccountIdDetails * EpicAccountId) { NativeCall<void, EOS_EpicAccountIdDetails *>(this, "FUserManagerEOS.ReadUserInfo", EpicAccountId); }
	void RefreshConnectLogin(int LocalUserNum) { NativeCall<void, int>(this, "FUserManagerEOS.RefreshConnectLogin", LocalUserNum); }
	bool RejectInvite(int LocalUserNum, const FUniqueNetId * FriendId, const FString * ListName) { return NativeCall<bool, int, const FUniqueNetId *, const FString *>(this, "FUserManagerEOS.RejectInvite", LocalUserNum, FriendId, ListName); }
	void RemoveLocalUser(int LocalUserNum) { NativeCall<void, int>(this, "FUserManagerEOS.RemoveLocalUser", LocalUserNum); }
	bool SendInvite(int LocalUserNum, const FUniqueNetId * FriendId, const FString * ListName) { return NativeCall<bool, int, const FUniqueNetId *, const FString *>(this, "FUserManagerEOS.SendInvite", LocalUserNum, FriendId, ListName); }
	void UpdateFriendPresence(const FString * FriendId, TSharedRef<FOnlineUserPresence,0> Presence) { NativeCall<void, const FString *, TSharedRef<FOnlineUserPresence,0>>(this, "FUserManagerEOS.UpdateFriendPresence", FriendId, Presence); }
	void UpdatePresence(EOS_EpicAccountIdDetails * AccountId) { NativeCall<void, EOS_EpicAccountIdDetails *>(this, "FUserManagerEOS.UpdatePresence", AccountId); }
	void UpdateRemotePlayerProductUserId(EOS_EpicAccountIdDetails * AccountId, EOS_ProductUserIdDetails * UserId) { NativeCall<void, EOS_EpicAccountIdDetails *, EOS_ProductUserIdDetails *>(this, "FUserManagerEOS.UpdateRemotePlayerProductUserId", AccountId, UserId); }
	void UpdateUserInfo(TSharedRef<IAttributeAccessInterface,0> AttributeAccessRef, EOS_EpicAccountIdDetails * LocalId, EOS_EpicAccountIdDetails * AccountId) { NativeCall<void, TSharedRef<IAttributeAccessInterface,0>, EOS_EpicAccountIdDetails *, EOS_EpicAccountIdDetails *>(this, "FUserManagerEOS.UpdateUserInfo", AttributeAccessRef, LocalId, AccountId); }
};

