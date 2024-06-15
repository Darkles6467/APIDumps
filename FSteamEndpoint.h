#pragma once

#include "BaseDeclarations.h"
struct FSteamEndpoint
{
	char __padding[0x10L];
	int& SteamChannelField() { return *GetNativePointerField<int*>(this, "FSteamEndpoint.SteamChannel"); }
	unsigned __int64& UniqueNetIdField() { return *GetNativePointerField<unsigned __int64*>(this, "FSteamEndpoint.UniqueNetId"); }
};

