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

struct UTribeWarButtonWidget : UBaseSelectableButtonWidget
{
	char __padding[0x30L];
	UCustomButtonWidget * ButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UTribeWarButtonWidget.Button"); }
	UTextBlock * EnemyTribeNameField() { return GetNativePointerField<UTextBlock *>(this, "UTribeWarButtonWidget.EnemyTribeName"); }
	UTextBlock * StartTimeLabelField() { return GetNativePointerField<UTextBlock *>(this, "UTribeWarButtonWidget.StartTimeLabel"); }
	UTextBlock * EndTimeLabelField() { return GetNativePointerField<UTextBlock *>(this, "UTribeWarButtonWidget.EndTimeLabel"); }
	bool& bAllowButtonClickField() { return *GetNativePointerField<bool*>(this, "UTribeWarButtonWidget.bAllowButtonClick"); }

	// Functions

	void SetSelected(bool bSelected) { NativeCall<void, bool>(this, "UTribeWarButtonWidget.SetSelected", bSelected); }
	void InitializeMe() { NativeCall<void>(this, "UTribeWarButtonWidget.InitializeMe"); }
	void InitializeWithClick() { NativeCall<void>(this, "UTribeWarButtonWidget.InitializeWithClick"); }
	void SetEndTime(FString EndTime) { NativeCall<void, FString>(this, "UTribeWarButtonWidget.SetEndTime", EndTime); }
	void SetEnemyTribeName(FString TribeName) { NativeCall<void, FString>(this, "UTribeWarButtonWidget.SetEnemyTribeName", TribeName); }
	void SetStartTime(FString StartTime) { NativeCall<void, FString>(this, "UTribeWarButtonWidget.SetStartTime", StartTime); }
};

