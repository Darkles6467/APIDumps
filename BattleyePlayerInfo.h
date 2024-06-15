#pragma once

#include "BaseDeclarations.h"
struct BattleyePlayerInfo
{
	char __padding[0x28L];
	int& iPIDField() { return *GetNativePointerField<int*>(this, "BattleyePlayerInfo.iPID"); }
	BattleyePlayerStatus& StatusField() { return *GetNativePointerField<BattleyePlayerStatus*>(this, "BattleyePlayerInfo.Status"); }
};

