#pragma once

#include "BaseDeclarations.h"
#include "UBaseSelectableButtonWidget.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UTamingListEntryWidget : UBaseSelectableButtonWidget
{
	char __padding[0x168L];
	FString& ItemLabelNameField() { return *GetNativePointerField<FString*>(this, "UTamingListEntryWidget.ItemLabelName"); }
	FLinearColor& NameLabelColor_DefaultField() { return *GetNativePointerField<FLinearColor*>(this, "UTamingListEntryWidget.NameLabelColor_Default"); }
	FLinearColor& NameLabelColor_FemaleField() { return *GetNativePointerField<FLinearColor*>(this, "UTamingListEntryWidget.NameLabelColor_Female"); }
	FLinearColor& NameLabelColor_MaleField() { return *GetNativePointerField<FLinearColor*>(this, "UTamingListEntryWidget.NameLabelColor_Male"); }
	FLinearColor& BackgroundColor_DefaultField() { return *GetNativePointerField<FLinearColor*>(this, "UTamingListEntryWidget.BackgroundColor_Default"); }
	FLinearColor& BackgroundColor_TrackedField() { return *GetNativePointerField<FLinearColor*>(this, "UTamingListEntryWidget.BackgroundColor_Tracked"); }
	FLinearColor& BackgroundColor_CompletedField() { return *GetNativePointerField<FLinearColor*>(this, "UTamingListEntryWidget.BackgroundColor_Completed"); }
	FLinearColor& SeparatorColorField() { return *GetNativePointerField<FLinearColor*>(this, "UTamingListEntryWidget.SeparatorColor"); }
	long double& LastSyncTimeField() { return *GetNativePointerField<long double*>(this, "UTamingListEntryWidget.LastSyncTime"); }
	bool& bIsTamedField() { return *GetNativePointerField<bool*>(this, "UTamingListEntryWidget.bIsTamed"); }
	int& ID1Field() { return *GetNativePointerField<int*>(this, "UTamingListEntryWidget.ID1"); }
	int& ID2Field() { return *GetNativePointerField<int*>(this, "UTamingListEntryWidget.ID2"); }
	UCustomButtonWidget * ButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UTamingListEntryWidget.Button"); }
	UImage * GenderIconImageField() { return GetNativePointerField<UImage *>(this, "UTamingListEntryWidget.GenderIconImage"); }
	UImage * DinoIconImageField() { return GetNativePointerField<UImage *>(this, "UTamingListEntryWidget.DinoIconImage"); }
	UTextBlock * DistanceLabelField() { return GetNativePointerField<UTextBlock *>(this, "UTamingListEntryWidget.DistanceLabel"); }
	UTextBlock * NameLabelField() { return GetNativePointerField<UTextBlock *>(this, "UTamingListEntryWidget.NameLabel"); }
	UTextBlock * TamingLabelField() { return GetNativePointerField<UTextBlock *>(this, "UTamingListEntryWidget.TamingLabel"); }
	UTextBlock * EffectivenessLabelField() { return GetNativePointerField<UTextBlock *>(this, "UTamingListEntryWidget.EffectivenessLabel"); }
	UTextBlock * TorporLabelField() { return GetNativePointerField<UTextBlock *>(this, "UTamingListEntryWidget.TorporLabel"); }
	UTextBlock * HealthLabelField() { return GetNativePointerField<UTextBlock *>(this, "UTamingListEntryWidget.HealthLabel"); }
	UTextBlock * FoodLabelField() { return GetNativePointerField<UTextBlock *>(this, "UTamingListEntryWidget.FoodLabel"); }
	UProgressBar * TamingBarField() { return GetNativePointerField<UProgressBar *>(this, "UTamingListEntryWidget.TamingBar"); }
	UProgressBar * TorporBarField() { return GetNativePointerField<UProgressBar *>(this, "UTamingListEntryWidget.TorporBar"); }
	UProgressBarWidget * FoodBarField() { return GetNativePointerField<UProgressBarWidget *>(this, "UTamingListEntryWidget.FoodBar"); }
	UProgressBarWidget * HealthBarField() { return GetNativePointerField<UProgressBarWidget *>(this, "UTamingListEntryWidget.HealthBar"); }

	// Functions

	void ClickedButton(UWidget * clickedWidget) { NativeCall<void, UWidget *>(this, "UTamingListEntryWidget.ClickedButton", clickedWidget); }
	UCustomButtonWidget * GetButton() { return NativeCall<UCustomButtonWidget *>(this, "UTamingListEntryWidget.GetButton"); }
	FString * GetNameString(FString * result) { return NativeCall<FString *, FString *>(this, "UTamingListEntryWidget.GetNameString", result); }
	void InitializeWithClick() { NativeCall<void>(this, "UTamingListEntryWidget.InitializeWithClick"); }
	bool IsSelected() { return NativeCall<bool>(this, "UTamingListEntryWidget.IsSelected"); }
	void SetSelected(bool bSelected) { NativeCall<void, bool>(this, "UTamingListEntryWidget.SetSelected", bSelected); }
	void SetUpAsTooltip() { NativeCall<void>(this, "UTamingListEntryWidget.SetUpAsTooltip"); }
	void SyncInfo(const FTamingDinoInfo * InInfo) { NativeCall<void, const FTamingDinoInfo *>(this, "UTamingListEntryWidget.SyncInfo", InInfo); }
};

