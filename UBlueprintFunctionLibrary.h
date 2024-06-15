#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"

struct UBlueprintFunctionLibrary : UObject
{

	// Functions

	int GetFunctionCallspace(UFunction * Function, void * Parameters, FFrame * Stack) { return NativeCall<int, UFunction *, void *, FFrame *>(this, "UBlueprintFunctionLibrary.GetFunctionCallspace", Function, Parameters, Stack); }
};

