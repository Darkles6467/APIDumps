#pragma once

#include "BaseDeclarations.h"
#include "FBlueprintInputDelegateBinding.h"

struct FBlueprintInputAxisKeyDelegateBinding : FBlueprintInputDelegateBinding
{
	char __padding[0x24L];
	FKey& AxisKeyField() { return *GetNativePointerField<FKey*>(this, "FBlueprintInputAxisKeyDelegateBinding.AxisKey"); }
	FName& FunctionNameToBindField() { return *GetNativePointerField<FName*>(this, "FBlueprintInputAxisKeyDelegateBinding.FunctionNameToBind"); }

	// Functions

};

