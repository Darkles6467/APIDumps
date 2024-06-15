#pragma once

#include "BaseDeclarations.h"
struct FPlayerPreviewImage
{
	char __padding[0x30L];
	FVector& RelativeLocationField() { return *GetNativePointerField<FVector*>(this, "FPlayerPreviewImage.RelativeLocation"); }
	UTextRenderComponent * PlayerNameTextField() { return GetNativePointerField<UTextRenderComponent *>(this, "FPlayerPreviewImage.PlayerNameText"); }
	UTextRenderComponent * TribeComponentField() { return GetNativePointerField<UTextRenderComponent *>(this, "FPlayerPreviewImage.TribeComponent"); }
	UTextRenderComponent * DeathInfoField() { return GetNativePointerField<UTextRenderComponent *>(this, "FPlayerPreviewImage.DeathInfo"); }

	// Functions

	void CleanUp() { NativeCall<void>(this, "FPlayerPreviewImage.CleanUp"); }
	void Create(ASOTFNotificationDisplay * NotificationDisplay) { NativeCall<void, ASOTFNotificationDisplay *>(this, "FPlayerPreviewImage.Create", NotificationDisplay); }
	void Hide() { NativeCall<void>(this, "FPlayerPreviewImage.Hide"); }
	void Show(ASOTFNotification * NotificationSystem, UPreviewImage * PreviewImage, FString InPlayerName, FString InDeathReason, FString TribeName, FVector InRelativeLocation, FPrimalPlayerCharacterConfigStructReplicated * PlayerData) { NativeCall<void, ASOTFNotification *, UPreviewImage *, FString, FString, FString, FVector, FPrimalPlayerCharacterConfigStructReplicated *>(this, "FPlayerPreviewImage.Show", NotificationSystem, PreviewImage, InPlayerName, InDeathReason, TribeName, InRelativeLocation, PlayerData); }
	void Update(ASOTFNotification * NotificationSystem, float DeltaSeconds) { NativeCall<void, ASOTFNotification *, float>(this, "FPlayerPreviewImage.Update", NotificationSystem, DeltaSeconds); }
};

