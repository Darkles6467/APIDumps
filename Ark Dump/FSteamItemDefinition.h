#pragma once

#include "BaseDeclarations.h"
struct FSteamItemDefinition
{
	char __padding[0x8L];
	unsigned int& ItemDefIDField() { return *GetNativePointerField<unsigned int*>(this, "FSteamItemDefinition.ItemDefID"); }
	int& ItemArchetypeIndexField() { return *GetNativePointerField<int*>(this, "FSteamItemDefinition.ItemArchetypeIndex"); }
};

