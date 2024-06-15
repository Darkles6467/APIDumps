#pragma once

#include "BaseDeclarations.h"
struct FConstrainComponentPropName
{
	char __padding[0x8L];
	FName& ComponentNameField() { return *GetNativePointerField<FName*>(this, "FConstrainComponentPropName.ComponentName"); }

	// Functions

};

