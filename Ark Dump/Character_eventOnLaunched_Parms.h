#pragma once

#include "BaseDeclarations.h"
struct Character_eventOnLaunched_Parms
{
	char __padding[0x10L];
	FVector& LaunchVelocityField() { return *GetNativePointerField<FVector*>(this, "Character_eventOnLaunched_Parms.LaunchVelocity"); }
	bool& bXYOverrideField() { return *GetNativePointerField<bool*>(this, "Character_eventOnLaunched_Parms.bXYOverride"); }
	bool& bZOverrideField() { return *GetNativePointerField<bool*>(this, "Character_eventOnLaunched_Parms.bZOverride"); }
};

