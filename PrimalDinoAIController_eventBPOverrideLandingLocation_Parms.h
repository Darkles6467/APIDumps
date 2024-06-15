#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoAIController_eventBPOverrideLandingLocation_Parms
{
	char __padding[0x10L];
	float& outRadiusField() { return *GetNativePointerField<float*>(this, "PrimalDinoAIController_eventBPOverrideLandingLocation_Parms.outRadius"); }
	FVector& ReturnValueField() { return *GetNativePointerField<FVector*>(this, "PrimalDinoAIController_eventBPOverrideLandingLocation_Parms.ReturnValue"); }
};

