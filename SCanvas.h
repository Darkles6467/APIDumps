#pragma once

#include "BaseDeclarations.h"
#include "SPanel.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SCanvas : SPanel
{
	char __padding[0x18L];
	TPanelChildren<SCanvas::FSlot>& ChildrenField() { return *GetNativePointerField<TPanelChildren<SCanvas::FSlot>*>(this, "SCanvas.Children"); }
};

