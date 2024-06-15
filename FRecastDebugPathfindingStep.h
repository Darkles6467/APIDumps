#pragma once

#include "BaseDeclarations.h"
struct FRecastDebugPathfindingStep
{
	char __padding[0x58L];
	FSetElementId& BestNodeField() { return *GetNativePointerField<FSetElementId*>(this, "FRecastDebugPathfindingStep.BestNode"); }
};

