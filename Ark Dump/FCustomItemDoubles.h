#pragma once

#include "BaseDeclarations.h"
struct FCustomItemDoubles
{
	char __padding[0x10L];
	TArray<double>& DoublesField() { return *GetNativePointerField<TArray<double>*>(this, "FCustomItemDoubles.Doubles"); }

	// Functions

};

