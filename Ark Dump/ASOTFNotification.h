#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FPrimalPlayerCharacterConfigStructReplicated.h"

struct ASOTFNotification : AActor
{
	char __padding[0x248L];
	float& NightBloomMultiplierField() { return *GetNativePointerField<float*>(this, "ASOTFNotification.NightBloomMultiplier"); }
	float& EffectScaleField() { return *GetNativePointerField<float*>(this, "ASOTFNotification.EffectScale"); }
	FVector& BackgroundOffsetField() { return *GetNativePointerField<FVector*>(this, "ASOTFNotification.BackgroundOffset"); }
	UStaticMesh * BackgroundMeshField() { return GetNativePointerField<UStaticMesh *>(this, "ASOTFNotification.BackgroundMesh"); }
	FRotator& BackgroundRotationField() { return *GetNativePointerField<FRotator*>(this, "ASOTFNotification.BackgroundRotation"); }
	float& BackgroundMeshScaleField() { return *GetNativePointerField<float*>(this, "ASOTFNotification.BackgroundMeshScale"); }
	float& BackgroundMeshDoubleScaleField() { return *GetNativePointerField<float*>(this, "ASOTFNotification.BackgroundMeshDoubleScale"); }
	float& PreviewImageBloomField() { return *GetNativePointerField<float*>(this, "ASOTFNotification.PreviewImageBloom"); }
	float& FadeOutIntervalField() { return *GetNativePointerField<float*>(this, "ASOTFNotification.FadeOutInterval"); }
	float& FadeInIntervalField() { return *GetNativePointerField<float*>(this, "ASOTFNotification.FadeInInterval"); }
	float& LightBrightnessField() { return *GetNativePointerField<float*>(this, "ASOTFNotification.LightBrightness"); }
	FRotator& LightRotationField() { return *GetNativePointerField<FRotator*>(this, "ASOTFNotification.LightRotation"); }
	float& GapBetweenPlayerImagesField() { return *GetNativePointerField<float*>(this, "ASOTFNotification.GapBetweenPlayerImages"); }
	FColor& BannerEliminationTextColorField() { return *GetNativePointerField<FColor*>(this, "ASOTFNotification.BannerEliminationTextColor"); }
	FColor& BannerVictoryTextColorField() { return *GetNativePointerField<FColor*>(this, "ASOTFNotification.BannerVictoryTextColor"); }
	float& BannerTextBloomField() { return *GetNativePointerField<float*>(this, "ASOTFNotification.BannerTextBloom"); }
	float& BannerTextFontScaleField() { return *GetNativePointerField<float*>(this, "ASOTFNotification.BannerTextFontScale"); }
	FVector& BannerTextOffsetField() { return *GetNativePointerField<FVector*>(this, "ASOTFNotification.BannerTextOffset"); }
	FString& EliminationTextField() { return *GetNativePointerField<FString*>(this, "ASOTFNotification.EliminationText"); }
	FString& VictoryTextField() { return *GetNativePointerField<FString*>(this, "ASOTFNotification.VictoryText"); }
	float& ScrollingTextFadePowerField() { return *GetNativePointerField<float*>(this, "ASOTFNotification.ScrollingTextFadePower"); }
	float& ScrollingTextSpeedField() { return *GetNativePointerField<float*>(this, "ASOTFNotification.ScrollingTextSpeed"); }
	float& ScrollingTextBloomField() { return *GetNativePointerField<float*>(this, "ASOTFNotification.ScrollingTextBloom"); }
	float& ScrollingTextIntervalField() { return *GetNativePointerField<float*>(this, "ASOTFNotification.ScrollingTextInterval"); }
	FVector& ScrollingTextOffsetField() { return *GetNativePointerField<FVector*>(this, "ASOTFNotification.ScrollingTextOffset"); }
	float& ScrollingTextLifeTimeField() { return *GetNativePointerField<float*>(this, "ASOTFNotification.ScrollingTextLifeTime"); }
	float& ScrollingTextDoubleMultiplierField() { return *GetNativePointerField<float*>(this, "ASOTFNotification.ScrollingTextDoubleMultiplier"); }
	float& ScrollingTextScaleField() { return *GetNativePointerField<float*>(this, "ASOTFNotification.ScrollingTextScale"); }
	int& ScrollingTextCountField() { return *GetNativePointerField<int*>(this, "ASOTFNotification.ScrollingTextCount"); }
	FColor& ScrollingTextColorField() { return *GetNativePointerField<FColor*>(this, "ASOTFNotification.ScrollingTextColor"); }
	FVector& PreviewCameraLocationField() { return *GetNativePointerField<FVector*>(this, "ASOTFNotification.PreviewCameraLocation"); }
	FRotator& PreviewCameraRotationField() { return *GetNativePointerField<FRotator*>(this, "ASOTFNotification.PreviewCameraRotation"); }
	float& PreviewCameraFOVField() { return *GetNativePointerField<float*>(this, "ASOTFNotification.PreviewCameraFOV"); }
	FRotator& PreviewMeshRotationField() { return *GetNativePointerField<FRotator*>(this, "ASOTFNotification.PreviewMeshRotation"); }
	TEnumAsByte<enum ESkyLightSourceType>& AmbientSourceTypeField() { return *GetNativePointerField<TEnumAsByte<enum ESkyLightSourceType>*>(this, "ASOTFNotification.AmbientSourceType"); }
	FColor& AmbientLightColorField() { return *GetNativePointerField<FColor*>(this, "ASOTFNotification.AmbientLightColor"); }
	float& AmbientBrightnessField() { return *GetNativePointerField<float*>(this, "ASOTFNotification.AmbientBrightness"); }
	UFont * TextFontField() { return GetNativePointerField<UFont *>(this, "ASOTFNotification.TextFont"); }
	UMaterial * TextMaterialField() { return GetNativePointerField<UMaterial *>(this, "ASOTFNotification.TextMaterial"); }
	FRotator& TextRotationField() { return *GetNativePointerField<FRotator*>(this, "ASOTFNotification.TextRotation"); }
	float& PlayerNameFontSizeField() { return *GetNativePointerField<float*>(this, "ASOTFNotification.PlayerNameFontSize"); }
	FVector& PlayerNameOffsetField() { return *GetNativePointerField<FVector*>(this, "ASOTFNotification.PlayerNameOffset"); }
	float& PlayerNameTextBloomField() { return *GetNativePointerField<float*>(this, "ASOTFNotification.PlayerNameTextBloom"); }
	FVector& DeathReasonOffsetField() { return *GetNativePointerField<FVector*>(this, "ASOTFNotification.DeathReasonOffset"); }
	float& DeathReasonFontSizeField() { return *GetNativePointerField<float*>(this, "ASOTFNotification.DeathReasonFontSize"); }
	FColor& DeathReasonTextColorField() { return *GetNativePointerField<FColor*>(this, "ASOTFNotification.DeathReasonTextColor"); }
	float& DeathReasonTextBloomField() { return *GetNativePointerField<float*>(this, "ASOTFNotification.DeathReasonTextBloom"); }
	FColor& PlayerNameTextColorField() { return *GetNativePointerField<FColor*>(this, "ASOTFNotification.PlayerNameTextColor"); }
	UStaticMesh * PlayerImageMeshField() { return GetNativePointerField<UStaticMesh *>(this, "ASOTFNotification.PlayerImageMesh"); }
	USoundCue * DeathSoundField() { return GetNativePointerField<USoundCue *>(this, "ASOTFNotification.DeathSound"); }
	USoundCue * TribeEliminatedSoundField() { return GetNativePointerField<USoundCue *>(this, "ASOTFNotification.TribeEliminatedSound"); }
	float& DefaultNotificationIntervalField() { return *GetNativePointerField<float*>(this, "ASOTFNotification.DefaultNotificationInterval"); }
	TArray<FSOTFNotificationInfo>& NotificationsQueueField() { return *GetNativePointerField<TArray<FSOTFNotificationInfo>*>(this, "ASOTFNotification.NotificationsQueue"); }
	FSOTFNotificationInfo& CurrentNotificationField() { return *GetNativePointerField<FSOTFNotificationInfo*>(this, "ASOTFNotification.CurrentNotification"); }
	TArray<AShooterCharacter *>& PreviewCharacterField() { return *GetNativePointerField<TArray<AShooterCharacter *>*>(this, "ASOTFNotification.PreviewCharacter"); }
	TArray<UPreviewImage *>& PreviewImagesField() { return *GetNativePointerField<TArray<UPreviewImage *>*>(this, "ASOTFNotification.PreviewImages"); }
	TArray<TWeakObjectPtr<ASOTFNotificationDisplay>>& NotificationDisplaysField() { return *GetNativePointerField<TArray<TWeakObjectPtr<ASOTFNotificationDisplay>>*>(this, "ASOTFNotification.NotificationDisplays"); }

