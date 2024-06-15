#pragma once

#include "BaseDeclarations.h"
#include "AnimEncoding.h"

struct AnimEncodingLegacyBase : AnimEncoding
{

	// Functions

	void ByteSwapIn(UAnimSequence * Seq, FMemoryReader * MemoryReader, int SourceArVersion) { NativeCall<void, UAnimSequence *, FMemoryReader *, int>(this, "AnimEncodingLegacyBase.ByteSwapIn", Seq, MemoryReader, SourceArVersion); }
	void ByteSwapOut(UAnimSequence * Seq, TArray<unsigned char> * SerializedData, bool ForceByteSwapping) { NativeCall<void, UAnimSequence *, TArray<unsigned char> *, bool>(this, "AnimEncodingLegacyBase.ByteSwapOut", Seq, SerializedData, ForceByteSwapping); }
	void GetBoneAtom(FTransform * OutAtom, UAnimSequence * Seq, int TrackIndex, float Time) { NativeCall<void, FTransform *, UAnimSequence *, int, float>(this, "AnimEncodingLegacyBase.GetBoneAtom", OutAtom, Seq, TrackIndex, Time); }
};

struct AEFConstantKeyLerpShared : AnimEncodingLegacyBase
{

	// Functions

	void ByteSwapRotationIn(UAnimSequence * Seq, FMemoryWriter * MemoryWriter, char ** TrackData, int NumKeys) { NativeCall<void, UAnimSequence *, FMemoryWriter *, char **, int>(this, "AEFConstantKeyLerpShared.ByteSwapRotationIn", Seq, MemoryWriter, TrackData, NumKeys); }
	void ByteSwapScaleOut(UAnimSequence * Seq, FMemoryWriter * MemoryWriter, char ** TrackData, int NumKeys) { NativeCall<void, UAnimSequence *, FMemoryWriter *, char **, int>(this, "AEFConstantKeyLerpShared.ByteSwapScaleOut", Seq, MemoryWriter, TrackData, NumKeys); }
	void ByteSwapTranslationIn(UAnimSequence * Seq, FMemoryWriter * MemoryWriter, char ** TrackData, int NumKeys) { NativeCall<void, UAnimSequence *, FMemoryWriter *, char **, int>(this, "AEFConstantKeyLerpShared.ByteSwapTranslationIn", Seq, MemoryWriter, TrackData, NumKeys); }
};

struct AEFVariableKeyLerpShared : AEFConstantKeyLerpShared
{

	// Functions

	void ByteSwapRotationIn(UAnimSequence * Seq, FMemoryReader * MemoryReader, char ** TrackData, int NumKeys, int SourceArVersion) { NativeCall<void, UAnimSequence *, FMemoryReader *, char **, int, int>(this, "AEFVariableKeyLerpShared.ByteSwapRotationIn", Seq, MemoryReader, TrackData, NumKeys, SourceArVersion); }
	void ByteSwapRotationOut(UAnimSequence * Seq, FMemoryWriter * MemoryWriter, char ** TrackData, int NumKeys) { NativeCall<void, UAnimSequence *, FMemoryWriter *, char **, int>(this, "AEFVariableKeyLerpShared.ByteSwapRotationOut", Seq, MemoryWriter, TrackData, NumKeys); }
	void ByteSwapScaleIn(UAnimSequence * Seq, FMemoryReader * MemoryReader, char ** TrackData, int NumKeys, int SourceArVersion) { NativeCall<void, UAnimSequence *, FMemoryReader *, char **, int, int>(this, "AEFVariableKeyLerpShared.ByteSwapScaleIn", Seq, MemoryReader, TrackData, NumKeys, SourceArVersion); }
	void ByteSwapScaleOut(UAnimSequence * Seq, FMemoryWriter * MemoryWriter, char ** TrackData, int NumKeys) { NativeCall<void, UAnimSequence *, FMemoryWriter *, char **, int>(this, "AEFVariableKeyLerpShared.ByteSwapScaleOut", Seq, MemoryWriter, TrackData, NumKeys); }
	void ByteSwapTranslationIn(UAnimSequence * Seq, FMemoryReader * MemoryReader, char ** TrackData, int NumKeys, int SourceArVersion) { NativeCall<void, UAnimSequence *, FMemoryReader *, char **, int, int>(this, "AEFVariableKeyLerpShared.ByteSwapTranslationIn", Seq, MemoryReader, TrackData, NumKeys, SourceArVersion); }
	void ByteSwapTranslationOut(UAnimSequence * Seq, FMemoryWriter * MemoryWriter, char ** TrackData, int NumKeys) { NativeCall<void, UAnimSequence *, FMemoryWriter *, char **, int>(this, "AEFVariableKeyLerpShared.ByteSwapTranslationOut", Seq, MemoryWriter, TrackData, NumKeys); }
};

