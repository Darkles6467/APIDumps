#pragma once

#include "BaseDeclarations.h"
struct FScrollingTextInfo
{
	char __padding[0x10L];
	UTextRenderComponent * TextComponentField() { return GetNativePointerField<UTextRenderComponent *>(this, "FScrollingTextInfo.TextComponent"); }
	float& TimeField() { return *GetNativePointerField<float*>(this, "FScrollingTextInfo.Time"); }
	bool& bActiveField() { return *GetNativePointerField<bool*>(this, "FScrollingTextInfo.bActive"); }

	// Functions

	void CleanUp() { NativeCall<void>(this, "FScrollingTextInfo.CleanUp"); }
	void Create(ASOTFNotificationDisplay * NotificationDisplay) { NativeCall<void, ASOTFNotificationDisplay *>(this, "FScrollingTextInfo.Create", NotificationDisplay); }
	void Hide(ASOTFNotification * Notification) { NativeCall<void, ASOTFNotification *>(this, "FScrollingTextInfo.Hide", Notification); }
	void Show(ASOTFNotification * Notification, FString Text) { NativeCall<void, ASOTFNotification *, FString>(this, "FScrollingTextInfo.Show", Notification, Text); }
	void Update(ASOTFNotification * Notification, float DeltaSeconds) { NativeCall<void, ASOTFNotification *, float>(this, "FScrollingTextInfo.Update", Notification, DeltaSeconds); }
};

