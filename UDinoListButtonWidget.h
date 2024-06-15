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

struct UDinoListButtonWidget : UBaseSelectableButtonWidget
{
	char __padding[0x180L];
	FName& ContextMenuAnchorNameField() { return *GetNativePointerField<FName*>(this, "UDinoListButtonWidget.ContextMenuAnchorName"); }
	FName& DinoStatusLabelNameField() { return *GetNativePointerField<FName*>(this, "UDinoListButtonWidget.DinoStatusLabelName"); }
	FName& ExpirationLabelNameField() { return *GetNativePointerField<FName*>(this, "UDinoListButtonWidget.ExpirationLabelName"); }
	FName& ExpirationLabelParentNameField() { return *GetNativePointerField<FName*>(this, "UDinoListButtonWidget.ExpirationLabelParentName"); }
	UCustomButtonWidget * ButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UDinoListButtonWidget.Button"); }
	UTextBlock * DinoStatusLabelField() { return GetNativePointerField<UTextBlock *>(this, "UDinoListButtonWidget.DinoStatusLabel"); }
	UTextBlock * ExpirationLabelField() { return GetNativePointerField<UTextBlock *>(this, "UDinoListButtonWidget.ExpirationLabel"); }
	USizeBox * SelectedMarkerField() { return GetNativePointerField<USizeBox *>(this, "UDinoListButtonWidget.SelectedMarker"); }
	FARKTributeDino& DinoInfoField() { return *GetNativePointerField<FARKTributeDino*>(this, "UDinoListButtonWidget.DinoInfo"); }
	UMenuAnchor * ContextMenuAnchorField() { return GetNativePointerField<UMenuAnchor *>(this, "UDinoListButtonWidget.ContextMenuAnchor"); }
	bool& bAllowButtonClickField() { return *GetNativePointerField<bool*>(this, "UDinoListButtonWidget.bAllowButtonClick"); }
	bool& bIsReadyToUploadField() { return *GetNativePointerField<bool*>(this, "UDinoListButtonWidget.bIsReadyToUpload"); }

	// Functions

	void ClickedButton(UWidget * clickedWidget) { NativeCall<void, UWidget *>(this, "UDinoListButtonWidget.ClickedButton", clickedWidget); }
	void ClickedSecondaryButton(UWidget * clickedWidget) { NativeCall<void, UWidget *>(this, "UDinoListButtonWidget.ClickedSecondaryButton", clickedWidget); }
	UCustomButtonWidget * GetButton() { return NativeCall<UCustomButtonWidget *>(this, "UDinoListButtonWidget.GetButton"); }
	const FARKTributeDino * GetDinoInfo() { return NativeCall<const FARKTributeDino *>(this, "UDinoListButtonWidget.GetDinoInfo"); }
	FString * GetDisplayString(FString * result) { return NativeCall<FString *, FString *>(this, "UDinoListButtonWidget.GetDisplayString", result); }
	static int GetSelectedDinoListWidgetIndex(const TArray<UDinoListButtonWidget *> * ListWidgets, UDinoListButtonWidget ** OutSelected) { return NativeCall<int, const TArray<UDinoListButtonWidget *> *, UDinoListButtonWidget **>(nullptr, "UDinoListButtonWidget.GetSelectedDinoListWidgetIndex", ListWidgets, OutSelected); }
	void InitializeMe(bool bCanExpire) { NativeCall<void, bool>(this, "UDinoListButtonWidget.InitializeMe", bCanExpire); }
	void InitializeWithClick(bool bCanExpire) { NativeCall<void, bool>(this, "UDinoListButtonWidget.InitializeWithClick", bCanExpire); }
	bool IsValidForUpload() { return NativeCall<bool>(this, "UDinoListButtonWidget.IsValidForUpload"); }
	void OnAfterContextMenuCreated(UWidget * ContextMenu) { NativeCall<void, UWidget *>(this, "UDinoListButtonWidget.OnAfterContextMenuCreated", ContextMenu); }
	void SetContextMenuClass(TSubclassOf<UUserWidget> ContextMenuClass) { NativeCall<void, TSubclassOf<UUserWidget>>(this, "UDinoListButtonWidget.SetContextMenuClass", ContextMenuClass); }
	void SetDinoExpiration(const FString * Expiration) { NativeCall<void, const FString *>(this, "UDinoListButtonWidget.SetDinoExpiration", Expiration); }
	void SetDinoInfo(APrimalDinoCharacter * dinoCharacter) { NativeCall<void, APrimalDinoCharacter *>(this, "UDinoListButtonWidget.SetDinoInfo", dinoCharacter); }
	void SetDinoInfo(const FARKTributeDino * info) { NativeCall<void, const FARKTributeDino *>(this, "UDinoListButtonWidget.SetDinoInfo", info); }
	void SetSelectedMarkerVisibility(bool bVisible) { NativeCall<void, bool>(this, "UDinoListButtonWidget.SetSelectedMarkerVisibility", bVisible); }
	void Update() { NativeCall<void>(this, "UDinoListButtonWidget.Update"); }
	bool IsSelected() { return NativeCall<bool>(this, "UDinoListButtonWidget.IsSelected"); }
	void SetButtonString(const FString * Status) { NativeCall<void, const FString *>(this, "UDinoListButtonWidget.SetButtonString", Status); }
};

