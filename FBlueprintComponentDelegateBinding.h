#pragma once

#include "BaseDeclarations.h"
struct FBlueprintComponentDelegateBinding
{
	char __padding[0x18L];
	FName& ComponentPropertyNameField() { return *GetNativePointerField<FName*>(this, "FBlueprintComponentDelegateBinding.ComponentPropertyName"); }
	FName& FunctionNameToBindField() { return *GetNativePointerField<FName*>(this, "FBlueprintComponentDelegateBinding.FunctionNameToBind"); }

	// Functions

};

