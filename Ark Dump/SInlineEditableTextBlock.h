#pragma once

#include "BaseDeclarations.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SInlineEditableTextBlock : SCompoundWidget
{
	char __padding[0xa8L];
	TSharedPtr<STextBlock,0>& TextBlockField() { return *GetNativePointerField<TSharedPtr<STextBlock,0>*>(this, "SInlineEditableTextBlock.TextBlock"); }
	float& DoubleSelectDelayField() { return *GetNativePointerField<float*>(this, "SInlineEditableTextBlock.DoubleSelectDelay"); }
	TAttribute<FText>& TextField() { return *GetNativePointerField<TAttribute<FText>*>(this, "SInlineEditableTextBlock.Text"); }
	TAttribute<bool>& bIsReadOnlyField() { return *GetNativePointerField<TAttribute<bool>*>(this, "SInlineEditableTextBlock.bIsReadOnly"); }
};

