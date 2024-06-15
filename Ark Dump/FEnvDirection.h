#pragma once

#include "BaseDeclarations.h"
struct FEnvDirection
{
	char __padding[0x20L];
	TEnumAsByte<enum EEnvDirection::Type>& DirModeField() { return *GetNativePointerField<TEnumAsByte<enum EEnvDirection::Type>*>(this, "FEnvDirection.DirMode"); }

	// Functions

	FText * ToText(FText * result) { return NativeCall<FText *, FText *>(this, "FEnvDirection.ToText", result); }
};

