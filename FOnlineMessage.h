#pragma once

#include "BaseDeclarations.h"
struct FOnlineMessage
{
	char __padding[0x20L];
	FOnlineMessagePayload& PayloadField() { return *GetNativePointerField<FOnlineMessagePayload*>(this, "FOnlineMessage.Payload"); }
};

