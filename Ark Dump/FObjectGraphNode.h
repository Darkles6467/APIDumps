#pragma once

#include "BaseDeclarations.h"
struct FObjectGraphNode
{
	char __padding[0xc0L];
	int& ReferenceDepthField() { return *GetNativePointerField<int*>(this, "FObjectGraphNode.ReferenceDepth"); }
	bool& VisitedField() { return *GetNativePointerField<bool*>(this, "FObjectGraphNode.Visited"); }

	// Functions

};

