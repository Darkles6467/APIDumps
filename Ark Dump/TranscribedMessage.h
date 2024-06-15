#pragma once

#include "BaseDeclarations.h"
struct ITranscribedMessage
{
	char __padding[0x8L];
};

struct TranscribedMessage : ITranscribedMessage
{
	char __padding[0x80L];
	FDateTime& _receivedTimeField() { return *GetNativePointerField<FDateTime*>(this, "TranscribedMessage._receivedTime"); }
	FString& _textField() { return *GetNativePointerField<FString*>(this, "TranscribedMessage._text"); }
	AccountId& _speakerField() { return *GetNativePointerField<AccountId*>(this, "TranscribedMessage._speaker"); }
	FString& _languageField() { return *GetNativePointerField<FString*>(this, "TranscribedMessage._language"); }
	ChannelSession * _channelSessionField() { return GetNativePointerField<ChannelSession *>(this, "TranscribedMessage._channelSession"); }

	// Functions

	const FString * Language() { return NativeCall<const FString *>(this, "TranscribedMessage.Language"); }
};

