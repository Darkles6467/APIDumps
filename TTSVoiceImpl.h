#pragma once

#include "BaseDeclarations.h"
struct ITTSVoice
{
	char __padding[0x8L];
};

struct TTSVoiceImpl : ITTSVoice
{
	char __padding[0x18L];
	FString& _nameField() { return *GetNativePointerField<FString*>(this, "TTSVoiceImpl._name"); }
	unsigned int& _voiceIdField() { return *GetNativePointerField<unsigned int*>(this, "TTSVoiceImpl._voiceId"); }
	bool& _isValidField() { return *GetNativePointerField<bool*>(this, "TTSVoiceImpl._isValid"); }

	// Functions

};

