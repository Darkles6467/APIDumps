#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "UToolTipWidget.h"

struct UUI_HudOverlay : UPrimalUI
{
	char __padding[0x20L];
	FName& HudOverlayWidgetNameField() { return *GetNativePointerField<FName*>(this, "UUI_HudOverlay.HudOverlayWidgetName"); }
	UHUDOVerlayWidget * MyHudOverlayWidgetField() { return GetNativePointerField<UHUDOVerlayWidget *>(this, "UUI_HudOverlay.MyHudOverlayWidget"); }

	// Functions

	void AddToViewport() { NativeCall<void>(this, "UUI_HudOverlay.AddToViewport"); }
	void PositionWidget(UToolTipWidget * theWidget, const FVector2D * ScreenPos) { NativeCall<void, UToolTipWidget *, const FVector2D *>(this, "UUI_HudOverlay.PositionWidget", theWidget, ScreenPos); }
	void ShowOverlayTooltip(AShooterPlayerController * HUDOwner, UObject * SponsorObject, TSubclassOf<UToolTipWidget> ToolTipPrefab, FVector2D ScreenPos, EAlignHorizontalUI::Type HorizontalAlignment, EAlignVerticalUI::Type VerticalAlignment, const FVector2D * Padding, const FVector2D * OverlayScale, bool bRetainScreenProjectionFromWorld, const FVector * ScreenProjectionWorldPosition, const FVector2D * ScreenProjectionPositionOffset) { NativeCall<void, AShooterPlayerController *, UObject *, TSubclassOf<UToolTipWidget>, FVector2D, EAlignHorizontalUI::Type, EAlignVerticalUI::Type, const FVector2D *, const FVector2D *, bool, const FVector *, const FVector2D *>(this, "UUI_HudOverlay.ShowOverlayTooltip", HUDOwner, SponsorObject, ToolTipPrefab, ScreenPos, HorizontalAlignment, VerticalAlignment, Padding, OverlayScale, bRetainScreenProjectionFromWorld, ScreenProjectionWorldPosition, ScreenProjectionPositionOffset); }
	void Tick_Implementation(FGeometry MyGeometry, float InDeltaTime) { NativeCall<void, FGeometry, float>(this, "UUI_HudOverlay.Tick_Implementation", MyGeometry, InDeltaTime); }
};

