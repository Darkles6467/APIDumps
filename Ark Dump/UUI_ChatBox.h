#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FControllerEvent.h"
#include "FChatMessage.h"

struct UUI_ChatBox : UPrimalUI
{
	char __padding[0xb8L];
	TSubclassOf<UUI_ChatMessage>& ChatMessageUITemplateField() { return *GetNativePointerField<TSubclassOf<UUI_ChatMessage>*>(this, "UUI_ChatBox.ChatMessageUITemplate"); }
	TSubclassOf<UUI_ServerBroadcastMessage>& ServerBroadCastMessageUITemplateField() { return *GetNativePointerField<TSubclassOf<UUI_ServerBroadcastMessage>*>(this, "UUI_ChatBox.ServerBroadCastMessageUITemplate"); }
	FString& ChatBoxNameField() { return *GetNativePointerField<FString*>(this, "UUI_ChatBox.ChatBoxName"); }
	FString& EditTextBoxNameField() { return *GetNativePointerField<FString*>(this, "UUI_ChatBox.EditTextBoxName"); }
	FString& SendingModelLabelNameField() { return *GetNativePointerField<FString*>(this, "UUI_ChatBox.SendingModelLabelName"); }
	FName& DisplayModeLabelNameField() { return *GetNativePointerField<FName*>(this, "UUI_ChatBox.DisplayModeLabelName"); }
	FName& CanavasPanelNameField() { return *GetNativePointerField<FName*>(this, "UUI_ChatBox.CanavasPanelName"); }
	FString& ServerSenderTextField() { return *GetNativePointerField<FString*>(this, "UUI_ChatBox.ServerSenderText"); }
	int& ChatHistoryLimitField() { return *GetNativePointerField<int*>(this, "UUI_ChatBox.ChatHistoryLimit"); }
	UTextBlock * DisplayModeLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_ChatBox.DisplayModeLabel"); }
	bool& bGamepadScrollingEnabledField() { return *GetNativePointerField<bool*>(this, "UUI_ChatBox.bGamepadScrollingEnabled"); }
	float& GamepadScroolRightAnalogDeltaYField() { return *GetNativePointerField<float*>(this, "UUI_ChatBox.GamepadScroolRightAnalogDeltaY"); }
	UCanvasPanel * PanelContainerField() { return GetNativePointerField<UCanvasPanel *>(this, "UUI_ChatBox.PanelContainer"); }
	UCanvasPanel * ChatMarkerDEFAULTField() { return GetNativePointerField<UCanvasPanel *>(this, "UUI_ChatBox.ChatMarkerDEFAULT"); }
	UCanvasPanel * ChatMarkerINVENTORYField() { return GetNativePointerField<UCanvasPanel *>(this, "UUI_ChatBox.ChatMarkerINVENTORY"); }
	UTextBlock * SendModeLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_ChatBox.SendModeLabel"); }
	EChatSendMode::Type& ChatTypeField() { return *GetNativePointerField<EChatSendMode::Type*>(this, "UUI_ChatBox.ChatType"); }
	float& ScrollOffsetField() { return *GetNativePointerField<float*>(this, "UUI_ChatBox.ScrollOffset"); }
	float& IntialPosXField() { return *GetNativePointerField<float*>(this, "UUI_ChatBox.IntialPosX"); }
	float& IntialPosYField() { return *GetNativePointerField<float*>(this, "UUI_ChatBox.IntialPosY"); }

	// Functions

	bool IsChatEditBoxVisible() { return NativeCall<bool>(this, "UUI_ChatBox.IsChatEditBoxVisible"); }
	void AddToViewport() { NativeCall<void>(this, "UUI_ChatBox.AddToViewport"); }
	void HandleChatTextChanged(const FText * Text) { NativeCall<void, const FText *>(this, "UUI_ChatBox.HandleChatTextChanged", Text); }
	void HandleChatTextCommitted(const FText * Text, ETextCommit::Type CommitMethod) { NativeCall<void, const FText *, ETextCommit::Type>(this, "UUI_ChatBox.HandleChatTextCommitted", Text, CommitMethod); }
	bool OnControllerAnalogValueChanged_SpecialChatboxForwarding(FControllerEvent ControllerEvent) { return NativeCall<bool, FControllerEvent>(this, "UUI_ChatBox.OnControllerAnalogValueChanged_SpecialChatboxForwarding", ControllerEvent); }
	bool ParseText(const FText * InText) { return NativeCall<bool, const FText *>(this, "UUI_ChatBox.ParseText", InText); }
	void ReceivedNewChatMessage(FChatMessage ChatMessage) { NativeCall<void, FChatMessage>(this, "UUI_ChatBox.ReceivedNewChatMessage", ChatMessage); }
	void ReceivedNewServerChatMessage(FString Message, FLinearColor Color, bool bIsBold) { NativeCall<void, FString, FLinearColor, bool>(this, "UUI_ChatBox.ReceivedNewServerChatMessage", Message, Color, bIsBold); }
	void ScrollChat(float ScrollOffset) { NativeCall<void, float>(this, "UUI_ChatBox.ScrollChat", ScrollOffset); }
	void SetChatType(EChatSendMode::Type NewChatType) { NativeCall<void, EChatSendMode::Type>(this, "UUI_ChatBox.SetChatType", NewChatType); }
	void SetPanelLocation(bool bInventoryOpened) { NativeCall<void, bool>(this, "UUI_ChatBox.SetPanelLocation", bInventoryOpened); }
	void ShowChatEditBox(bool bShow) { NativeCall<void, bool>(this, "UUI_ChatBox.ShowChatEditBox", bShow); }
	void StartNewChatMessage(EChatSendMode::Type ChatType) { NativeCall<void, EChatSendMode::Type>(this, "UUI_ChatBox.StartNewChatMessage", ChatType); }
	void SwitchChatMode() { NativeCall<void>(this, "UUI_ChatBox.SwitchChatMode"); }
	void Tick_Implementation(FGeometry MyGeometry, float InDeltaTime) { NativeCall<void, FGeometry, float>(this, "UUI_ChatBox.Tick_Implementation", MyGeometry, InDeltaTime); }
	void ToggleGamepadScrolling() { NativeCall<void>(this, "UUI_ChatBox.ToggleGamepadScrolling"); }
};

