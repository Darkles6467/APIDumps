#pragma once

#include "BaseDeclarations.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UHUDStatusBarsWidget : UUserWidget
{
	char __padding[0x160L];
	FString& HealthBarNameField() { return *GetNativePointerField<FString*>(this, "UHUDStatusBarsWidget.HealthBarName"); }
	FString& StaminaBarNameField() { return *GetNativePointerField<FString*>(this, "UHUDStatusBarsWidget.StaminaBarName"); }
	FString& OxygenBarNameField() { return *GetNativePointerField<FString*>(this, "UHUDStatusBarsWidget.OxygenBarName"); }
	FString& FoodBarNameField() { return *GetNativePointerField<FString*>(this, "UHUDStatusBarsWidget.FoodBarName"); }
	FString& WaterBarNameField() { return *GetNativePointerField<FString*>(this, "UHUDStatusBarsWidget.WaterBarName"); }
	FString& WeightBarNameField() { return *GetNativePointerField<FString*>(this, "UHUDStatusBarsWidget.WeightBarName"); }
	FString& TorpidityBarNameField() { return *GetNativePointerField<FString*>(this, "UHUDStatusBarsWidget.TorpidityBarName"); }
	FName& XPBarNameField() { return *GetNativePointerField<FName*>(this, "UHUDStatusBarsWidget.XPBarName"); }
	FName& IndoorsImageNameField() { return *GetNativePointerField<FName*>(this, "UHUDStatusBarsWidget.IndoorsImageName"); }
	FName& HarvestableImageNameField() { return *GetNativePointerField<FName*>(this, "UHUDStatusBarsWidget.HarvestableImageName"); }
	FName& CharacterLabelNameField() { return *GetNativePointerField<FName*>(this, "UHUDStatusBarsWidget.CharacterLabelName"); }
	FLinearColor& poopFoodColorField() { return *GetNativePointerField<FLinearColor*>(this, "UHUDStatusBarsWidget.poopFoodColor"); }
	FLinearColor& regularFoodColorField() { return *GetNativePointerField<FLinearColor*>(this, "UHUDStatusBarsWidget.regularFoodColor"); }
	UProgressBarWidget * StaminaBarField() { return GetNativePointerField<UProgressBarWidget *>(this, "UHUDStatusBarsWidget.StaminaBar"); }
	UProgressBarWidget * HealthBarField() { return GetNativePointerField<UProgressBarWidget *>(this, "UHUDStatusBarsWidget.HealthBar"); }
	UProgressBarWidget * TorpidityBarField() { return GetNativePointerField<UProgressBarWidget *>(this, "UHUDStatusBarsWidget.TorpidityBar"); }
	UProgressBarWidget * OxygenBarField() { return GetNativePointerField<UProgressBarWidget *>(this, "UHUDStatusBarsWidget.OxygenBar"); }
	UProgressBarWidget * FoodBarField() { return GetNativePointerField<UProgressBarWidget *>(this, "UHUDStatusBarsWidget.FoodBar"); }
	UProgressBarWidget * WaterBarField() { return GetNativePointerField<UProgressBarWidget *>(this, "UHUDStatusBarsWidget.WaterBar"); }
	UProgressBarWidget * WeightBarField() { return GetNativePointerField<UProgressBarWidget *>(this, "UHUDStatusBarsWidget.WeightBar"); }
	UProgressBarWidget * XPBarField() { return GetNativePointerField<UProgressBarWidget *>(this, "UHUDStatusBarsWidget.XPBar"); }
	UProgressBarWidget * BuffProgressBarField() { return GetNativePointerField<UProgressBarWidget *>(this, "UHUDStatusBarsWidget.BuffProgressBar"); }
	UTextBlock * CharacterLabelField() { return GetNativePointerField<UTextBlock *>(this, "UHUDStatusBarsWidget.CharacterLabel"); }
	UImage * IndoorsImageField() { return GetNativePointerField<UImage *>(this, "UHUDStatusBarsWidget.IndoorsImage"); }
	UImage * HarvestableImageField() { return GetNativePointerField<UImage *>(this, "UHUDStatusBarsWidget.HarvestableImage"); }
	FString& FoodBarDefaultDisplayStringField() { return *GetNativePointerField<FString*>(this, "UHUDStatusBarsWidget.FoodBarDefaultDisplayString"); }

	// Functions

	void InitializeMe(UPrimalUI * ParentUI) { NativeCall<void, UPrimalUI *>(this, "UHUDStatusBarsWidget.InitializeMe", ParentUI); }
	void Tick_Implementation(FGeometry MyGeometry, float InDeltaTime) { NativeCall<void, FGeometry, float>(this, "UHUDStatusBarsWidget.Tick_Implementation", MyGeometry, InDeltaTime); }
};

