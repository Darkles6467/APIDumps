#pragma once

#include "BaseDeclarations.h"
struct FOnlineSessionSettings
{
	char __padding[0x30L];
	int& NumPublicConnectionsField() { return *GetNativePointerField<int*>(this, "FOnlineSessionSettings.NumPublicConnections"); }
	int& NumPrivateConnectionsField() { return *GetNativePointerField<int*>(this, "FOnlineSessionSettings.NumPrivateConnections"); }
	bool& bShouldAdvertiseField() { return *GetNativePointerField<bool*>(this, "FOnlineSessionSettings.bShouldAdvertise"); }
	bool& bAllowJoinInProgressField() { return *GetNativePointerField<bool*>(this, "FOnlineSessionSettings.bAllowJoinInProgress"); }
	bool& bIsLANMatchField() { return *GetNativePointerField<bool*>(this, "FOnlineSessionSettings.bIsLANMatch"); }
	bool& bIsDedicatedField() { return *GetNativePointerField<bool*>(this, "FOnlineSessionSettings.bIsDedicated"); }
	bool& bUsesStatsField() { return *GetNativePointerField<bool*>(this, "FOnlineSessionSettings.bUsesStats"); }
	bool& bAllowInvitesField() { return *GetNativePointerField<bool*>(this, "FOnlineSessionSettings.bAllowInvites"); }
	bool& bUsesPresenceField() { return *GetNativePointerField<bool*>(this, "FOnlineSessionSettings.bUsesPresence"); }
	bool& bAllowJoinViaPresenceField() { return *GetNativePointerField<bool*>(this, "FOnlineSessionSettings.bAllowJoinViaPresence"); }
	bool& bAllowJoinViaPresenceFriendsOnlyField() { return *GetNativePointerField<bool*>(this, "FOnlineSessionSettings.bAllowJoinViaPresenceFriendsOnly"); }
	bool& bAntiCheatProtectedField() { return *GetNativePointerField<bool*>(this, "FOnlineSessionSettings.bAntiCheatProtected"); }
	bool& bUsingVivoxField() { return *GetNativePointerField<bool*>(this, "FOnlineSessionSettings.bUsingVivox"); }
	unsigned int& BuildUniqueIdField() { return *GetNativePointerField<unsigned int*>(this, "FOnlineSessionSettings.BuildUniqueId"); }
	FOnlineKeyValuePairs<FName,FOnlineSessionSetting>& SettingsField() { return *GetNativePointerField<FOnlineKeyValuePairs<FName,FOnlineSessionSetting>*>(this, "FOnlineSessionSettings.Settings"); }

	// Functions

	bool Remove(FName Key) { return NativeCall<bool, FName>(this, "FOnlineSessionSettings.Remove", Key); }
	void Set(FName Key, const FOnlineSessionSetting * SrcSetting) { NativeCall<void, FName, const FOnlineSessionSetting *>(this, "FOnlineSessionSettings.Set", Key, SrcSetting); }
};

