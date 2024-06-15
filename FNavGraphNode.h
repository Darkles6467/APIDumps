#pragma once

#include "BaseDeclarations.h"
struct FNavGraphNode
{
	char __padding[0x18L];
	TArray<FNavGraphEdge>& EdgesField() { return *GetNativePointerField<TArray<FNavGraphEdge>*>(this, "FNavGraphNode.Edges"); }

	// Functions

};

