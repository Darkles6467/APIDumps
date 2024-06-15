#pragma once

#include "BaseDeclarations.h"
#include "UTooltipSmartLayoutWidget.h"
#include "UToolTipWidget.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UDinoListItemTooltip : UTooltipSmartLayoutWidget
{
	char __padding[0x1b0L];
	FName& fnameTitleBar_NameLabelField() { return *GetNativePointerField<FName*>(this, "UDinoListItemTooltip.fnameTitleBar_NameLabel"); }
	FName& fnameTitleBar_LevelLabelField() { return *GetNativePointerField<FName*>(this, "UDinoListItemTooltip.fnameTitleBar_LevelLabel"); }
	FName& fnameInfo_ImageNameField() { return *GetNativePointerField<FName*>(this, "UDinoListItemTooltip.fnameInfo_ImageName"); }
	TArray<FName>& fnameInfo_LabelNamesField() { return *GetNativePointerField<TArray<FName>*>(this, "UDinoListItemTooltip.fnameInfo_LabelNames"); }
	TArray<FName>& fnameInfo_GroupNamesField() { return *GetNativePointerField<TArray<FName>*>(this, "UDinoListItemTooltip.fnameInfo_GroupNames"); }
	float& Info_GroupFreqField() { return *GetNativePointerField<float*>(this, "UDinoListItemTooltip.Info_GroupFreq"); }
	UTextBlock * TitleBar_NameLabelField() { return GetNativePointerField<UTextBlock *>(this, "UDinoListItemTooltip.TitleBar_NameLabel"); }
	UImage * Info_ImageField() { return GetNativePointerField<UImage *>(this, "UDinoListItemTooltip.Info_Image"); }
	TArray<UTextBlock *>& Info_TextBlocksField() { return *GetNativePointerField<TArray<UTextBlock *>*>(this, "UDinoListItemTooltip.Info_TextBlocks"); }
	FARKTributeDino& ArkTributeDinoField() { return *GetNativePointerField<FARKTributeDino*>(this, "UDinoListItemTooltip.ArkTributeDino"); }
	bool& HasValidDinoInfoField() { return *GetNativePointerField<bool*>(this, "UDinoListItemTooltip.HasValidDinoInfo"); }

	// Functions

	const FARKTributeDino * GetArkTributeDino() { return NativeCall<const FARKTributeDino *>(this, "UDinoListItemTooltip.GetArkTributeDino"); }
	void InitToolTip(AShooterPlayerController * HUDOwner, const FString * ToolTipString, IDataListEntryInterface * DataListEntry) { NativeCall<void, AShooterPlayerController *, const FString *, IDataListEntryInterface *>(this, "UDinoListItemTooltip.InitToolTip", HUDOwner, ToolTipString, DataListEntry); }
	void UpdateMainInfo(const FARKTributeDino * info) { NativeCall<void, const FARKTributeDino *>(this, "UDinoListItemTooltip.UpdateMainInfo", info); }
	void UpdateTitleBar(const FARKTributeDino * info) { NativeCall<void, const FARKTributeDino *>(this, "UDinoListItemTooltip.UpdateTitleBar", info); }
	void UpdateToolTip(float DeltaSeconds) { NativeCall<void, float>(this, "UDinoListItemTooltip.UpdateToolTip", DeltaSeconds); }
};

