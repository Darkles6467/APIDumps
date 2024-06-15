#pragma once

#include "BaseDeclarations.h"
#include "UToolTipWidget.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMissionDispatcherToolTipWidget : UToolTipWidget
{
	char __padding[0x58L];
	FString& MissionNameLabelNameField() { return *GetNativePointerField<FString*>(this, "UMissionDispatcherToolTipWidget.MissionNameLabelName"); }
	FString& TitleLabelNameField() { return *GetNativePointerField<FString*>(this, "UMissionDispatcherToolTipWidget.TitleLabelName"); }
	FString& MissionStatusLabelNameField() { return *GetNativePointerField<FString*>(this, "UMissionDispatcherToolTipWidget.MissionStatusLabelName"); }
	AShooterPlayerController * ForPCField() { return GetNativePointerField<AShooterPlayerController *>(this, "UMissionDispatcherToolTipWidget.ForPC"); }
	AMissionDispatcher * MissionDispatcherField() { return GetNativePointerField<AMissionDispatcher *>(this, "UMissionDispatcherToolTipWidget.MissionDispatcher"); }
	UTextBlock * MissionDescriptionLabelField() { return GetNativePointerField<UTextBlock *>(this, "UMissionDispatcherToolTipWidget.MissionDescriptionLabel"); }
	UTextBlock * TitleLabelField() { return GetNativePointerField<UTextBlock *>(this, "UMissionDispatcherToolTipWidget.TitleLabel"); }
	UPrimalRichTextBlock * MissionStatusLabelField() { return GetNativePointerField<UPrimalRichTextBlock *>(this, "UMissionDispatcherToolTipWidget.MissionStatusLabel"); }

	// Functions

	void InitToolTip(AShooterPlayerController * HUDOwner, const FString * ToolTipString, IDataListEntryInterface * DataListEntry) { NativeCall<void, AShooterPlayerController *, const FString *, IDataListEntryInterface *>(this, "UMissionDispatcherToolTipWidget.InitToolTip", HUDOwner, ToolTipString, DataListEntry); }
	void UpdateToolTip(float DeltaSeconds) { NativeCall<void, float>(this, "UMissionDispatcherToolTipWidget.UpdateToolTip", DeltaSeconds); }
};

