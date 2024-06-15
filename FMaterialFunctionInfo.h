#pragma once

#include "BaseDeclarations.h"
struct FMaterialFunctionInfo
{
	char __padding[0x18L];
	FGuid& StateIdField() { return *GetNativePointerField<FGuid*>(this, "FMaterialFunctionInfo.StateId"); }
	UMaterialFunction * FunctionField() { return GetNativePointerField<UMaterialFunction *>(this, "FMaterialFunctionInfo.Function"); }

	// Functions

};

