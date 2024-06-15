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

struct UMissionBiomeCompletionWidget : UBaseSelectableButtonWidget
{
	char __padding[0xd0L];
	FText& SectionNameField() { return *GetNativePointerField<FText*>(this, "UMissionBiomeCompletionWidget.SectionName"); }
	FLinearColor& AllMissionsCompletedColorField() { return *GetNativePointerField<FLinearColor*>(this, "UMissionBiomeCompletionWidget.AllMissionsCompletedColor"); }
	FLinearColor& SectionNameTextColorField() { return *GetNativePointerField<FLinearColor*>(this, "UMissionBiomeCompletionWidget.SectionNameTextColor"); }
	FLinearColor& CompletionPercentLabelTextColorField() { return *GetNativePointerField<FLinearColor*>(this, "UMissionBiomeCompletionWidget.CompletionPercentLabelTextColor"); }
	FLinearColor& NumCompletedValueTextColorField() { return *GetNativePointerField<FLinearColor*>(this, "UMissionBiomeCompletionWidget.NumCompletedValueTextColor"); }
	FLinearColor& NumCompletedLabelTextColorField() { return *GetNativePointerField<FLinearColor*>(this, "UMissionBiomeCompletionWidget.NumCompletedLabelTextColor"); }
	FLinearColor& CompletionProgressBarForegroundColorField() { return *GetNativePointerField<FLinearColor*>(this, "UMissionBiomeCompletionWidget.CompletionProgressBarForegroundColor"); }
	UCustomButtonWidget * ButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UMissionBiomeCompletionWidget.Button"); }
	UImage * IconImageField() { return GetNativePointerField<UImage *>(this, "UMissionBiomeCompletionWidget.IconImage"); }
	UTextBlock * SectionNameLabelField() { return GetNativePointerField<UTextBlock *>(this, "UMissionBiomeCompletionWidget.SectionNameLabel"); }
	UTextBlock * CompletionPercentLabelField() { return GetNativePointerField<UTextBlock *>(this, "UMissionBiomeCompletionWidget.CompletionPercentLabel"); }
	UTextBlock * NumCompletedLabelField() { return GetNativePointerField<UTextBlock *>(this, "UMissionBiomeCompletionWidget.NumCompletedLabel"); }
	UTextBlock * NumCompletedValueField() { return GetNativePointerField<UTextBlock *>(this, "UMissionBiomeCompletionWidget.NumCompletedValue"); }
	UProgressBar * CompletionProgressBarField() { return GetNativePointerField<UProgressBar *>(this, "UMissionBiomeCompletionWidget.CompletionProgressBar"); }

	// Functions

	UCustomButtonWidget * GetButton() { return NativeCall<UCustomButtonWidget *>(this, "UMissionBiomeCompletionWidget.GetButton"); }
	bool IsSelected() { return NativeCall<bool>(this, "UMissionBiomeCompletionWidget.IsSelected"); }
	void SetCompletionPercentage(float InPercent) { NativeCall<void, float>(this, "UMissionBiomeCompletionWidget.SetCompletionPercentage", InPercent); }
	void SetNumCompleted(int NumCompleted, int TotalNum) { NativeCall<void, int, int>(this, "UMissionBiomeCompletionWidget.SetNumCompleted", NumCompleted, TotalNum); }
	void SetSelected(bool bSelected) { NativeCall<void, bool>(this, "UMissionBiomeCompletionWidget.SetSelected", bSelected); }
	void SynchronizeProperties() { NativeCall<void>(this, "UMissionBiomeCompletionWidget.SynchronizeProperties"); }
};

