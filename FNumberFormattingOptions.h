#pragma once

#include "BaseDeclarations.h"
struct FNumberFormattingOptions
{
	char __padding[0x18L];
	bool& UseGroupingField() { return *GetNativePointerField<bool*>(this, "FNumberFormattingOptions.UseGrouping"); }
	ERoundingMode& RoundingModeField() { return *GetNativePointerField<ERoundingMode*>(this, "FNumberFormattingOptions.RoundingMode"); }
	int& MinimumIntegralDigitsField() { return *GetNativePointerField<int*>(this, "FNumberFormattingOptions.MinimumIntegralDigits"); }
	int& MaximumIntegralDigitsField() { return *GetNativePointerField<int*>(this, "FNumberFormattingOptions.MaximumIntegralDigits"); }
	int& MinimumFractionalDigitsField() { return *GetNativePointerField<int*>(this, "FNumberFormattingOptions.MinimumFractionalDigits"); }
	int& MaximumFractionalDigitsField() { return *GetNativePointerField<int*>(this, "FNumberFormattingOptions.MaximumFractionalDigits"); }

	// Functions

};

