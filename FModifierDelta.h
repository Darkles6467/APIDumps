#pragma once

#include "BaseDeclarations.h"
struct FModifierDelta
{
	char __padding[0x10L];
	FName& WorldBuffIdentifierField() { return *GetNativePointerField<FName*>(this, "FModifierDelta.WorldBuffIdentifier"); }
	int& RepresentingStackSizeField() { return *GetNativePointerField<int*>(this, "FModifierDelta.RepresentingStackSize"); }
	float& DeltaField() { return *GetNativePointerField<float*>(this, "FModifierDelta.Delta"); }

	// Functions

};

