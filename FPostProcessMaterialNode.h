#pragma once

#include "BaseDeclarations.h"
struct FPostProcessMaterialNode
{
	char __padding[0x18L];
	bool& bIsMIDField() { return *GetNativePointerField<bool*>(this, "FPostProcessMaterialNode.bIsMID"); }
	EBlendableLocation& LocationField() { return *GetNativePointerField<EBlendableLocation*>(this, "FPostProcessMaterialNode.Location"); }
	int& PriorityField() { return *GetNativePointerField<int*>(this, "FPostProcessMaterialNode.Priority"); }
};

