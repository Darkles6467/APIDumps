#pragma once

#include "BaseDeclarations.h"
struct FNavGraphEdge
{
	char __padding[0x18L];
	FNavGraphNode * StartField() { return GetNativePointerField<FNavGraphNode *>(this, "FNavGraphEdge.Start"); }
	FNavGraphNode * EndField() { return GetNativePointerField<FNavGraphNode *>(this, "FNavGraphEdge.End"); }

	// Functions

};

