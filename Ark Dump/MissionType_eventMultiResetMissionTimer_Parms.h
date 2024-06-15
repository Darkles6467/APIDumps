#pragma once

#include "BaseDeclarations.h"
struct MissionType_eventMultiResetMissionTimer_Parms
{
	char __padding[0x8L];
	long double& NewMissionStartNetworkTimeField() { return *GetNativePointerField<long double*>(this, "MissionType_eventMultiResetMissionTimer_Parms.NewMissionStartNetworkTime"); }
};

