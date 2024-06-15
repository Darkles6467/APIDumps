#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_MissionData_eventServerRequestEquipMissionItem_Parms
{
	char __padding[0x10L];
	FItemNetID& ItemIDField() { return *GetNativePointerField<FItemNetID*>(this, "PrimalBuff_MissionData_eventServerRequestEquipMissionItem_Parms.ItemID"); }
};

