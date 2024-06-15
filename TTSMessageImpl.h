#pragma once

#include "BaseDeclarations.h"
struct ITTSMessage
{
	char __padding[0x8L];
};

struct TTSMessageImpl : ITTSMessage
{
	char __padding[0x40L];
	TTSVoiceImpl& _voiceField() { return *GetNativePointerField<TTSVoiceImpl*>(this, "TTSMessageImpl._voice"); }
	FString& _textField() { return *GetNativePointerField<FString*>(this, "TTSMessageImpl._text"); }
	FieldArray<_BYTE, 1> _destinationField() { return {this, "TTSMessageImpl._destination"}; }
	unsigned int& _utteranceIdField() { return *GetNativePointerField<unsigned int*>(this, "TTSMessageImpl._utteranceId"); }
	FieldArray<_BYTE, 1> _stateField() { return {this, "TTSMessageImpl._state"}; }
	bool& _isValidField() { return *GetNativePointerField<bool*>(this, "TTSMessageImpl._isValid"); }

	// Functions

	bool IsValid() { return NativeCall<bool>(this, "TTSMessageImpl.IsValid"); }
	const unsigned int * UtteranceId() { return NativeCall<const unsigned int *>(this, "TTSMessageImpl.UtteranceId"); }
};