	// Functions

	void AddNotification(TEnumAsByte<enum ESTOFNotificationType::Type> NotificationType, TArray<FString> PlayerNames, FString DeathReason, FString TribeName, TArray<FPrimalPlayerCharacterConfigStructReplicated> AdditionalData, bool bLastPlayer, bool bForcePlay, float DisplayInterval, FString CustomString) { NativeCall<void, TEnumAsByte<enum ESTOFNotificationType::Type>, TArray<FString>, FString, FString, TArray<FPrimalPlayerCharacterConfigStructReplicated>, bool, bool, float, FString>(this, "ASOTFNotification.AddNotification", NotificationType, PlayerNames, DeathReason, TribeName, AdditionalData, bLastPlayer, bForcePlay, DisplayInterval, CustomString); }
	void CleanUp() { NativeCall<void>(this, "ASOTFNotification.CleanUp"); }
	void EndPlay(const EEndPlayReason::Type EndPlayReason) { NativeCall<void, const EEndPlayReason::Type>(this, "ASOTFNotification.EndPlay", EndPlayReason); }
	float GetBloomMultiplier() { return NativeCall<float>(this, "ASOTFNotification.GetBloomMultiplier"); }
	float GetCurrentNotificationAlpha() { return NativeCall<float>(this, "ASOTFNotification.GetCurrentNotificationAlpha"); }
	float GetDefaultDisplayInterval(TEnumAsByte<enum ESTOFNotificationType::Type> NotificationType) { return NativeCall<float, TEnumAsByte<enum ESTOFNotificationType::Type>>(this, "ASOTFNotification.GetDefaultDisplayInterval", NotificationType); }
	bool IsAnyVictoryNotificationInQueue() { return NativeCall<bool>(this, "ASOTFNotification.IsAnyVictoryNotificationInQueue"); }
	bool IsNotificationActive() { return NativeCall<bool>(this, "ASOTFNotification.IsNotificationActive"); }
	bool IsOnlyVictoryNotificationInQueue() { return NativeCall<bool>(this, "ASOTFNotification.IsOnlyVictoryNotificationInQueue"); }
	void PlayCurrentNotification() { NativeCall<void>(this, "ASOTFNotification.PlayCurrentNotification"); }
	void PostInitializeComponents() { NativeCall<void>(this, "ASOTFNotification.PostInitializeComponents"); }
	void PreparePreviewImages() { NativeCall<void>(this, "ASOTFNotification.PreparePreviewImages"); }
	void StartNextNotification() { NativeCall<void>(this, "ASOTFNotification.StartNextNotification"); }
	void StopCurrentNotification() { NativeCall<void>(this, "ASOTFNotification.StopCurrentNotification"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "ASOTFNotification.Tick", DeltaSeconds); }
	void UpdateImages() { NativeCall<void>(this, "ASOTFNotification.UpdateImages"); }
};

