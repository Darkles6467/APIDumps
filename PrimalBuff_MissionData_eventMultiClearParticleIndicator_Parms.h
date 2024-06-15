#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_MissionData_eventMultiClearParticleIndicator_Parms
{
	char __padding[0x4L];
	float& RemoveAfterDurationField() { return *GetNativePointerField<float*>(this, "PrimalBuff_MissionData_eventMultiClearParticleIndicator_Parms.RemoveAfterDuration"); }
};

