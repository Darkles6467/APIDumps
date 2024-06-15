#pragma once

#include "BaseDeclarations.h"
struct FLeaderboardColumnDefinition
{
	char __padding[0x38L];
	float& WidthPercentField() { return *GetNativePointerField<float*>(this, "FLeaderboardColumnDefinition.WidthPercent"); }
	FMargin& ColumnPaddingField() { return *GetNativePointerField<FMargin*>(this, "FLeaderboardColumnDefinition.ColumnPadding"); }
	FSlateFontInfo& FontField() { return *GetNativePointerField<FSlateFontInfo*>(this, "FLeaderboardColumnDefinition.Font"); }

	// Functions

};

