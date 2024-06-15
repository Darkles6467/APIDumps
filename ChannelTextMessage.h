#pragma once

#include "BaseDeclarations.h"
#include "ITextMessage.h"

struct IChannelTextMessage : ITextMessage
{
};

struct ChannelTextMessage : IChannelTextMessage
{
	char __padding[0xa0L];
	FDateTime& _receivedTimeField() { return *GetNativePointerField<FDateTime*>(this, "ChannelTextMessage._receivedTime"); }
	FString& _messageField() { return *GetNativePointerField<FString*>(this, "ChannelTextMessage._message"); }
	AccountId& _senderField() { return *GetNativePointerField<AccountId*>(this, "ChannelTextMessage._sender"); }
	FString& _languageField() { return *GetNativePointerField<FString*>(this, "ChannelTextMessage._language"); }
	FString& _applicationStanzaNamespaceField() { return *GetNativePointerField<FString*>(this, "ChannelTextMessage._applicationStanzaNamespace"); }
	FString& _applicationStanzaBodyField() { return *GetNativePointerField<FString*>(this, "ChannelTextMessage._applicationStanzaBody"); }
	ChannelSession * _channelSessionField() { return GetNativePointerField<ChannelSession *>(this, "ChannelTextMessage._channelSession"); }

	// Functions

	const FString * ApplicationStanzaBody() { return NativeCall<const FString *>(this, "ChannelTextMessage.ApplicationStanzaBody"); }
};

