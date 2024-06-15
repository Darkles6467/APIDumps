#pragma once

#include "BaseDeclarations.h"
struct FPathFindingResult
{
	char __padding[0x18L];
	ENavigationQueryResult::Type& ResultField() { return *GetNativePointerField<ENavigationQueryResult::Type*>(this, "FPathFindingResult.Result"); }

	// Functions

	FPathFindingResult * operator=(const FPathFindingResult * __that) { return NativeCall<FPathFindingResult *, const FPathFindingResult *>(this, "FPathFindingResult.operator=", __that); }
};

