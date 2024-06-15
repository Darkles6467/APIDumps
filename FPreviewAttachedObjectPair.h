#pragma once

#include "BaseDeclarations.h"
struct FPreviewAttachedObjectPair
{
	char __padding[0x30L];
	FName& AttachedToField() { return *GetNativePointerField<FName*>(this, "FPreviewAttachedObjectPair.AttachedTo"); }

	// Functions

};

