#pragma once

#include "BaseDeclarations.h"
struct FSparseItemInfo
{
	char __padding[0x2L];
	bool& bIsExpandedField() { return *GetNativePointerField<bool*>(this, "FSparseItemInfo.bIsExpanded"); }
	bool& bHasExpandedChildrenField() { return *GetNativePointerField<bool*>(this, "FSparseItemInfo.bHasExpandedChildren"); }
};

