#pragma once

#include "BaseDeclarations.h"
struct FScriptField
{
	char __padding[0x10L];
	FName& NameField() { return *GetNativePointerField<FName*>(this, "FScriptField.Name"); }
};

