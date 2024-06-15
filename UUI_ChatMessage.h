#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FNothing.h"

struct UUI_ChatMessage : UPrimalUI
{
	char __padding[0x68L];
	FString& ChatBlockNameField() { return *GetNativePointerField<FString*>(this, "UUI_ChatMessage.ChatBlockName"); }
	UPrimalRichTextBlock * ChatBlockField() { return GetNativePointerField<UPrimalRichTextBlock *>(this, "UUI_ChatMessage.ChatBlock"); }
	FString& SameTeamStyleField() { return *GetNativePointerField<FString*>(this, "UUI_ChatMessage.SameTeamStyle"); }
	FString& DifferentTeamStyleField() { return *GetNativePointerField<FString*>(this, "UUI_ChatMessage.DifferentTeamStyle"); }
	FString& MyMessageStyleField() { return *GetNativePointerField<FString*>(this, "UUI_ChatMessage.MyMessageStyle"); }
	FString& NormalMessageStyleField() { return *GetNativePointerField<FString*>(this, "UUI_ChatMessage.NormalMessageStyle"); }
	FString& SameAllianceTeamStyleField() { return *GetNativePointerField<FString*>(this, "UUI_ChatMessage.SameAllianceTeamStyle"); }

	// Functions

	FNothing operator new() { return NativeCall<FNothing>(this, "UUI_ChatMessage.operator new"); }
	FString * BuildMessage(FString * result, FString SenderName, FString ChatText, EChatMessageType::Type MessageType) { return NativeCall<FString *, FString *, FString, FString, EChatMessageType::Type>(this, "UUI_ChatMessage.BuildMessage", result, SenderName, ChatText, MessageType); }
	void InitChatBox() { NativeCall<void>(this, "UUI_ChatMessage.InitChatBox"); }
	void SetChatBlockText(FString SenderName, FString ChatText, EChatMessageType::Type MessageType, UTexture2D * MessageIcon) { NativeCall<void, FString, FString, EChatMessageType::Type, UTexture2D *>(this, "UUI_ChatMessage.SetChatBlockText", SenderName, ChatText, MessageType, MessageIcon); }
};

