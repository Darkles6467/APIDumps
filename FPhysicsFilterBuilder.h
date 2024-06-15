#pragma once

#include "BaseDeclarations.h"
struct FPhysicsFilterBuilder
{
	char __padding[0xcL];
	unsigned int& BlockingBitsField() { return *GetNativePointerField<unsigned int*>(this, "FPhysicsFilterBuilder.BlockingBits"); }
	unsigned int& TouchingBitsField() { return *GetNativePointerField<unsigned int*>(this, "FPhysicsFilterBuilder.TouchingBits"); }
	unsigned int& Word3Field() { return *GetNativePointerField<unsigned int*>(this, "FPhysicsFilterBuilder.Word3"); }

	// Functions

};

