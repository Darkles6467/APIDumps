#pragma once

#include "BaseDeclarations.h"
struct FNodeTitleTextTable
{
	char __padding[0xa0L];
	FieldArray<FNodeTextCache, 4> CachedNodeTitlesField() { return {this, "FNodeTitleTextTable.CachedNodeTitles"}; }
};

struct FNodeTextTable : FNodeTitleTextTable
{
	char __padding[0x28L];
	FNodeTextCache& CachedTooltipField() { return *GetNativePointerField<FNodeTextCache*>(this, "FNodeTextTable.CachedTooltip"); }
};

