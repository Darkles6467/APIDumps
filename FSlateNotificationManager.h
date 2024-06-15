#pragma once

#include "BaseDeclarations.h"
struct FSlateNotificationManager
{
	char __padding[0x28L];
	TWeakPtr<SWindow,0>& RootWindowPtrField() { return *GetNativePointerField<TWeakPtr<SWindow,0>*>(this, "FSlateNotificationManager.RootWindowPtr"); }
	TArray<FSlateNotificationManager::FRegionalNotificationList>& RegionalListsField() { return *GetNativePointerField<TArray<FSlateNotificationManager::FRegionalNotificationList>*>(this, "FSlateNotificationManager.RegionalLists"); }
	TLockFreePointerListLIFO<FNotificationInfo>& PendingNotificationsField() { return *GetNativePointerField<TLockFreePointerListLIFO<FNotificationInfo>*>(this, "FSlateNotificationManager.PendingNotifications"); }

	// Functions

	void FRegionalNotificationList() { NativeCall<void>(this, "FSlateNotificationManager.FRegionalNotificationList"); }
	static FSlateNotificationManager * Get() { return NativeCall<FSlateNotificationManager *>(nullptr, "FSlateNotificationManager.Get"); }
	void GetWindows(TArray<TSharedRef<SWindow,0>> * OutWindows) { NativeCall<void, TArray<TSharedRef<SWindow,0>> *>(this, "FSlateNotificationManager.GetWindows", OutWindows); }
	void FRegionalNotificationList() { NativeCall<void>(this, "FSlateNotificationManager.FRegionalNotificationList"); }
	void Tick() { NativeCall<void>(this, "FSlateNotificationManager.Tick"); }
};

