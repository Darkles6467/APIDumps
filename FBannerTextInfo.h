#pragma once

#include "BaseDeclarations.h"
struct FBannerTextInfo
{
	char __padding[0x18L];
	UTextRenderComponent * TextComponentField() { return GetNativePointerField<UTextRenderComponent *>(this, "FBannerTextInfo.TextComponent"); }
	bool& bActiveField() { return *GetNativePointerField<bool*>(this, "FBannerTextInfo.bActive"); }

	// Functions

	void CleanUp() { NativeCall<void>(this, "FBannerTextInfo.CleanUp"); }
	void Create(ASOTFNotificationDisplay * NotificationDisplay) { NativeCall<void, ASOTFNotificationDisplay *>(this, "FBannerTextInfo.Create", NotificationDisplay); }
	void Hide(ASOTFNotification * Notification) { NativeCall<void, ASOTFNotification *>(this, "FBannerTextInfo.Hide", Notification); }
	void Show(ASOTFNotification * Notification, FString Text) { NativeCall<void, ASOTFNotification *, FString>(this, "FBannerTextInfo.Show", Notification, Text); }
	void Update(ASOTFNotification * Notification, float DeltaSeconds) { NativeCall<void, ASOTFNotification *, float>(this, "FBannerTextInfo.Update", Notification, DeltaSeconds); }
};

