#pragma once

#include "BaseDeclarations.h"
struct HazardTrigger_Slide_eventSpawnProjectile_Parms
{
	char __padding[0x18L];
	FVector& LocationField() { return *GetNativePointerField<FVector*>(this, "HazardTrigger_Slide_eventSpawnProjectile_Parms.Location"); }
	FVector& HeadingField() { return *GetNativePointerField<FVector*>(this, "HazardTrigger_Slide_eventSpawnProjectile_Parms.Heading"); }
};

