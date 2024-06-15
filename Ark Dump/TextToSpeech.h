#pragma once

#include "BaseDeclarations.h"
struct ITextToSpeech
{
	char __padding[0x68L];
};

struct TextToSpeech : ITextToSpeech
{
	char __padding[0xd8L];
	ClientImpl * _clientField() { return GetNativePointerField<ClientImpl *>(this, "TextToSpeech._client"); }
	FString& _ttsSDKDefaultVoiceNameField() { return *GetNativePointerField<FString*>(this, "TextToSpeech._ttsSDKDefaultVoiceName"); }
	TTSVoiceImpl& _ttsCurrentVoiceField() { return *GetNativePointerField<TTSVoiceImpl*>(this, "TextToSpeech._ttsCurrentVoice"); }

	// Functions

	int CancelAll() { return NativeCall<int>(this, "TextToSpeech.CancelAll"); }
	int CancelDestination(const TTSDestination * destination) { return NativeCall<int, const TTSDestination *>(this, "TextToSpeech.CancelDestination", destination); }
	int CancelMessage(const ITTSMessage * message) { return NativeCall<int, const ITTSMessage *>(this, "TextToSpeech.CancelMessage", message); }
	void CleanupTTS() { NativeCall<void>(this, "TextToSpeech.CleanupTTS"); }
	void HandleEvent(const vx_evt_base * evt) { NativeCall<void, const vx_evt_base *>(this, "TextToSpeech.HandleEvent", evt); }
	bool SetCurrentVoice(const ITTSVoice * newVoice) { return NativeCall<bool, const ITTSVoice *>(this, "TextToSpeech.SetCurrentVoice", newVoice); }
	int Speak(const FString * text, const TTSDestination * destination, ITTSMessage ** outMessage) { return NativeCall<int, const FString *, const TTSDestination *, ITTSMessage **>(this, "TextToSpeech.Speak", text, destination, outMessage); }
	int SpeakToBuffer(const FString * text, ITTSAudioBuffer ** outBuffer) { return NativeCall<int, const FString *, ITTSAudioBuffer **>(this, "TextToSpeech.SpeakToBuffer", text, outBuffer); }
};

