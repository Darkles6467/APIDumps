#pragma once

#include "BaseDeclarations.h"
#include "UToolTipWidget.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UPrimalDinoToolTipWidget : UToolTipWidget
{
	char __padding[0x1f8L];
	FString& DinoNameLabelNameField() { return *GetNativePointerField<FString*>(this, "UPrimalDinoToolTipWidget.DinoNameLabelName"); }
	FString& TamedLabelNameField() { return *GetNativePointerField<FString*>(this, "UPrimalDinoToolTipWidget.TamedLabelName"); }
	FString& GenderLabelNameField() { return *GetNativePointerField<FString*>(this, "UPrimalDinoToolTipWidget.GenderLabelName"); }
	FString& InfoLabelNameField() { return *GetNativePointerField<FString*>(this, "UPrimalDinoToolTipWidget.InfoLabelName"); }
	FString& InfoLabel2NameField() { return *GetNativePointerField<FString*>(this, "UPrimalDinoToolTipWidget.InfoLabel2Name"); }
	FString& DinoIconImageNameField() { return *GetNativePointerField<FString*>(this, "UPrimalDinoToolTipWidget.DinoIconImageName"); }
	FName& DinoUnconsciousPanelNameField() { return *GetNativePointerField<FName*>(this, "UPrimalDinoToolTipWidget.DinoUnconsciousPanelName"); }
	FName& DinoTamingPanelNameField() { return *GetNativePointerField<FName*>(this, "UPrimalDinoToolTipWidget.DinoTamingPanelName"); }
	FName& TorpidityProgressBarNameField() { return *GetNativePointerField<FName*>(this, "UPrimalDinoToolTipWidget.TorpidityProgressBarName"); }
	FName& CustomProgressBarNameField() { return *GetNativePointerField<FName*>(this, "UPrimalDinoToolTipWidget.CustomProgressBarName"); }
	FName& TamingProgressBarNameField() { return *GetNativePointerField<FName*>(this, "UPrimalDinoToolTipWidget.TamingProgressBarName"); }
	FName& HealthBarNameField() { return *GetNativePointerField<FName*>(this, "UPrimalDinoToolTipWidget.HealthBarName"); }
	FName& StaminaBarNameField() { return *GetNativePointerField<FName*>(this, "UPrimalDinoToolTipWidget.StaminaBarName"); }
	FName& FoodBarNameField() { return *GetNativePointerField<FName*>(this, "UPrimalDinoToolTipWidget.FoodBarName"); }
	FName& WeightBarNameField() { return *GetNativePointerField<FName*>(this, "UPrimalDinoToolTipWidget.WeightBarName"); }
	FName& XPBarNameField() { return *GetNativePointerField<FName*>(this, "UPrimalDinoToolTipWidget.XPBarName"); }
	FName& TorpidityBarNameField() { return *GetNativePointerField<FName*>(this, "UPrimalDinoToolTipWidget.TorpidityBarName"); }
	FName& OxygenBarNameField() { return *GetNativePointerField<FName*>(this, "UPrimalDinoToolTipWidget.OxygenBarName"); }
	FName& DamageBarNameField() { return *GetNativePointerField<FName*>(this, "UPrimalDinoToolTipWidget.DamageBarName"); }
	FName& SpeedBarNameField() { return *GetNativePointerField<FName*>(this, "UPrimalDinoToolTipWidget.SpeedBarName"); }
	bool& bShowExtendedInfoField() { return *GetNativePointerField<bool*>(this, "UPrimalDinoToolTipWidget.bShowExtendedInfo"); }
	FLinearColor& FemaleColorField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalDinoToolTipWidget.FemaleColor"); }
	FLinearColor& MaleColorField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalDinoToolTipWidget.MaleColor"); }
	FLinearColor& NoGenderColorField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalDinoToolTipWidget.NoGenderColor"); }
	TWeakObjectPtr<APrimalDinoCharacter>& MyDinoField() { return *GetNativePointerField<TWeakObjectPtr<APrimalDinoCharacter>*>(this, "UPrimalDinoToolTipWidget.MyDino"); }
	UTextBlock * DinoNameLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalDinoToolTipWidget.DinoNameLabel"); }
	UTextBlock * TamedLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalDinoToolTipWidget.TamedLabel"); }
	UTextBlock * GenderLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalDinoToolTipWidget.GenderLabel"); }
	UTextBlock * InfoLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalDinoToolTipWidget.InfoLabel"); }
	UTextBlock * InfoLabel2Field() { return GetNativePointerField<UTextBlock *>(this, "UPrimalDinoToolTipWidget.InfoLabel2"); }
	UTextBlock * TamingDescriptionLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalDinoToolTipWidget.TamingDescriptionLabel"); }
	UTextBlock * UnconsciousDescriptionLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalDinoToolTipWidget.UnconsciousDescriptionLabel"); }
	UTextBlock * MatingTimeLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalDinoToolTipWidget.MatingTimeLabel"); }
	UImage * DinoIconImageField() { return GetNativePointerField<UImage *>(this, "UPrimalDinoToolTipWidget.DinoIconImage"); }
	UImage * DinoFoodTypeImageField() { return GetNativePointerField<UImage *>(this, "UPrimalDinoToolTipWidget.DinoFoodTypeImage"); }
	UImage * MaxInventoryImageField() { return GetNativePointerField<UImage *>(this, "UPrimalDinoToolTipWidget.MaxInventoryImage"); }
	UImage * MutagenIconField() { return GetNativePointerField<UImage *>(this, "UPrimalDinoToolTipWidget.MutagenIcon"); }
	UProgressBar * TorpidityProgressBarField() { return GetNativePointerField<UProgressBar *>(this, "UPrimalDinoToolTipWidget.TorpidityProgressBar"); }
	UProgressBar * TamingProgressBarField() { return GetNativePointerField<UProgressBar *>(this, "UPrimalDinoToolTipWidget.TamingProgressBar"); }
	UProgressBarWidget * HealthBarField() { return GetNativePointerField<UProgressBarWidget *>(this, "UPrimalDinoToolTipWidget.HealthBar"); }
	UProgressBarWidget * StaminaBarField() { return GetNativePointerField<UProgressBarWidget *>(this, "UPrimalDinoToolTipWidget.StaminaBar"); }
	UProgressBarWidget * FoodBarField() { return GetNativePointerField<UProgressBarWidget *>(this, "UPrimalDinoToolTipWidget.FoodBar"); }
	UProgressBarWidget * WeightBarField() { return GetNativePointerField<UProgressBarWidget *>(this, "UPrimalDinoToolTipWidget.WeightBar"); }
	UProgressBarWidget * XPBarField() { return GetNativePointerField<UProgressBarWidget *>(this, "UPrimalDinoToolTipWidget.XPBar"); }
	UProgressBarWidget * TorpidityBarField() { return GetNativePointerField<UProgressBarWidget *>(this, "UPrimalDinoToolTipWidget.TorpidityBar"); }
	UProgressBarWidget * OxygenBarField() { return GetNativePointerField<UProgressBarWidget *>(this, "UPrimalDinoToolTipWidget.OxygenBar"); }
	UProgressBarWidget * DamageBarField() { return GetNativePointerField<UProgressBarWidget *>(this, "UPrimalDinoToolTipWidget.DamageBar"); }
	UProgressBarWidget * SpeedBarField() { return GetNativePointerField<UProgressBarWidget *>(this, "UPrimalDinoToolTipWidget.SpeedBar"); }
	FString& FoodBarDefaultDisplayStringField() { return *GetNativePointerField<FString*>(this, "UPrimalDinoToolTipWidget.FoodBarDefaultDisplayString"); }

	// Functions

	void InitToolTip(AShooterPlayerController * HUDOwner, const FString * ToolTipString, IDataListEntryInterface * DataListEntry) { NativeCall<void, AShooterPlayerController *, const FString *, IDataListEntryInterface *>(this, "UPrimalDinoToolTipWidget.InitToolTip", HUDOwner, ToolTipString, DataListEntry); }
	void RefreshDinoNameText() { NativeCall<void>(this, "UPrimalDinoToolTipWidget.RefreshDinoNameText"); }
	void RefreshDinoState() { NativeCall<void>(this, "UPrimalDinoToolTipWidget.RefreshDinoState"); }
	void UpdateToolTip(float DeltaSeconds) { NativeCall<void, float>(this, "UPrimalDinoToolTipWidget.UpdateToolTip", DeltaSeconds); }
};

