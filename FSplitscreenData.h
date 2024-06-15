#pragma once

#include "BaseDeclarations.h"
struct FSplitscreenData
{
	char __padding[0x10L];
	TArray<FPerPlayerSplitscreenData>& PlayerDataField() { return *GetNativePointerField<TArray<FPerPlayerSplitscreenData>*>(this, "FSplitscreenData.PlayerData"); }
};

