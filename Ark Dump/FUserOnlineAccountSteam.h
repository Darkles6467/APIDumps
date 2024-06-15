#pragma once

#include "BaseDeclarations.h"
#include "FUserOnlineAccount.h"
#include "FOnlineUser.h"

struct FUserOnlineAccountSteam : FUserOnlineAccount
{
	char __padding[0x20L];
	FString& AuthTicketField() { return *GetNativePointerField<FString*>(this, "FUserOnlineAccountSteam.AuthTicket"); }
};

