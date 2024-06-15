#pragma once

#include "BaseDeclarations.h"
struct FOnlineAsyncItem
{
	char __padding[0x10L];
	long double& StartTimeField() { return *GetNativePointerField<long double*>(this, "FOnlineAsyncItem.StartTime"); }
};

struct FOnlineAsyncTask : FOnlineAsyncItem
{
};

struct FOnlineAsyncTaskSteamReadFriendsList : FOnlineAsyncTask
{
	char __padding[0x10L];
	int& LocalUserNumField() { return *GetNativePointerField<int*>(this, "FOnlineAsyncTaskSteamReadFriendsList.LocalUserNum"); }
};

