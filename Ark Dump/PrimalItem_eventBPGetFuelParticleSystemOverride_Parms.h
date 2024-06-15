#pragma once

#include "BaseDeclarations.h"
struct PrimalItem_eventBPGetFuelParticleSystemOverride_Parms
{
	char __padding[0x10L];
	UParticleSystem * ReturnValueField() { return GetNativePointerField<UParticleSystem *>(this, "PrimalItem_eventBPGetFuelParticleSystemOverride_Parms.ReturnValue"); }

	// Functions

};

