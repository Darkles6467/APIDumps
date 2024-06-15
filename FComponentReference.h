#pragma once

#include "BaseDeclarations.h"
struct FComponentReference
{
	char __padding[0x18L];
	FName& ComponentPropertyField() { return *GetNativePointerField<FName*>(this, "FComponentReference.ComponentProperty"); }

	// Functions

};

