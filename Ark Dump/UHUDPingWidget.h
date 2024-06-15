#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UHUDPingWidget : UPrimalUI
{
	char __padding[0xd0L];
	FName& PingPlayerNameTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UHUDPingWidget.PingPlayerNameTextBlockName"); }
	FName& PingRespondingPlayerNameTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UHUDPingWidget.PingRespondingPlayerNameTextBlockName"); }
	FName& PingIconNameField() { return *GetNativePointerField<FName*>(this, "UHUDPingWidget.PingIconName"); }
	FName& PingSwitcherNameField() { return *GetNativePointerField<FName*>(this, "UHUDPingWidget.PingSwitcherName"); }
	FName& PingOffScreenArrowNameField() { return *GetNativePointerField<FName*>(this, "UHUDPingWidget.PingOffScreenArrowName"); }
	FName& PingOffScreenIconNameField() { return *GetNativePointerField<FName*>(this, "UHUDPingWidget.PingOffScreenIconName"); }
	FName& PingOffScreenArrowBackgroundNameField() { return *GetNativePointerField<FName*>(this, "UHUDPingWidget.PingOffScreenArrowBackgroundName"); }
	float& WidgetRemoveDurationField() { return *GetNativePointerField<float*>(this, "UHUDPingWidget.WidgetRemoveDuration"); }
	FPingData& WidgetPingDataField() { return *GetNativePointerField<FPingData*>(this, "UHUDPingWidget.WidgetPingData"); }
	UTextBlock * Ping_PingPlayerNameTextField() { return GetNativePointerField<UTextBlock *>(this, "UHUDPingWidget.Ping_PingPlayerNameText"); }
	UTextBlock * Ping_PingRespondingPlayerNameTextField() { return GetNativePointerField<UTextBlock *>(this, "UHUDPingWidget.Ping_PingRespondingPlayerNameText"); }
	UImage * Ping_IconField() { return GetNativePointerField<UImage *>(this, "UHUDPingWidget.Ping_Icon"); }
	UImage * Ping_OffScreenArrowField() { return GetNativePointerField<UImage *>(this, "UHUDPingWidget.Ping_OffScreenArrow"); }
	UImage * Ping_OffScreenIconField() { return GetNativePointerField<UImage *>(this, "UHUDPingWidget.Ping_OffScreenIcon"); }
	UImage * Ping_OffScreenArrowBackgroundField() { return GetNativePointerField<UImage *>(this, "UHUDPingWidget.Ping_OffScreenArrowBackground"); }

	// Functions

	const FPingData * GetPingData() { return NativeCall<const FPingData *>(this, "UHUDPingWidget.GetPingData"); }
	static FVector * GetPingWorldLocation(FVector * result, const FPingData * FromPingData) { return NativeCall<FVector *, FVector *, const FPingData *>(nullptr, "UHUDPingWidget.GetPingWorldLocation", result, FromPingData); }
	bool HasValidPingData() { return NativeCall<bool>(this, "UHUDPingWidget.HasValidPingData"); }
	void InitializePingWidget(const FPingData * FromPingData) { NativeCall<void, const FPingData *>(this, "UHUDPingWidget.InitializePingWidget", FromPingData); }
	static bool IsPingValid(const FPingData * ForPingData) { return NativeCall<bool, const FPingData *>(nullptr, "UHUDPingWidget.IsPingValid", ForPingData); }
	void OnPingHovered_Implementation(const AShooterCharacter * HoveringPlayer) { NativeCall<void, const AShooterCharacter *>(this, "UHUDPingWidget.OnPingHovered_Implementation", HoveringPlayer); }
	void OnPingResponseReceived_Implementation(const AShooterCharacter * RespondingPlayer) { NativeCall<void, const AShooterCharacter *>(this, "UHUDPingWidget.OnPingResponseReceived_Implementation", RespondingPlayer); }
	void OnPingUnhovered_Implementation(const AShooterCharacter * UnhoveringPlayer) { NativeCall<void, const AShooterCharacter *>(this, "UHUDPingWidget.OnPingUnhovered_Implementation", UnhoveringPlayer); }
	void RemovePingWidget() { NativeCall<void>(this, "UHUDPingWidget.RemovePingWidget"); }
	void Tick_Implementation(FGeometry MyGeometry, float InDeltaTime) { NativeCall<void, FGeometry, float>(this, "UHUDPingWidget.Tick_Implementation", MyGeometry, InDeltaTime); }
	bool UpdateWidgetPingData(const FPingData * WithPingData) { return NativeCall<bool, const FPingData *>(this, "UHUDPingWidget.UpdateWidgetPingData", WithPingData); }
	void OnPingHovered(const AShooterCharacter * HoveringPlayer) { NativeCall<void, const AShooterCharacter *>(this, "UHUDPingWidget.OnPingHovered", HoveringPlayer); }
	void OnPingResponseReceived(const AShooterCharacter * RespondingPlayer) { NativeCall<void, const AShooterCharacter *>(this, "UHUDPingWidget.OnPingResponseReceived", RespondingPlayer); }
	void OnPingUnhovered(const AShooterCharacter * UnhoveringPlayer) { NativeCall<void, const AShooterCharacter *>(this, "UHUDPingWidget.OnPingUnhovered", UnhoveringPlayer); }
	void OnPingWidgetCreated() { NativeCall<void>(this, "UHUDPingWidget.OnPingWidgetCreated"); }
	void OnPingWidgetRemoved() { NativeCall<void>(this, "UHUDPingWidget.OnPingWidgetRemoved"); }
};

