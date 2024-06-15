#pragma once

#include "BaseDeclarations.h"
struct FSlateStyleRegistry
{

	// Functions

	static void RegisterSlateStyle(const ISlateStyle * InSlateStyle) { NativeCall<void, const ISlateStyle *>(nullptr, "FSlateStyleRegistry.RegisterSlateStyle", InSlateStyle); }
	static void UnRegisterSlateStyle(const FName StyleSetName) { NativeCall<void, const FName>(nullptr, "FSlateStyleRegistry.UnRegisterSlateStyle", StyleSetName); }
};

