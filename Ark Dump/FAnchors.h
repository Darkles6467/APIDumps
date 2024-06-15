#pragma once

#include "BaseDeclarations.h"
struct FAnchors
{
	char __padding[0x10L];
	FVector2D& MinimumField() { return *GetNativePointerField<FVector2D*>(this, "FAnchors.Minimum"); }
	FVector2D& MaximumField() { return *GetNativePointerField<FVector2D*>(this, "FAnchors.Maximum"); }

	// Functions

};

