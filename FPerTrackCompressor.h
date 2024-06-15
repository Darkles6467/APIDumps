#pragma once

#include "BaseDeclarations.h"
struct FPerTrackCompressor
{
	char __padding[0x28L];
	float& MaxErrorField() { return *GetNativePointerField<float*>(this, "FPerTrackCompressor.MaxError"); }
	long double& SumErrorField() { return *GetNativePointerField<long double*>(this, "FPerTrackCompressor.SumError"); }
	TArray<unsigned char>& CompressedBytesField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FPerTrackCompressor.CompressedBytes"); }
	int& ActualCompressionModeField() { return *GetNativePointerField<int*>(this, "FPerTrackCompressor.ActualCompressionMode"); }
	bool& bReallyNeedsFrameTableField() { return *GetNativePointerField<bool*>(this, "FPerTrackCompressor.bReallyNeedsFrameTable"); }

	// Functions

	void AppendBytes(const void * Data, int Length) { NativeCall<void, const void *, int>(this, "FPerTrackCompressor.AppendBytes", Data, Length); }
	static FBox * CalculateQuatACF96Bounds(FBox * result, const FQuat * Points, int NumPoints) { return NativeCall<FBox *, FBox *, const FQuat *, int>(nullptr, "FPerTrackCompressor.CalculateQuatACF96Bounds", result, Points, NumPoints); }
	void CompressRotation_11_11_10(const FRotationTrack * RotationData, float ZeroingThreshold) { NativeCall<void, const FRotationTrack *, float>(this, "FPerTrackCompressor.CompressRotation_11_11_10", RotationData, ZeroingThreshold); }
	void CompressRotation_16_16_16(const FRotationTrack * RotationData, float ZeroingThreshold) { NativeCall<void, const FRotationTrack *, float>(this, "FPerTrackCompressor.CompressRotation_16_16_16", RotationData, ZeroingThreshold); }
	void CompressRotation_Fixed32(const FRotationTrack * RotationData) { NativeCall<void, const FRotationTrack *>(this, "FPerTrackCompressor.CompressRotation_Fixed32", RotationData); }
	void CompressRotation_Float32(const FRotationTrack * RotationData) { NativeCall<void, const FRotationTrack *>(this, "FPerTrackCompressor.CompressRotation_Float32", RotationData); }
	void CompressRotation_Identity(const FRotationTrack * RotationData) { NativeCall<void, const FRotationTrack *>(this, "FPerTrackCompressor.CompressRotation_Identity", RotationData); }
	void CompressRotation_Uncompressed(const FRotationTrack * RotationData) { NativeCall<void, const FRotationTrack *>(this, "FPerTrackCompressor.CompressRotation_Uncompressed", RotationData); }
	void CompressScale_16_16_16(const FTranslationTrack * TranslationData, float ZeroingThreshold) { NativeCall<void, const FTranslationTrack *, float>(this, "FPerTrackCompressor.CompressScale_16_16_16", TranslationData, ZeroingThreshold); }
	void CompressTranslation_Uncompressed(const FTranslationTrack * TranslationData, float ZeroingThreshold) { NativeCall<void, const FTranslationTrack *, float>(this, "FPerTrackCompressor.CompressTranslation_Uncompressed", TranslationData, ZeroingThreshold); }
	void CompressTranslation_10_11_11(const FTranslationTrack * TranslationData, float ZeroingThreshold) { NativeCall<void, const FTranslationTrack *, float>(this, "FPerTrackCompressor.CompressTranslation_10_11_11", TranslationData, ZeroingThreshold); }
	void CompressScale_Identity(const FTranslationTrack * TranslationData) { NativeCall<void, const FTranslationTrack *>(this, "FPerTrackCompressor.CompressScale_Identity", TranslationData); }
	void PadOutputStream() { NativeCall<void>(this, "FPerTrackCompressor.PadOutputStream"); }
};

