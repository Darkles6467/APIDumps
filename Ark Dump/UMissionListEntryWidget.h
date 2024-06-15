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

struct UMissionListEntryWidget : UBaseSelectableButtonWidget
{
	char __padding[0x20L];
	FString& ItemLabelNameField() { return *GetNativePointerField<FString*>(this, "UMissionListEntryWidget.ItemLabelName"); }
	float& DistanceToDispatcherField() { return *GetNativePointerField<float*>(this, "UMissionListEntryWidget.DistanceToDispatcher"); }
	UCustomButtonWidget * ButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UMissionListEntryWidget.Button"); }

	// Functions

	UCustomButtonWidget * GetButton() { return NativeCall<UCustomButtonWidget *>(this, "UMissionListEntryWidget.GetButton"); }
	float GetDistanceToDispatcher() { return NativeCall<float>(this, "UMissionListEntryWidget.GetDistanceToDispatcher"); }
	void InitializeWithClick() { NativeCall<void>(this, "UMissionListEntryWidget.InitializeWithClick"); }
	bool IsSelected() { return NativeCall<bool>(this, "UMissionListEntryWidget.IsSelected"); }
	void SetDistanceToDispatcher(float InDistance) { NativeCall<void, float>(this, "UMissionListEntryWidget.SetDistanceToDispatcher", InDistance); }
	void SetIsEnabled(bool bIsEnabled) { NativeCall<void, bool>(this, "UMissionListEntryWidget.SetIsEnabled", bIsEnabled); }
	void SetSelected(bool bSelected) { NativeCall<void, bool>(this, "UMissionListEntryWidget.SetSelected", bSelected); }
};

