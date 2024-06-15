#pragma once

#include "BaseDeclarations.h"
struct PawnSensingComponent_eventHearNoiseDelegate_Parms
{
	char __padding[0x18L];
	FVector& LocationField() { return *GetNativePointerField<FVector*>(this, "PawnSensingComponent_eventHearNoiseDelegate_Parms.Location"); }
	float& VolumeField() { return *GetNativePointerField<float*>(this, "PawnSensingComponent_eventHearNoiseDelegate_Parms.Volume"); }
};

