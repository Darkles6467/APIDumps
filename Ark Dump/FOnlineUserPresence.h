#pragma once

#include "BaseDeclarations.h"
struct FOnlineUserPresence
{
	char __padding[0x60L];
	FString& PresenceStrField() { return *GetNativePointerField<FString*>(this, "FOnlineUserPresence.PresenceStr"); }
	FOnlineKeyValuePairs<FString,FVariantData>& PresenceField() { return *GetNativePointerField<FOnlineKeyValuePairs<FString,FVariantData>*>(this, "FOnlineUserPresence.Presence"); }

	// Functions

	void Reset() { NativeCall<void>(this, "FOnlineUserPresence.Reset"); }
};

