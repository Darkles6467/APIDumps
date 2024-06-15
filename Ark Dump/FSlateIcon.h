#pragma once

#include "BaseDeclarations.h"
struct FSlateIcon
{
	char __padding[0x1cL];
	FName& StyleSetNameField() { return *GetNativePointerField<FName*>(this, "FSlateIcon.StyleSetName"); }
	FName& StyleNameField() { return *GetNativePointerField<FName*>(this, "FSlateIcon.StyleName"); }
	FName& SmallStyleNameField() { return *GetNativePointerField<FName*>(this, "FSlateIcon.SmallStyleName"); }
	bool& bIsSetField() { return *GetNativePointerField<bool*>(this, "FSlateIcon.bIsSet"); }

	// Functions

};

