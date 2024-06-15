#pragma once

#include "BaseDeclarations.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SScrollBorder : SCompoundWidget
{
	char __padding[0x38L];
	TAttribute<FVector2D>& BorderFadeDistanceField() { return *GetNativePointerField<TAttribute<FVector2D>*>(this, "SScrollBorder.BorderFadeDistance"); }
	TAttribute<TWeakPtr<IScrollableWidget,0> >& ScrollableWidgetField() { return *GetNativePointerField<TAttribute<TWeakPtr<IScrollableWidget,0> >*>(this, "SScrollBorder.ScrollableWidget"); }
};

