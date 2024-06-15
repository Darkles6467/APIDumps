#pragma once

#include "BaseDeclarations.h"
struct PrimalStructure_eventBPOverridePlacementRotation_Parms
{
	char __padding[0x24L];
	FVector& ViewPosField() { return *GetNativePointerField<FVector*>(this, "PrimalStructure_eventBPOverridePlacementRotation_Parms.ViewPos"); }
	FRotator& ViewRotField() { return *GetNativePointerField<FRotator*>(this, "PrimalStructure_eventBPOverridePlacementRotation_Parms.ViewRot"); }
	FRotator& ReturnValueField() { return *GetNativePointerField<FRotator*>(this, "PrimalStructure_eventBPOverridePlacementRotation_Parms.ReturnValue"); }
};

