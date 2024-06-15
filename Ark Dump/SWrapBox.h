#pragma once

#include "BaseDeclarations.h"
#include "SPanel.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SWrapBox : SPanel
{
	char __padding[0x40L];
	TAttribute<float>& PreferredWidthField() { return *GetNativePointerField<TAttribute<float>*>(this, "SWrapBox.PreferredWidth"); }
	FVector2D& InnerSlotPaddingField() { return *GetNativePointerField<FVector2D*>(this, "SWrapBox.InnerSlotPadding"); }
	bool& bUseAllottedWidthField() { return *GetNativePointerField<bool*>(this, "SWrapBox.bUseAllottedWidth"); }
};

