#pragma once

#include "BaseDeclarations.h"
struct SteamItemDetails_t
{
	char __padding[0x10L];
	unsigned __int64& m_itemIdField() { return *GetNativePointerField<unsigned __int64*>(this, "SteamItemDetails_t.m_itemId"); }
	int& m_iDefinitionField() { return *GetNativePointerField<int*>(this, "SteamItemDetails_t.m_iDefinition"); }
	unsigned __int16& m_unQuantityField() { return *GetNativePointerField<unsigned __int16*>(this, "SteamItemDetails_t.m_unQuantity"); }
	unsigned __int16& m_unFlagsField() { return *GetNativePointerField<unsigned __int16*>(this, "SteamItemDetails_t.m_unFlags"); }
};

