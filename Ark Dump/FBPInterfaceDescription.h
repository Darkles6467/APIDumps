#pragma once

#include "BaseDeclarations.h"
struct FBPInterfaceDescription
{
	char __padding[0x18L];
	TArray<UEdGraph *>& GraphsField() { return *GetNativePointerField<TArray<UEdGraph *>*>(this, "FBPInterfaceDescription.Graphs"); }

	// Functions

};

