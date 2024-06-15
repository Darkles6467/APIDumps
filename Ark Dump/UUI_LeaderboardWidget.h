#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "ULeaderboardRowWidget.h"
#include "FLeaderboardDisplayRow.h"

struct UUI_LeaderboardWidget : UPrimalUI
{
	char __padding[0x50L];
	FName& LeaderboardHeaderContainerNameField() { return *GetNativePointerField<FName*>(this, "UUI_LeaderboardWidget.LeaderboardHeaderContainerName"); }
	FName& LeaderboardRowContainerNameField() { return *GetNativePointerField<FName*>(this, "UUI_LeaderboardWidget.LeaderboardRowContainerName"); }
	FName& CloseButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_LeaderboardWidget.CloseButtonName"); }
	float& TableWidthField() { return *GetNativePointerField<float*>(this, "UUI_LeaderboardWidget.TableWidth"); }
	bool& bUIVisibleField() { return *GetNativePointerField<bool*>(this, "UUI_LeaderboardWidget.bUIVisible"); }
	bool& bLeaderboardWidgetVisibleField() { return *GetNativePointerField<bool*>(this, "UUI_LeaderboardWidget.bLeaderboardWidgetVisible"); }
	ULeaderboardRowWidget * HeaderRowWidgetField() { return GetNativePointerField<ULeaderboardRowWidget *>(this, "UUI_LeaderboardWidget.HeaderRowWidget"); }
	UVerticalBox * RowContainerField() { return GetNativePointerField<UVerticalBox *>(this, "UUI_LeaderboardWidget.RowContainer"); }
	TArray<ULeaderboardRowWidget *>& RowWidgetsField() { return *GetNativePointerField<TArray<ULeaderboardRowWidget *>*>(this, "UUI_LeaderboardWidget.RowWidgets"); }

	// Functions

	void AddToViewport() { NativeCall<void>(this, "UUI_LeaderboardWidget.AddToViewport"); }
	void ClickedButton(UWidget * ClickedWidget) { NativeCall<void, UWidget *>(this, "UUI_LeaderboardWidget.ClickedButton", ClickedWidget); }
	void SetHUDVisibleInternal(bool bIsVisible) { NativeCall<void, bool>(this, "UUI_LeaderboardWidget.SetHUDVisibleInternal", bIsVisible); }
	void SetLeaderboardWidgetVisible(bool bIsVisible) { NativeCall<void, bool>(this, "UUI_LeaderboardWidget.SetLeaderboardWidgetVisible", bIsVisible); }
	void SetRows(TSubclassOf<ULeaderboardRowWidget> LeaderboardRowWidget, const FLeaderboardDisplayRow * HeaderRow, const TArray<FLeaderboardDisplayRow> * Rows) { NativeCall<void, TSubclassOf<ULeaderboardRowWidget>, const FLeaderboardDisplayRow *, const TArray<FLeaderboardDisplayRow> *>(this, "UUI_LeaderboardWidget.SetRows", LeaderboardRowWidget, HeaderRow, Rows); }
	void UpdateVisibility() { NativeCall<void>(this, "UUI_LeaderboardWidget.UpdateVisibility"); }
};

