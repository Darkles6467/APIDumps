#pragma once

#include "BaseDeclarations.h"
struct IOnlineFriends
{
	char __padding[0xe8L];

	// Functions

};

struct FOnlineFriendsSteam : IOnlineFriends
{
	char __padding[0x68L];
	FOnlineSubsystemSteam * SteamSubsystemField() { return GetNativePointerField<FOnlineSubsystemSteam *>(this, "FOnlineFriendsSteam.SteamSubsystem"); }
	ISteamUser * SteamUserPtrField() { return GetNativePointerField<ISteamUser *>(this, "FOnlineFriendsSteam.SteamUserPtr"); }
	ISteamFriends * SteamFriendsPtrField() { return GetNativePointerField<ISteamFriends *>(this, "FOnlineFriendsSteam.SteamFriendsPtr"); }
};

