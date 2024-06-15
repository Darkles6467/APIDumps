#pragma once

#include "BaseDeclarations.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SErrorHint : SCompoundWidget
{
	char __padding[0x78L];
	TAttribute<EVisibility>& CustomVisibilityField() { return *GetNativePointerField<TAttribute<EVisibility>*>(this, "SErrorHint.CustomVisibility"); }
	FCurveSequence& ExpandAnimationField() { return *GetNativePointerField<FCurveSequence*>(this, "SErrorHint.ExpandAnimation"); }
	FText& ErrorTextField() { return *GetNativePointerField<FText*>(this, "SErrorHint.ErrorText"); }
};

