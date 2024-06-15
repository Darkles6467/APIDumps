#pragma once

#include "BaseDeclarations.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SWindowTitleBar : SCompoundWidget
{
	char __padding[0x80L];
	TWeakPtr<SWindow,0>& OwnerWindowPtrField() { return *GetNativePointerField<TWeakPtr<SWindow,0>*>(this, "SWindowTitleBar.OwnerWindowPtr"); }
	const FWindowStyle * StyleField() { return GetNativePointerField<const FWindowStyle *>(this, "SWindowTitleBar.Style"); }
	FCurveSequence& TitleFlashSequenceField() { return *GetNativePointerField<FCurveSequence*>(this, "SWindowTitleBar.TitleFlashSequence"); }
};

