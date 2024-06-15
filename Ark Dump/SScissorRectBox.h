#pragma once

#include "BaseDeclarations.h"
#include "SPanel.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SScissorRectBox : SPanel
{
	char __padding[0x20L];
	SScissorRectBox::FScissorRectSlot& ChildSlotField() { return *GetNativePointerField<SScissorRectBox::FScissorRectSlot*>(this, "SScissorRectBox.ChildSlot"); }
};

