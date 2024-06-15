#pragma once

#include "BaseDeclarations.h"
#include "SMultiBlockBaseWidget.h"
#include "IMultiBlockBaseWidget.h"

struct SToolBarComboButtonBlock : SMultiBlockBaseWidget
{
	char __padding[0x50L];
	TAttribute<EVisibility>& LabelVisibilityField() { return *GetNativePointerField<TAttribute<EVisibility>*>(this, "SToolBarComboButtonBlock.LabelVisibility"); }
	TAttribute<FSlateIcon>& IconField() { return *GetNativePointerField<TAttribute<FSlateIcon>*>(this, "SToolBarComboButtonBlock.Icon"); }
	bool& bForceSmallIconsField() { return *GetNativePointerField<bool*>(this, "SToolBarComboButtonBlock.bForceSmallIcons"); }
};

