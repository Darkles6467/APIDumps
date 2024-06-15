#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UUI_ServerBroadcastMessage : UPrimalUI
{
	char __padding[0x58L];
	FString& MessageTextBlockNameField() { return *GetNativePointerField<FString*>(this, "UUI_ServerBroadcastMessage.MessageTextBlockName"); }
	FSlateFontInfo& BoldFontField() { return *GetNativePointerField<FSlateFontInfo*>(this, "UUI_ServerBroadcastMessage.BoldFont"); }
	FSlateFontInfo& RegularFontField() { return *GetNativePointerField<FSlateFontInfo*>(this, "UUI_ServerBroadcastMessage.RegularFont"); }
	UTextBlock * MessageTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UUI_ServerBroadcastMessage.MessageTextBlock"); }

	// Functions

	FString * BuildMessage(FString * result, FString SenderName, FString ChatText, FLinearColor Color, bool IsBold) { return NativeCall<FString *, FString *, FString, FString, FLinearColor, bool>(this, "UUI_ServerBroadcastMessage.BuildMessage", result, SenderName, ChatText, Color, IsBold); }
	void InitChatBlock() { NativeCall<void>(this, "UUI_ServerBroadcastMessage.InitChatBlock"); }
	void SetChatBlockText(FString SenderName, FString ChatText, FLinearColor Color, bool IsBold) { NativeCall<void, FString, FString, FLinearColor, bool>(this, "UUI_ServerBroadcastMessage.SetChatBlockText", SenderName, ChatText, Color, IsBold); }
};

