#pragma once

#include "BaseDeclarations.h"
struct FSteamInventoryItemInfo
{
	char __padding[0x28L];
	unsigned __int64& PlayerIDField() { return *GetNativePointerField<unsigned __int64*>(this, "FSteamInventoryItemInfo.PlayerID"); }
	unsigned int& ItemDefIDField() { return *GetNativePointerField<unsigned int*>(this, "FSteamInventoryItemInfo.ItemDefID"); }
	unsigned __int64& UserItemIDField() { return *GetNativePointerField<unsigned __int64*>(this, "FSteamInventoryItemInfo.UserItemID"); }
	unsigned __int16& QuantityField() { return *GetNativePointerField<unsigned __int16*>(this, "FSteamInventoryItemInfo.Quantity"); }
	int& ItemArchetypeIndexField() { return *GetNativePointerField<int*>(this, "FSteamInventoryItemInfo.ItemArchetypeIndex"); }
	float& VersionField() { return *GetNativePointerField<float*>(this, "FSteamInventoryItemInfo.Version"); }
};

