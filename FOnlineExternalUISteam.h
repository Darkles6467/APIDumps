#pragma once

#include "BaseDeclarations.h"
struct IOnlineExternalUI
{
	char __padding[0x28L];
};

struct FOnlineExternalUISteam : IOnlineExternalUI
{
	char __padding[0x8L];
	FOnlineSubsystemSteam * SteamSubsystemField() { return GetNativePointerField<FOnlineSubsystemSteam *>(this, "FOnlineExternalUISteam.SteamSubsystem"); }
};

