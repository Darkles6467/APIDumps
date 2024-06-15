#pragma once

#include "BaseDeclarations.h"
struct FAnchorData
{
	char __padding[0x28L];
	FMargin& OffsetsField() { return *GetNativePointerField<FMargin*>(this, "FAnchorData.Offsets"); }
	FAnchors& AnchorsField() { return *GetNativePointerField<FAnchors*>(this, "FAnchorData.Anchors"); }
	FVector2D& AlignmentField() { return *GetNativePointerField<FVector2D*>(this, "FAnchorData.Alignment"); }

	// Functions

};

