#pragma once

#include "BaseDeclarations.h"
struct FPopupSupport
{
	char __padding[0x10L];
	TArray<FPopupSupport::FClickSubscriber>& ClickZoneNotificationsField() { return *GetNativePointerField<TArray<FPopupSupport::FClickSubscriber>*>(this, "FPopupSupport.ClickZoneNotifications"); }

	// Functions

	void FClickSubscriber() { NativeCall<void>(this, "FPopupSupport.FClickSubscriber"); }
};

