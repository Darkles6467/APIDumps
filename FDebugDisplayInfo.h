#pragma once

#include "BaseDeclarations.h"
struct FDebugDisplayInfo
{
	char __padding[0x20L];
	TArray<FName>& DisplayNamesField() { return *GetNativePointerField<TArray<FName>*>(this, "FDebugDisplayInfo.DisplayNames"); }
	TArray<FName>& ToggledCategoriesField() { return *GetNativePointerField<TArray<FName>*>(this, "FDebugDisplayInfo.ToggledCategories"); }
};

