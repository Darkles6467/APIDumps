#pragma once

#include "BaseDeclarations.h"
#include "SPanel.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SSplitter2x2 : SPanel
{
	char __padding[0x28L];
	TPanelChildren<SSplitter2x2::FSlot>& ChildrenField() { return *GetNativePointerField<TPanelChildren<SSplitter2x2::FSlot>*>(this, "SSplitter2x2.Children"); }
	int& ResizingAxisField() { return *GetNativePointerField<int*>(this, "SSplitter2x2.ResizingAxis"); }
	bool& bIsResizingField() { return *GetNativePointerField<bool*>(this, "SSplitter2x2.bIsResizing"); }
	float& SplitterHandleSizeField() { return *GetNativePointerField<float*>(this, "SSplitter2x2.SplitterHandleSize"); }
};

