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

struct UTribeMemberButtonWidget : UBaseSelectableButtonWidget
{
	char __padding[0x40L];
	int& IndexField() { return *GetNativePointerField<int*>(this, "UTribeMemberButtonWidget.Index"); }
	UCustomButtonWidget * ButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UTribeMemberButtonWidget.Button"); }
	UTextBlock * PlayerNameLabelField() { return GetNativePointerField<UTextBlock *>(this, "UTribeMemberButtonWidget.PlayerNameLabel"); }
	UTextBlock * PlayerLevelLabelField() { return GetNativePointerField<UTextBlock *>(this, "UTribeMemberButtonWidget.PlayerLevelLabel"); }
	UTextBlock * GroupRankLabelField() { return GetNativePointerField<UTextBlock *>(this, "UTribeMemberButtonWidget.GroupRankLabel"); }
	UTextBlock * OwnershipLabelField() { return GetNativePointerField<UTextBlock *>(this, "UTribeMemberButtonWidget.OwnershipLabel"); }
	UTextBlock * OnlineStatusLabelField() { return GetNativePointerField<UTextBlock *>(this, "UTribeMemberButtonWidget.OnlineStatusLabel"); }

	// Functions

	UCustomButtonWidget * GetButton() { return NativeCall<UCustomButtonWidget *>(this, "UTribeMemberButtonWidget.GetButton"); }
	int GetIndex() { return NativeCall<int>(this, "UTribeMemberButtonWidget.GetIndex"); }
	FString * GetPlayerName(FString * result) { return NativeCall<FString *, FString *>(this, "UTribeMemberButtonWidget.GetPlayerName", result); }
	void InitializeMe() { NativeCall<void>(this, "UTribeMemberButtonWidget.InitializeMe"); }
	void SetGroupRank(const FString * GroupRank) { NativeCall<void, const FString *>(this, "UTribeMemberButtonWidget.SetGroupRank", GroupRank); }
	void SetIndex(const int * Idx) { NativeCall<void, const int *>(this, "UTribeMemberButtonWidget.SetIndex", Idx); }
	void SetPlayerName(const FString * PlayerName) { NativeCall<void, const FString *>(this, "UTribeMemberButtonWidget.SetPlayerName", PlayerName); }
	void SetTribeOwnership(const FString * TribeOwnership) { NativeCall<void, const FString *>(this, "UTribeMemberButtonWidget.SetTribeOwnership", TribeOwnership); }
};

