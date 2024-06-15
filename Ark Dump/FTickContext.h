#pragma once

#include "BaseDeclarations.h"
struct FTickContext
{
	char __padding[0x10L];
	float& DeltaSecondsField() { return *GetNativePointerField<float*>(this, "FTickContext.DeltaSeconds"); }
	ELevelTick& TickTypeField() { return *GetNativePointerField<ELevelTick*>(this, "FTickContext.TickType"); }
	ETickingGroup& TickGroupField() { return *GetNativePointerField<ETickingGroup*>(this, "FTickContext.TickGroup"); }
	ENamedThreads::Type& ThreadField() { return *GetNativePointerField<ENamedThreads::Type*>(this, "FTickContext.Thread"); }
};

