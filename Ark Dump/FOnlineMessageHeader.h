#pragma once

#include "BaseDeclarations.h"
struct FOnlineMessageHeader
{
	char __padding[0x50L];
	FString& FromNameField() { return *GetNativePointerField<FString*>(this, "FOnlineMessageHeader.FromName"); }
	FString& TypeField() { return *GetNativePointerField<FString*>(this, "FOnlineMessageHeader.Type"); }
	FString& TimeStampField() { return *GetNativePointerField<FString*>(this, "FOnlineMessageHeader.TimeStamp"); }
};

