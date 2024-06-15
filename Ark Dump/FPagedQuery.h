#pragma once

#include "BaseDeclarations.h"
struct FPagedQuery
{
	char __padding[0x8L];
	int& StartField() { return *GetNativePointerField<int*>(this, "FPagedQuery.Start"); }
	int& CountField() { return *GetNativePointerField<int*>(this, "FPagedQuery.Count"); }
};

