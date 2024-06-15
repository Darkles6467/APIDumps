#pragma once

#include "BaseDeclarations.h"
struct FBTCompositeMemory
{
	char __padding[0x2L];
	char& CurrentChildField() { return *GetNativePointerField<char*>(this, "FBTCompositeMemory.CurrentChild"); }
	char& OverrideChildField() { return *GetNativePointerField<char*>(this, "FBTCompositeMemory.OverrideChild"); }
};

struct FBTParallelMemory : FBTCompositeMemory
{
	char __padding[0x2L];
	TEnumAsByte<enum EBTNodeResult::Type>& MainTaskResultField() { return *GetNativePointerField<TEnumAsByte<enum EBTNodeResult::Type>*>(this, "FBTParallelMemory.MainTaskResult"); }
};

