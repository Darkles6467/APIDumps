#pragma once

#include "BaseDeclarations.h"
struct ExpensiveFunctionRegister
{
	char __padding[0x18L];
	bool& bExpensiveFunctionRanField() { return *GetNativePointerField<bool*>(this, "ExpensiveFunctionRegister.bExpensiveFunctionRan"); }

	// Functions

};

