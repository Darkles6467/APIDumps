#pragma once

#include "BaseDeclarations.h"
#include "FGPUProfilerEventNodeStats.h"

struct FGPUProfilerEventNode : FGPUProfilerEventNodeStats
{
	char __padding[0x28L];
	FString& NameField() { return *GetNativePointerField<FString*>(this, "FGPUProfilerEventNode.Name"); }

	// Functions

};

