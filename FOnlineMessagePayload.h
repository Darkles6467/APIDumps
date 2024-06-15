#pragma once

#include "BaseDeclarations.h"
struct FOnlineMessagePayload
{
	char __padding[0x10L];
	FOnlineKeyValuePairs<FString,FVariantData>& KeyValDataField() { return *GetNativePointerField<FOnlineKeyValuePairs<FString,FVariantData>*>(this, "FOnlineMessagePayload.KeyValData"); }
};

