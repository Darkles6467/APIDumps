#pragma once

#include "BaseDeclarations.h"
struct MissionType_ModularMissionBase_eventRemoveSpecialWorldIndicator_Parms
{
	char __padding[0xa8L];
	FMissionWorldIndicator& IndicatorToRemoveField() { return *GetNativePointerField<FMissionWorldIndicator*>(this, "MissionType_ModularMissionBase_eventRemoveSpecialWorldIndicator_Parms.IndicatorToRemove"); }
};

