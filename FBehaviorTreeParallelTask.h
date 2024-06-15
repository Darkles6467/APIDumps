#pragma once

#include "BaseDeclarations.h"
struct FBehaviorTreeParallelTask
{
	char __padding[0x10L];
	TEnumAsByte<enum EBTTaskStatus::Type>& StatusField() { return *GetNativePointerField<TEnumAsByte<enum EBTTaskStatus::Type>*>(this, "FBehaviorTreeParallelTask.Status"); }
};

