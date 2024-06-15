#pragma once

#include "BaseDeclarations.h"
#include "FBlueprintInputDelegateBinding.h"

struct FBlueprintInputKeyDelegateBinding : FBlueprintInputDelegateBinding
{
	char __padding[0x34L];
	FInputChord& InputChordField() { return *GetNativePointerField<FInputChord*>(this, "FBlueprintInputKeyDelegateBinding.InputChord"); }
	TEnumAsByte<enum EInputEvent>& InputKeyEventField() { return *GetNativePointerField<TEnumAsByte<enum EInputEvent>*>(this, "FBlueprintInputKeyDelegateBinding.InputKeyEvent"); }
	FName& FunctionNameToBindField() { return *GetNativePointerField<FName*>(this, "FBlueprintInputKeyDelegateBinding.FunctionNameToBind"); }

	// Functions

};

