#pragma once

#include "BaseDeclarations.h"
struct FMaterialRelevance
{
	char __padding[0x4L];

	// Functions

	void SetPrimitiveViewRelevance(FPrimitiveViewRelevance * OutViewRelevance) { NativeCall<void, FPrimitiveViewRelevance *>(this, "FMaterialRelevance.SetPrimitiveViewRelevance", OutViewRelevance); }
};

