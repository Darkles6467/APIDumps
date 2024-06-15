#pragma once

#include "BaseDeclarations.h"
#include "FChildren.h"

struct FVisibleChildren : FChildren
{
	char __padding[0x10L];
	TPanelChildren<SScrollBox::FSlot> * ChildrenField() { return GetNativePointerField<TPanelChildren<SScrollBox::FSlot> *>(this, "FVisibleChildren.Children"); }
	int& OffsetField() { return *GetNativePointerField<int*>(this, "FVisibleChildren.Offset"); }
	int& CountField() { return *GetNativePointerField<int*>(this, "FVisibleChildren.Count"); }

	// Functions

};

