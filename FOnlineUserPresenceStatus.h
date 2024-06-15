#pragma once

#include "BaseDeclarations.h"
struct FOnlineUserPresenceStatus
{
	char __padding[0x28L];
	FString& StatusStrField() { return *GetNativePointerField<FString*>(this, "FOnlineUserPresenceStatus.StatusStr"); }
	FieldArray<_BYTE, 1> StateField() { return {this, "FOnlineUserPresenceStatus.State"}; }
	FOnlineKeyValuePairs<FString,FVariantData>& PropertiesField() { return *GetNativePointerField<FOnlineKeyValuePairs<FString,FVariantData>*>(this, "FOnlineUserPresenceStatus.Properties"); }

	// Functions

};

