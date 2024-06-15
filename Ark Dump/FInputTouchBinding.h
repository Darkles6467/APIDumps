#pragma once

#include "BaseDeclarations.h"
#include "FInputBinding.h"

struct FInputTouchBinding : FInputBinding
{
	char __padding[0x1cL];
	TEnumAsByte<enum EInputEvent>& KeyEventField() { return *GetNativePointerField<TEnumAsByte<enum EInputEvent>*>(this, "FInputTouchBinding.KeyEvent"); }
};

