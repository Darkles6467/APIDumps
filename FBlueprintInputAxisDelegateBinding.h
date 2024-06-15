#pragma once

#include "BaseDeclarations.h"
#include "FBlueprintInputDelegateBinding.h"

struct FBlueprintInputAxisDelegateBinding : FBlueprintInputDelegateBinding
{
	char __padding[0x10L];
	FName& InputAxisNameField() { return *GetNativePointerField<FName*>(this, "FBlueprintInputAxisDelegateBinding.InputAxisName"); }
	FName& FunctionNameToBindField() { return *GetNativePointerField<FName*>(this, "FBlueprintInputAxisDelegateBinding.FunctionNameToBind"); }

	// Functions

};

