#pragma once

#include "BaseDeclarations.h"
struct FSlateChildSize
{
	char __padding[0x8L];
	float& ValueField() { return *GetNativePointerField<float*>(this, "FSlateChildSize.Value"); }
	TEnumAsByte<enum ESlateSizeRule::Type>& SizeRuleField() { return *GetNativePointerField<TEnumAsByte<enum ESlateSizeRule::Type>*>(this, "FSlateChildSize.SizeRule"); }

	// Functions

};

