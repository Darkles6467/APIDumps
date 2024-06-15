#pragma once

#include "BaseDeclarations.h"
struct FTeamBalanceInfo
{
	char __padding[0x8L];
	int& TeamIdxField() { return *GetNativePointerField<int*>(this, "FTeamBalanceInfo.TeamIdx"); }
	int& TeamSizeField() { return *GetNativePointerField<int*>(this, "FTeamBalanceInfo.TeamSize"); }
};

