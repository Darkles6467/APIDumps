#pragma once

#include "BaseDeclarations.h"
struct FSpriteCategoryInfo
{
	char __padding[0x58L];
	FName& CategoryField() { return *GetNativePointerField<FName*>(this, "FSpriteCategoryInfo.Category"); }
	FText& DisplayNameField() { return *GetNativePointerField<FText*>(this, "FSpriteCategoryInfo.DisplayName"); }
	FText& DescriptionField() { return *GetNativePointerField<FText*>(this, "FSpriteCategoryInfo.Description"); }

	// Functions

};

