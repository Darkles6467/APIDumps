#pragma once

#include "BaseDeclarations.h"
struct FOnlineNotificationHandler
{
	char __padding[0x58L];
	FOnlineNotificationBinding& DefaultBindingField() { return *GetNativePointerField<FOnlineNotificationBinding*>(this, "FOnlineNotificationHandler.DefaultBinding"); }
};

