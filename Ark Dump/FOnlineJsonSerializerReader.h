#pragma once

#include "BaseDeclarations.h"
#include "FOnlineJsonSerializerBase.h"

struct FOnlineJsonSerializerReader : FOnlineJsonSerializerBase
{
	char __padding[0x10L];
	TSharedPtr<FJsonObject,0>& JsonObjectField() { return *GetNativePointerField<TSharedPtr<FJsonObject,0>*>(this, "FOnlineJsonSerializerReader.JsonObject"); }
};

