#pragma once

#include "BaseDeclarations.h"
#include "SBorder.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SExpandableButton : SBorder
{
	char __padding[0x18L];
	TAttribute<bool>& IsExpandedField() { return *GetNativePointerField<TAttribute<bool>*>(this, "SExpandableButton.IsExpanded"); }
};

