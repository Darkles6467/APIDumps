#pragma once

#include "BaseDeclarations.h"
struct FOnlineNotification
{
	char __padding[0x20L];
	FString& TypeStrField() { return *GetNativePointerField<FString*>(this, "FOnlineNotification.TypeStr"); }
};

