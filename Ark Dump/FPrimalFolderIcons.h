#pragma once

#include "BaseDeclarations.h"
struct FPrimalFolderIcons
{
	char __padding[0x20L];
	FColor& TextColorField() { return *GetNativePointerField<FColor*>(this, "FPrimalFolderIcons.TextColor"); }

	// Functions

};

