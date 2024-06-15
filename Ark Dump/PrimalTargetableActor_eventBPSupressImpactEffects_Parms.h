#pragma once

#include "BaseDeclarations.h"
struct PrimalTargetableActor_eventBPSupressImpactEffects_Parms
{
	char __padding[0x50L];
	float& DamageTakenField() { return *GetNativePointerField<float*>(this, "PrimalTargetableActor_eventBPSupressImpactEffects_Parms.DamageTaken"); }
	bool& bIsLocalPathField() { return *GetNativePointerField<bool*>(this, "PrimalTargetableActor_eventBPSupressImpactEffects_Parms.bIsLocalPath"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalTargetableActor_eventBPSupressImpactEffects_Parms.ReturnValue"); }

	// Functions

};

