#pragma once

#include "BaseDeclarations.h"
struct FAnimParentNodeAssetOverride
{
	char __padding[0x18L];
	FGuid& ParentNodeGuidField() { return *GetNativePointerField<FGuid*>(this, "FAnimParentNodeAssetOverride.ParentNodeGuid"); }

	// Functions

};

