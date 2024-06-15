#pragma once

#include "BaseDeclarations.h"
struct PrimalStructure_eventNetSetIgnoreDestructionEffects_Parms
{
	char __padding[0x1L];
	bool& bNewIgnoreDestructionEffectsField() { return *GetNativePointerField<bool*>(this, "PrimalStructure_eventNetSetIgnoreDestructionEffects_Parms.bNewIgnoreDestructionEffects"); }
};

