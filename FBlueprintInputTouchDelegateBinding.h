#pragma once

#include "BaseDeclarations.h"
#include "FBlueprintInputDelegateBinding.h"

struct FBlueprintInputTouchDelegateBinding : FBlueprintInputDelegateBinding
{
	char __padding[0xcL];
	TEnumAsByte<enum EInputEvent>& InputKeyEventField() { return *GetNativePointerField<TEnumAsByte<enum EInputEvent>*>(this, "FBlueprintInputTouchDelegateBinding.InputKeyEvent"); }
	FName& FunctionNameToBindField() { return *GetNativePointerField<FName*>(this, "FBlueprintInputTouchDelegateBinding.FunctionNameToBind"); }

	// Functions

};

