#pragma once

#include "BaseDeclarations.h"
#include "UToolTipWidget.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UPrimalEggToolTipWidget : UToolTipWidget
{
	char __padding[0x268L];
	FLinearColor& TemperatureColor_PerfectField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalEggToolTipWidget.TemperatureColor_Perfect"); }
	FLinearColor& TemperatureColor_BoostedField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalEggToolTipWidget.TemperatureColor_Boosted"); }
	FLinearColor& TemperatureColor_CoolField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalEggToolTipWidget.TemperatureColor_Cool"); }
	FLinearColor& TemperatureColor_TooColdField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalEggToolTipWidget.TemperatureColor_TooCold"); }
	FLinearColor& TemperatureColor_WarmField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalEggToolTipWidget.TemperatureColor_Warm"); }
	FLinearColor& TemperatureColor_TooHotField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalEggToolTipWidget.TemperatureColor_TooHot"); }
	FLinearColor& GenderColor_FemaleField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalEggToolTipWidget.GenderColor_Female"); }
	FLinearColor& GenderColor_MaleField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalEggToolTipWidget.GenderColor_Male"); }
	FLinearColor& GenderColor_UnknownField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalEggToolTipWidget.GenderColor_Unknown"); }
	float& RightColumnWidthField() { return *GetNativePointerField<float*>(this, "UPrimalEggToolTipWidget.RightColumnWidth"); }
	float& TemperatureGaugeTotalDegreesToDisplayField() { return *GetNativePointerField<float*>(this, "UPrimalEggToolTipWidget.TemperatureGaugeTotalDegreesToDisplay"); }
	float& TemperatureGaugeIndicatorHorizontalOffsetField() { return *GetNativePointerField<float*>(this, "UPrimalEggToolTipWidget.TemperatureGaugeIndicatorHorizontalOffset"); }
	TWeakObjectPtr<APrimalDinoCharacter>& DinoRefField() { return *GetNativePointerField<TWeakObjectPtr<APrimalDinoCharacter>*>(this, "UPrimalEggToolTipWidget.DinoRef"); }
	UTextBlock * DinoNameLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalEggToolTipWidget.DinoNameLabel"); }
	UTextBlock * FatherNameLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalEggToolTipWidget.FatherNameLabel"); }
	UTextBlock * MotherNameLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalEggToolTipWidget.MotherNameLabel"); }
	UTextBlock * EggHealthLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalEggToolTipWidget.EggHealthLabel"); }
	UTextBlock * EggIncubationLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalEggToolTipWidget.EggIncubationLabel"); }
	UTextBlock * EggIncubationTimerLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalEggToolTipWidget.EggIncubationTimerLabel"); }
	UTextBlock * EggTempBoundsLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalEggToolTipWidget.EggTempBoundsLabel"); }
	UTextBlock * EggStatHealthLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalEggToolTipWidget.EggStatHealthLabel"); }
	UTextBlock * EggStatStaminaLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalEggToolTipWidget.EggStatStaminaLabel"); }
	UTextBlock * EggStatOxygenLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalEggToolTipWidget.EggStatOxygenLabel"); }
	UTextBlock * EggStatFoodLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalEggToolTipWidget.EggStatFoodLabel"); }
	UTextBlock * EggStatWeightLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalEggToolTipWidget.EggStatWeightLabel"); }
	UTextBlock * EggStatMeleeLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalEggToolTipWidget.EggStatMeleeLabel"); }
	UTextBlock * EggStatSpeedLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalEggToolTipWidget.EggStatSpeedLabel"); }
	UTextBlock * MaleMutationsLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalEggToolTipWidget.MaleMutationsLabel"); }
	UTextBlock * FemaleMutationsLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalEggToolTipWidget.FemaleMutationsLabel"); }
	UTextBlock * BoostLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalEggToolTipWidget.BoostLabel"); }
	UTextBlock * EggTempRangeLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalEggToolTipWidget.EggTempRangeLabel"); }
	UTextBlock * CurrentTempLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalEggToolTipWidget.CurrentTempLabel"); }
	UTextBlock * EggTamedEffectivenessLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalEggToolTipWidget.EggTamedEffectivenessLabel"); }
	UTextBlock * SlotLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalEggToolTipWidget.SlotLabel"); }
	UImage * EggIconImageField() { return GetNativePointerField<UImage *>(this, "UPrimalEggToolTipWidget.EggIconImage"); }
	UImage * GenderIconImageField() { return GetNativePointerField<UImage *>(this, "UPrimalEggToolTipWidget.GenderIconImage"); }
	UProgressBar * EggHealthProgressBarField() { return GetNativePointerField<UProgressBar *>(this, "UPrimalEggToolTipWidget.EggHealthProgressBar"); }
	UProgressBar * EggIncubationProgressBarField() { return GetNativePointerField<UProgressBar *>(this, "UPrimalEggToolTipWidget.EggIncubationProgressBar"); }
	UProgressBar * BoostProgressBarField() { return GetNativePointerField<UProgressBar *>(this, "UPrimalEggToolTipWidget.BoostProgressBar"); }
	USizeBox * RightColumnField() { return GetNativePointerField<USizeBox *>(this, "UPrimalEggToolTipWidget.RightColumn"); }
	UTextBlock * ColorID0Field() { return GetNativePointerField<UTextBlock *>(this, "UPrimalEggToolTipWidget.ColorID0"); }
	UTextBlock * ColorID1Field() { return GetNativePointerField<UTextBlock *>(this, "UPrimalEggToolTipWidget.ColorID1"); }
	UTextBlock * ColorID2Field() { return GetNativePointerField<UTextBlock *>(this, "UPrimalEggToolTipWidget.ColorID2"); }
	UTextBlock * ColorID3Field() { return GetNativePointerField<UTextBlock *>(this, "UPrimalEggToolTipWidget.ColorID3"); }
	UTextBlock * ColorID4Field() { return GetNativePointerField<UTextBlock *>(this, "UPrimalEggToolTipWidget.ColorID4"); }
	UTextBlock * ColorID5Field() { return GetNativePointerField<UTextBlock *>(this, "UPrimalEggToolTipWidget.ColorID5"); }
	TArray<UTextBlock *>& ColorIndexTextField() { return *GetNativePointerField<TArray<UTextBlock *>*>(this, "UPrimalEggToolTipWidget.ColorIndexText"); }

	// Functions

	void InitToolTip(AShooterPlayerController * HUDOwner, const FString * ToolTipString, IDataListEntryInterface * DataListEntry) { NativeCall<void, AShooterPlayerController *, const FString *, IDataListEntryInterface *>(this, "UPrimalEggToolTipWidget.InitToolTip", HUDOwner, ToolTipString, DataListEntry); }
	void SetGenderState(bool bUsesGender, int GenderOverrideValue) { NativeCall<void, bool, int>(this, "UPrimalEggToolTipWidget.SetGenderState", bUsesGender, GenderOverrideValue); }
	void SetPoweredState(bool bIsPowered, bool bForceSet) { NativeCall<void, bool, bool>(this, "UPrimalEggToolTipWidget.SetPoweredState", bIsPowered, bForceSet); }
	void UpdateToolTip(float DeltaSeconds) { NativeCall<void, float>(this, "UPrimalEggToolTipWidget.UpdateToolTip", DeltaSeconds); }
};

