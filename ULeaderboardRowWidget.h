#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ULeaderboardRowWidget : UPrimalUI
{
	char __padding[0xc8L];
	bool& bIsHeaderRowField() { return *GetNativePointerField<bool*>(this, "ULeaderboardRowWidget.bIsHeaderRow"); }
	FName& ColumnContainerWidgetNameField() { return *GetNativePointerField<FName*>(this, "ULeaderboardRowWidget.ColumnContainerWidgetName"); }
	TArray<FLeaderboardColumnDefinition>& ColumnsField() { return *GetNativePointerField<TArray<FLeaderboardColumnDefinition>*>(this, "ULeaderboardRowWidget.Columns"); }
	FLinearColor& DefaultLeaderboardRowTextColorField() { return *GetNativePointerField<FLinearColor*>(this, "ULeaderboardRowWidget.DefaultLeaderboardRowTextColor"); }
	FLinearColor& DefaultLeaderboardRowBackgroundColorField() { return *GetNativePointerField<FLinearColor*>(this, "ULeaderboardRowWidget.DefaultLeaderboardRowBackgroundColor"); }
	FLinearColor& PersonalLeaderboardRowTextColorField() { return *GetNativePointerField<FLinearColor*>(this, "ULeaderboardRowWidget.PersonalLeaderboardRowTextColor"); }
	FLinearColor& PersonalLeaderboardRowBackgroundColorField() { return *GetNativePointerField<FLinearColor*>(this, "ULeaderboardRowWidget.PersonalLeaderboardRowBackgroundColor"); }
	FLinearColor& HeaderLeaderboardRowTextColorField() { return *GetNativePointerField<FLinearColor*>(this, "ULeaderboardRowWidget.HeaderLeaderboardRowTextColor"); }
	FLinearColor& HeaderLeaderboardRowBackgroundColorField() { return *GetNativePointerField<FLinearColor*>(this, "ULeaderboardRowWidget.HeaderLeaderboardRowBackgroundColor"); }
	bool& IsPlayersOwnRowField() { return *GetNativePointerField<bool*>(this, "ULeaderboardRowWidget.IsPlayersOwnRow"); }
	USizeBox * LeaderboardRowSizeBoxField() { return GetNativePointerField<USizeBox *>(this, "ULeaderboardRowWidget.LeaderboardRowSizeBox"); }
	UHorizontalBox * ColumnContainerField() { return GetNativePointerField<UHorizontalBox *>(this, "ULeaderboardRowWidget.ColumnContainer"); }
	TArray<UTextBlock *>& ColumnWidgetsField() { return *GetNativePointerField<TArray<UTextBlock *>*>(this, "ULeaderboardRowWidget.ColumnWidgets"); }

	// Functions

	void AddToViewport() { NativeCall<void>(this, "ULeaderboardRowWidget.AddToViewport"); }
	static UTextBlock * CreateColumnWidget(APlayerController * OwningPlayer, UHorizontalBox * Container, const FLeaderboardColumnDefinition * Col, float ContainerWidth) { return NativeCall<UTextBlock *, APlayerController *, UHorizontalBox *, const FLeaderboardColumnDefinition *, float>(nullptr, "ULeaderboardRowWidget.CreateColumnWidget", OwningPlayer, Container, Col, ContainerWidth); }
	void SetRowContents(const FLeaderboardDisplayRow * RowData, float ContainerWidth, float RowHeight, bool IsHeaderRow, bool ManuallySetPlayersOwnRowStyling, bool UsePlayersOwnRowStyling) { NativeCall<void, const FLeaderboardDisplayRow *, float, float, bool, bool, bool>(this, "ULeaderboardRowWidget.SetRowContents", RowData, ContainerWidth, RowHeight, IsHeaderRow, ManuallySetPlayersOwnRowStyling, UsePlayersOwnRowStyling); }
	void SetupColumnWidgets(float ContainerWidth) { NativeCall<void, float>(this, "ULeaderboardRowWidget.SetupColumnWidgets", ContainerWidth); }
};

