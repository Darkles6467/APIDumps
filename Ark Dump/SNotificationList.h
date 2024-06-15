#pragma once

#include "BaseDeclarations.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SNotificationList : SCompoundWidget
{
	char __padding[0x28L];
	TSharedPtr<SVerticalBox,0>& MessageItemBoxPtrField() { return *GetNativePointerField<TSharedPtr<SVerticalBox,0>*>(this, "SNotificationList.MessageItemBoxPtr"); }
	TWeakPtr<SWindow,0>& ParentWindowPtrField() { return *GetNativePointerField<TWeakPtr<SWindow,0>*>(this, "SNotificationList.ParentWindowPtr"); }
	bool& bDoneField() { return *GetNativePointerField<bool*>(this, "SNotificationList.bDone"); }
};

