#pragma once

#include "BaseDeclarations.h"
struct FHibernationCountInfo
{
	char __padding[0x10L];
	int& CountField() { return *GetNativePointerField<int*>(this, "FHibernationCountInfo.Count"); }

	// Functions

};

