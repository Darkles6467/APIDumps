#pragma once

#include "BaseDeclarations.h"
#include "FOnlineUser.h"

struct FOnlineFriend : FOnlineUser
{
};

struct FOnlineFriendSteam : FOnlineFriend
{
	char __padding[0xc0L];
};

