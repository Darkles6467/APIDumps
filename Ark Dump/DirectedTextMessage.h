#pragma once

#include "BaseDeclarations.h"
#include "ITextMessage.h"

struct IDirectedTextMessage : ITextMessage
{
};

struct DirectedTextMessage : IDirectedTextMessage
{
	char __padding[0xa0L];
	FDateTime& _receivedTimeField() { return *GetNativePointerField<FDateTime*>(this, "DirectedTextMessage._receivedTime"); }
	FString& _messageField() { return *GetNativePointerField<FString*>(this, "DirectedTextMessage._message"); }
	AccountId& _senderField() { return *GetNativePointerField<AccountId*>(this, "DirectedTextMessage._sender"); }
	FString& _languageField() { return *GetNativePointerField<FString*>(this, "DirectedTextMessage._language"); }
	FString& _applicationStanzaNamespaceField() { return *GetNativePointerField<FString*>(this, "DirectedTextMessage._applicationStanzaNamespace"); }
	FString& _applicationStanzaBodyField() { return *GetNativePointerField<FString*>(this, "DirectedTextMessage._applicationStanzaBody"); }
	LoginSession * _loginSessionField() { return GetNativePointerField<LoginSession *>(this, "DirectedTextMessage._loginSession"); }

	// Functions

};

