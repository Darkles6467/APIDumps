#pragma once

#include "BaseDeclarations.h"
struct FOnlineSessionSearchParam
{
	char __padding[0x20L];
	FVariantData& DataField() { return *GetNativePointerField<FVariantData*>(this, "FOnlineSessionSearchParam.Data"); }
	EOnlineComparisonOp::Type& ComparisonOpField() { return *GetNativePointerField<EOnlineComparisonOp::Type*>(this, "FOnlineSessionSearchParam.ComparisonOp"); }
};

