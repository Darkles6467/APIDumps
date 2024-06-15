#pragma once

#include "BaseDeclarations.h"
#include "FTickerObjectBase.h"

struct FTestVoice : FTickerObjectBase
{
	char __padding[0xa8L];
	UAudioComponent * VoiceCompField() { return GetNativePointerField<UAudioComponent *>(this, "FTestVoice.VoiceComp"); }
	TArray<unsigned char>& RawCaptureDataField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FTestVoice.RawCaptureData"); }
	int& MaxRawCaptureDataSizeField() { return *GetNativePointerField<int*>(this, "FTestVoice.MaxRawCaptureDataSize"); }
	TArray<unsigned char>& CompressedDataField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FTestVoice.CompressedData"); }
	int& MaxCompressedDataSizeField() { return *GetNativePointerField<int*>(this, "FTestVoice.MaxCompressedDataSize"); }
	TArray<unsigned char>& UncompressedDataField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FTestVoice.UncompressedData"); }
	int& MaxUncompressedDataSizeField() { return *GetNativePointerField<int*>(this, "FTestVoice.MaxUncompressedDataSize"); }
	TArray<unsigned char>& RemainderField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FTestVoice.Remainder"); }
	int& MaxRemainderSizeField() { return *GetNativePointerField<int*>(this, "FTestVoice.MaxRemainderSize"); }
	int& LastRemainderSizeField() { return *GetNativePointerField<int*>(this, "FTestVoice.LastRemainderSize"); }
	bool& bUseTestSampleField() { return *GetNativePointerField<bool*>(this, "FTestVoice.bUseTestSample"); }
	bool& bZeroInputField() { return *GetNativePointerField<bool*>(this, "FTestVoice.bZeroInput"); }
	bool& bUseDecompressedField() { return *GetNativePointerField<bool*>(this, "FTestVoice.bUseDecompressed"); }
	bool& bZeroOutputField() { return *GetNativePointerField<bool*>(this, "FTestVoice.bZeroOutput"); }

	// Functions

	bool Init() { return NativeCall<bool>(this, "FTestVoice.Init"); }
	void SetStaticVoiceData(TArray<unsigned char> * VoiceData, unsigned int * TotalVoiceBytes) { NativeCall<void, TArray<unsigned char> *, unsigned int *>(this, "FTestVoice.SetStaticVoiceData", VoiceData, TotalVoiceBytes); }
	void Shutdown() { NativeCall<void>(this, "FTestVoice.Shutdown"); }
	bool Tick(float DeltaTime) { return NativeCall<bool, float>(this, "FTestVoice.Tick", DeltaTime); }
};

