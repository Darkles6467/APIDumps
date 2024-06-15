#pragma once

#include "BaseDeclarations.h"
struct PrimalStructure_eventUpdateTribeGroupStructureRank_Parms
{
	char __padding[0x1L];
	char& NewRankField() { return *GetNativePointerField<char*>(this, "PrimalStructure_eventUpdateTribeGroupStructureRank_Parms.NewRank"); }
};

