#pragma once

#include "BaseDeclarations.h"
struct FTabMatcher
{
	char __padding[0x14L];
	FTabId& TabIdToMatchField() { return *GetNativePointerField<FTabId*>(this, "FTabMatcher.TabIdToMatch"); }
	ETabState::Type& RequiredTabStateField() { return *GetNativePointerField<ETabState::Type*>(this, "FTabMatcher.RequiredTabState"); }
	bool& TreatIndexNoneAsWildcardField() { return *GetNativePointerField<bool*>(this, "FTabMatcher.TreatIndexNoneAsWildcard"); }
};

