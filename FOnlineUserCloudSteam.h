#pragma once

#include "BaseDeclarations.h"
struct IOnlineUserCloud
{
	char __padding[0x88L];
};

struct FOnlineUserCloudSteam : IOnlineUserCloud
{
	char __padding[0x8L];
	FOnlineSubsystemSteam * SteamSubsystemField() { return GetNativePointerField<FOnlineSubsystemSteam *>(this, "FOnlineUserCloudSteam.SteamSubsystem"); }
};

