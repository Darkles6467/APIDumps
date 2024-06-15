#pragma once

#include "BaseDeclarations.h"
struct MissionType_ModularMissionBase_eventAddSpecialWorldIndicator_Parms
{
	char __padding[0xa8L];
	FMissionWorldIndicator& IndicatorToAddField() { return *GetNativePointerField<FMissionWorldIndicator*>(this, "MissionType_ModularMissionBase_eventAddSpecialWorldIndicator_Parms.IndicatorToAdd"); }
};

