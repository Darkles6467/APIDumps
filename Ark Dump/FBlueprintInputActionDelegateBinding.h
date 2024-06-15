#pragma once

#include "BaseDeclarations.h"
#include "FBlueprintInputDelegateBinding.h"

struct FBlueprintInputActionDelegateBinding : FBlueprintInputDelegateBinding
{
	char __padding[0x14L];
	FName& InputActionNameField() { return *GetNativePointerField<FName*>(this, "FBlueprintInputActionDelegateBinding.InputActionName"); }
	TEnumAsByte<enum EInputEvent>& InputKeyEventField() { return *GetNativePointerField<TEnumAsByte<enum EInputEvent>*>(this, "FBlueprintInputActionDelegateBinding.InputKeyEvent"); }
	FName& FunctionNameToBindField() { return *GetNativePointerField<FName*>(this, "FBlueprintInputActionDelegateBinding.FunctionNameToBind"); }

	// Functions

};

