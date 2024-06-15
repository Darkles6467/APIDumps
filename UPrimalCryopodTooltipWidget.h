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

struct UPrimalCryopodTooltipWidget : UTooltipSmartLayoutWidget
{
	char __padding[0x188L];
	FLinearColor& FemaleColorField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalCryopodTooltipWidget.FemaleColor"); }
	FLinearColor& MaleColorField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalCryopodTooltipWidget.MaleColor"); }
	UTextBlock * DinoNameLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalCryopodTooltipWidget.DinoNameLabel"); }
	UTextBlock * ChargeLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalCryopodTooltipWidget.ChargeLabel"); }
	UTextBlock * ItemWeightLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalCryopodTooltipWidget.ItemWeightLabel"); }
	UTextBlock * StatHealthLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalCryopodTooltipWidget.StatHealthLabel"); }
	UTextBlock * StatStaminaLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalCryopodTooltipWidget.StatStaminaLabel"); }
	UTextBlock * StatOxygenLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalCryopodTooltipWidget.StatOxygenLabel"); }
	UTextBlock * StatFoodLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalCryopodTooltipWidget.StatFoodLabel"); }
	UTextBlock * StatWeightLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalCryopodTooltipWidget.StatWeightLabel"); }
	UTextBlock * StatMeleeLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalCryopodTooltipWidget.StatMeleeLabel"); }
	UTextBlock * StatSpeedLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalCryopodTooltipWidget.StatSpeedLabel"); }
	UTextBlock * StatTorporLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalCryopodTooltipWidget.StatTorporLabel"); }
	UTextBlock * MaleMutationsLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalCryopodTooltipWidget.MaleMutationsLabel"); }
	UTextBlock * FemaleMutationsLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalCryopodTooltipWidget.FemaleMutationsLabel"); }
	UTextBlock * TamedEffectivenessLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalCryopodTooltipWidget.TamedEffectivenessLabel"); }
	UTextBlock * DescriptionLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalCryopodTooltipWidget.DescriptionLabel"); }
	UTextBlock * NeuteredLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalCryopodTooltipWidget.NeuteredLabel"); }
	UImage * IconImageField() { return GetNativePointerField<UImage *>(this, "UPrimalCryopodTooltipWidget.IconImage"); }
	UImage * GenderIconImageField() { return GetNativePointerField<UImage *>(this, "UPrimalCryopodTooltipWidget.GenderIconImage"); }
	UImage * NeuteredIconField() { return GetNativePointerField<UImage *>(this, "UPrimalCryopodTooltipWidget.NeuteredIcon"); }
	UTextBlock * ColorID0Field() { return GetNativePointerField<UTextBlock *>(this, "UPrimalCryopodTooltipWidget.ColorID0"); }
	UTextBlock * ColorID1Field() { return GetNativePointerField<UTextBlock *>(this, "UPrimalCryopodTooltipWidget.ColorID1"); }
	UTextBlock * ColorID2Field() { return GetNativePointerField<UTextBlock *>(this, "UPrimalCryopodTooltipWidget.ColorID2"); }
	UTextBlock * ColorID3Field() { return GetNativePointerField<UTextBlock *>(this, "UPrimalCryopodTooltipWidget.ColorID3"); }
	UTextBlock * ColorID4Field() { return GetNativePointerField<UTextBlock *>(this, "UPrimalCryopodTooltipWidget.ColorID4"); }
	UTextBlock * ColorID5Field() { return GetNativePointerField<UTextBlock *>(this, "UPrimalCryopodTooltipWidget.ColorID5"); }
	TArray<UTextBlock *>& ColorIndexLabelsField() { return *GetNativePointerField<TArray<UTextBlock *>*>(this, "UPrimalCryopodTooltipWidget.ColorIndexLabels"); }
	AShooterPlayerController * OwningPlayerField() { return GetNativePointerField<AShooterPlayerController *>(this, "UPrimalCryopodTooltipWidget.OwningPlayer"); }

	// Functions

	int GetMaxValueIndexForStat(int InStat) { return NativeCall<int, int>(this, "UPrimalCryopodTooltipWidget.GetMaxValueIndexForStat", InStat); }
	void InitToolTip(AShooterPlayerController * HUDOwner, const FString * ToolTipString, IDataListEntryInterface * DataListEntry) { NativeCall<void, AShooterPlayerController *, const FString *, IDataListEntryInterface *>(this, "UPrimalCryopodTooltipWidget.InitToolTip", HUDOwner, ToolTipString, DataListEntry); }
	void SynchronizeProperties() { NativeCall<void>(this, "UPrimalCryopodTooltipWidget.SynchronizeProperties"); }
	void UpdateToolTip(float DeltaSeconds) { NativeCall<void, float>(this, "UPrimalCryopodTooltipWidget.UpdateToolTip", DeltaSeconds); }
};

