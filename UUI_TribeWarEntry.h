#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UUI_TribeWarEntry : UPrimalUI
{
	char __padding[0x50L];
	float& errorTimeField() { return *GetNativePointerField<float*>(this, "UUI_TribeWarEntry.errorTime"); }
	int& ForEnemyTribeField() { return *GetNativePointerField<int*>(this, "UUI_TribeWarEntry.ForEnemyTribe"); }
	UTextBlock * TitleLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_TribeWarEntry.TitleLabel"); }
	UTextBlock * errorBlockField() { return GetNativePointerField<UTextBlock *>(this, "UUI_TribeWarEntry.errorBlock"); }
	UTextBlock * CurrentTimeLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_TribeWarEntry.CurrentTimeLabel"); }

	// Functions

	void AddToViewport() { NativeCall<void>(this, "UUI_TribeWarEntry.AddToViewport"); }
	void ClickedButton(UWidget * clickedWidget) { NativeCall<void, UWidget *>(this, "UUI_TribeWarEntry.ClickedButton", clickedWidget); }
	void InitForTribe(FString EnemyTribeName, int EnemyTribeID) { NativeCall<void, FString, int>(this, "UUI_TribeWarEntry.InitForTribe", EnemyTribeName, EnemyTribeID); }
	bool IsWarStartTimeLessThanEndTime() { return NativeCall<bool>(this, "UUI_TribeWarEntry.IsWarStartTimeLessThanEndTime"); }
	bool IsWarTimeInFuture() { return NativeCall<bool>(this, "UUI_TribeWarEntry.IsWarTimeInFuture"); }
	void OnTextCommitted(const FText * Text, ETextCommit::Type CommitMethod) { NativeCall<void, const FText *, ETextCommit::Type>(this, "UUI_TribeWarEntry.OnTextCommitted", Text, CommitMethod); }
	void Tick_Implementation(FGeometry MyGeometry, float InDeltaTime) { NativeCall<void, FGeometry, float>(this, "UUI_TribeWarEntry.Tick_Implementation", MyGeometry, InDeltaTime); }
};

