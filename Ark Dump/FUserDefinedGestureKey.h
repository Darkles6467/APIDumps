#pragma once

#include "BaseDeclarations.h"
struct FUserDefinedGestureKey
{
	char __padding[0x10L];
	FName& BindingContextField() { return *GetNativePointerField<FName*>(this, "FUserDefinedGestureKey.BindingContext"); }
	FName& CommandNameField() { return *GetNativePointerField<FName*>(this, "FUserDefinedGestureKey.CommandName"); }
};

