#pragma once

#include "BaseDeclarations.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SNotificationListTest : SCompoundWidget
{
	char __padding[0x30L];
	bool& bUseLargeFontField() { return *GetNativePointerField<bool*>(this, "SNotificationListTest.bUseLargeFont"); }
	bool& bAddDummyButtonsField() { return *GetNativePointerField<bool*>(this, "SNotificationListTest.bAddDummyButtons"); }
	bool& bAddDummyCheckBoxField() { return *GetNativePointerField<bool*>(this, "SNotificationListTest.bAddDummyCheckBox"); }
	bool& bAddDummyHyperlinkField() { return *GetNativePointerField<bool*>(this, "SNotificationListTest.bAddDummyHyperlink"); }
	TSharedPtr<SNotificationList,0>& NotificationListPtrField() { return *GetNativePointerField<TSharedPtr<SNotificationList,0>*>(this, "SNotificationListTest.NotificationListPtr"); }
	ESlateCheckBoxState::Type& DummyCheckBoxStateField() { return *GetNativePointerField<ESlateCheckBoxState::Type*>(this, "SNotificationListTest.DummyCheckBoxState"); }
};

