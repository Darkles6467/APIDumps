#pragma once

#include "BaseDeclarations.h"
struct FLatentActionInfo
{
	char __padding[0x18L];
	int& LinkageField() { return *GetNativePointerField<int*>(this, "FLatentActionInfo.Linkage"); }
	int& UUIDField() { return *GetNativePointerField<int*>(this, "FLatentActionInfo.UUID"); }
	FName& ExecutionFunctionField() { return *GetNativePointerField<FName*>(this, "FLatentActionInfo.ExecutionFunction"); }

	// Functions

};

