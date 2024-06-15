#pragma once

#include "BaseDeclarations.h"
struct FInterpEdSelKey
{
	char __padding[0x18L];
	int& KeyIndexField() { return *GetNativePointerField<int*>(this, "FInterpEdSelKey.KeyIndex"); }
	float& UnsnappedPositionField() { return *GetNativePointerField<float*>(this, "FInterpEdSelKey.UnsnappedPosition"); }

	// Functions

};

