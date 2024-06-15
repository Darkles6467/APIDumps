#pragma once

#include "BaseDeclarations.h"
struct FChildZOrder
{
	char __padding[0x8L];
	int& ChildIndexField() { return *GetNativePointerField<int*>(this, "FChildZOrder.ChildIndex"); }
	int& ZOrderField() { return *GetNativePointerField<int*>(this, "FChildZOrder.ZOrder"); }
};

