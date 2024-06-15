#pragma once

#include "BaseDeclarations.h"
struct FEditedDocumentInfo
{
	char __padding[0x18L];
	FVector2D& SavedViewOffsetField() { return *GetNativePointerField<FVector2D*>(this, "FEditedDocumentInfo.SavedViewOffset"); }
	float& SavedZoomAmountField() { return *GetNativePointerField<float*>(this, "FEditedDocumentInfo.SavedZoomAmount"); }

	// Functions

};

