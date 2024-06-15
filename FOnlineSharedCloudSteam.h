#pragma once

#include "BaseDeclarations.h"
struct IOnlineSharedCloud
{
	char __padding[0x48L];
};

struct FOnlineSharedCloudSteam : IOnlineSharedCloud
{
	char __padding[0x18L];
	FOnlineSubsystemSteam * SteamSubsystemField() { return GetNativePointerField<FOnlineSubsystemSteam *>(this, "FOnlineSharedCloudSteam.SteamSubsystem"); }
};

