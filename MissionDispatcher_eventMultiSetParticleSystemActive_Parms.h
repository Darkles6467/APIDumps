#pragma once

#include "BaseDeclarations.h"
struct MissionDispatcher_eventMultiSetParticleSystemActive_Parms
{
	char __padding[0x1L];
	bool& bIsActiveField() { return *GetNativePointerField<bool*>(this, "MissionDispatcher_eventMultiSetParticleSystemActive_Parms.bIsActive"); }
};

