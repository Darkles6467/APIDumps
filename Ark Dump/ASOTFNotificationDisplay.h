#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ASOTFNotificationDisplay : AActor
{
	char __padding[0x58L];
	ASOTFNotification * NotificationSystemField() { return GetNativePointerField<ASOTFNotification *>(this, "ASOTFNotificationDisplay.NotificationSystem"); }
	TArray<FScrollingTextInfo>& ScrollableTextsField() { return *GetNativePointerField<TArray<FScrollingTextInfo>*>(this, "ASOTFNotificationDisplay.ScrollableTexts"); }
	TArray<FPlayerPreviewImage>& CachedPlayerImagesField() { return *GetNativePointerField<TArray<FPlayerPreviewImage>*>(this, "ASOTFNotificationDisplay.CachedPlayerImages"); }
	FBannerTextInfo& BannerTextField() { return *GetNativePointerField<FBannerTextInfo*>(this, "ASOTFNotificationDisplay.BannerText"); }
	long double& LastScrollingTextActivationTimeField() { return *GetNativePointerField<long double*>(this, "ASOTFNotificationDisplay.LastScrollingTextActivationTime"); }
	TArray<FPlayerPreviewImage *>& PlayerImagesField() { return *GetNativePointerField<TArray<FPlayerPreviewImage *>*>(this, "ASOTFNotificationDisplay.PlayerImages"); }

	// Functions

	void CleanUp() { NativeCall<void>(this, "ASOTFNotificationDisplay.CleanUp"); }
	void EndPlay(const EEndPlayReason::Type EndPlayReason) { NativeCall<void, const EEndPlayReason::Type>(this, "ASOTFNotificationDisplay.EndPlay", EndPlayReason); }
	void Play() { NativeCall<void>(this, "ASOTFNotificationDisplay.Play"); }
	void PostInitializeComponents() { NativeCall<void>(this, "ASOTFNotificationDisplay.PostInitializeComponents"); }
	void Stop() { NativeCall<void>(this, "ASOTFNotificationDisplay.Stop"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "ASOTFNotificationDisplay.Tick", DeltaSeconds); }
	void Update(float DeltaSeconds) { NativeCall<void, float>(this, "ASOTFNotificationDisplay.Update", DeltaSeconds); }
};

