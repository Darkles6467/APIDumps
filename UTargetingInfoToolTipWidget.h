#pragma once

#include "BaseDeclarations.h"
#include "UToolTipWidget.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UTargetingInfoToolTipWidget : UToolTipWidget
{
	char __padding[0x50L];
	AShooterPlayerController * ForPCField() { return GetNativePointerField<AShooterPlayerController *>(this, "UTargetingInfoToolTipWidget.ForPC"); }
	UTextBlock * TitleLabelField() { return GetNativePointerField<UTextBlock *>(this, "UTargetingInfoToolTipWidget.TitleLabel"); }
	UTextBlock * HealthDescriptionLabelField() { return GetNativePointerField<UTextBlock *>(this, "UTargetingInfoToolTipWidget.HealthDescriptionLabel"); }
	UTextBlock * TorpidityDescriptionLabelField() { return GetNativePointerField<UTextBlock *>(this, "UTargetingInfoToolTipWidget.TorpidityDescriptionLabel"); }
	UPrimalRichTextBlock * InfoLabelField() { return GetNativePointerField<UPrimalRichTextBlock *>(this, "UTargetingInfoToolTipWidget.InfoLabel"); }
	UProgressBar * HealthProgressBarField() { return GetNativePointerField<UProgressBar *>(this, "UTargetingInfoToolTipWidget.HealthProgressBar"); }
	UProgressBar * TorpidityProgressBarField() { return GetNativePointerField<UProgressBar *>(this, "UTargetingInfoToolTipWidget.TorpidityProgressBar"); }

	// Functions

	void InitToolTip(AShooterPlayerController * HUDOwner, const FString * ToolTipString, IDataListEntryInterface * DataListEntry) { NativeCall<void, AShooterPlayerController *, const FString *, IDataListEntryInterface *>(this, "UTargetingInfoToolTipWidget.InitToolTip", HUDOwner, ToolTipString, DataListEntry); }
	void RefreshInfo() { NativeCall<void>(this, "UTargetingInfoToolTipWidget.RefreshInfo"); }
	void UpdateToolTip(float DeltaSeconds) { NativeCall<void, float>(this, "UTargetingInfoToolTipWidget.UpdateToolTip", DeltaSeconds); }
};

