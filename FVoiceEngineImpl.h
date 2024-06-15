#pragma once

#include "BaseDeclarations.h"
#include "IVoiceEngine.h"

struct FVoiceEngineImpl : IVoiceEngine
{
	char __padding[0xd0L];
	FieldArray<FLocalVoiceData, 1> PlayerVoiceDataField() { return {this, "FVoiceEngineImpl.PlayerVoiceData"}; }
	int& OwningUserIndexField() { return *GetNativePointerField<int*>(this, "FVoiceEngineImpl.OwningUserIndex"); }
	unsigned int& UncompressedBytesAvailableField() { return *GetNativePointerField<unsigned int*>(this, "FVoiceEngineImpl.UncompressedBytesAvailable"); }
	unsigned int& CompressedBytesAvailableField() { return *GetNativePointerField<unsigned int*>(this, "FVoiceEngineImpl.CompressedBytesAvailable"); }
	EVoiceCaptureState::Type& AvailableVoiceResultField() { return *GetNativePointerField<EVoiceCaptureState::Type*>(this, "FVoiceEngineImpl.AvailableVoiceResult"); }
	bool& bPendingFinalCaptureField() { return *GetNativePointerField<bool*>(this, "FVoiceEngineImpl.bPendingFinalCapture"); }
	bool& bIsCapturingField() { return *GetNativePointerField<bool*>(this, "FVoiceEngineImpl.bIsCapturing"); }
	TArray<unsigned char>& CompressedVoiceBufferField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FVoiceEngineImpl.CompressedVoiceBuffer"); }
	TArray<unsigned char>& DecompressedVoiceBufferField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FVoiceEngineImpl.DecompressedVoiceBuffer"); }
	FVoiceEngineImpl::FVoiceSerializeHelper * SerializeHelperField() { return GetNativePointerField<FVoiceEngineImpl::FVoiceSerializeHelper *>(this, "FVoiceEngineImpl.SerializeHelper"); }

	// Functions

	void FVoiceSerializeHelper(FVoiceEngineImpl * InVoiceEngine) { NativeCall<void, FVoiceEngineImpl *>(this, "FVoiceEngineImpl.FVoiceSerializeHelper", InVoiceEngine); }
	void FVoiceSerializeHelper(FReferenceCollector * Collector) { NativeCall<void, FReferenceCollector *>(this, "FVoiceEngineImpl.FVoiceSerializeHelper", Collector); }
	unsigned int GetVoiceDataReadyFlags() { return NativeCall<unsigned int>(this, "FVoiceEngineImpl.GetVoiceDataReadyFlags"); }
	FString * GetVoiceDebugState(FString * result) { return NativeCall<FString *, FString *>(this, "FVoiceEngineImpl.GetVoiceDebugState", result); }
	bool Init(int MaxLocalTalkers, int MaxRemoteTalkers) { return NativeCall<bool, int, int>(this, "FVoiceEngineImpl.Init", MaxLocalTalkers, MaxRemoteTalkers); }
	bool IsHeadsetPresent(unsigned int LocalUserNum) { return NativeCall<bool, unsigned int>(this, "FVoiceEngineImpl.IsHeadsetPresent", LocalUserNum); }
	bool IsLocalPlayerTalking(unsigned int LocalUserNum) { return NativeCall<bool, unsigned int>(this, "FVoiceEngineImpl.IsLocalPlayerTalking", LocalUserNum); }
	bool IsRemotePlayerTalking(const FUniqueNetId * UniqueId) { return NativeCall<bool, const FUniqueNetId *>(this, "FVoiceEngineImpl.IsRemotePlayerTalking", UniqueId); }
	void OnAudioFinished(UAudioComponent * AC) { NativeCall<void, UAudioComponent *>(this, "FVoiceEngineImpl.OnAudioFinished", AC); }
	unsigned int ReadLocalVoiceData(unsigned int LocalUserNum, char * Data, unsigned int * Size) { return NativeCall<unsigned int, unsigned int, char *, unsigned int *>(this, "FVoiceEngineImpl.ReadLocalVoiceData", LocalUserNum, Data, Size); }
	unsigned int RegisterLocalTalker(unsigned int LocalUserNum) { return NativeCall<unsigned int, unsigned int>(this, "FVoiceEngineImpl.RegisterLocalTalker", LocalUserNum); }
	unsigned int StartLocalVoiceProcessing(unsigned int LocalUserNum) { return NativeCall<unsigned int, unsigned int>(this, "FVoiceEngineImpl.StartLocalVoiceProcessing", LocalUserNum); }
	unsigned int StopLocalVoiceProcessing(unsigned int LocalUserNum) { return NativeCall<unsigned int, unsigned int>(this, "FVoiceEngineImpl.StopLocalVoiceProcessing", LocalUserNum); }
	unsigned int SubmitRemoteVoiceData(const FUniqueNetId * RemoteTalkerId, char * Data, unsigned int * Size, char PlaybackFlags, bool bUseSuperRange) { return NativeCall<unsigned int, const FUniqueNetId *, char *, unsigned int *, char, bool>(this, "FVoiceEngineImpl.SubmitRemoteVoiceData", RemoteTalkerId, Data, Size, PlaybackFlags, bUseSuperRange); }
	void Tick(float DeltaTime) { NativeCall<void, float>(this, "FVoiceEngineImpl.Tick", DeltaTime); }
	void TickTalkers(float DeltaTime) { NativeCall<void, float>(this, "FVoiceEngineImpl.TickTalkers", DeltaTime); }
	unsigned int UnregisterLocalTalker(unsigned int LocalUserNum) { return NativeCall<unsigned int, unsigned int>(this, "FVoiceEngineImpl.UnregisterLocalTalker", LocalUserNum); }
};

