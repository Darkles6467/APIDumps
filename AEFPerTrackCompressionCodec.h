#pragma once

#include "BaseDeclarations.h"
#include "AnimEncoding.h"
#include "BoneTrackPair.h"

struct AEFPerTrackCompressionCodec : AnimEncoding
{

	// Functions

	void ByteSwapIn(UAnimSequence * Seq, FMemoryReader * MemoryReader, int SourceArVersion) { NativeCall<void, UAnimSequence *, FMemoryReader *, int>(this, "AEFPerTrackCompressionCodec.ByteSwapIn", Seq, MemoryReader, SourceArVersion); }
	static void ByteSwapOneTrack(UAnimSequence * Seq, FMemoryArchive * MemoryStream, int Offset) { NativeCall<void, UAnimSequence *, FMemoryArchive *, int>(nullptr, "AEFPerTrackCompressionCodec.ByteSwapOneTrack", Seq, MemoryStream, Offset); }
	void ByteSwapOut(UAnimSequence * Seq, TArray<unsigned char> * SerializedData, bool ForceByteSwapping) { NativeCall<void, UAnimSequence *, TArray<unsigned char> *, bool>(this, "AEFPerTrackCompressionCodec.ByteSwapOut", Seq, SerializedData, ForceByteSwapping); }
	void GetBoneAtom(FTransform * OutAtom, UAnimSequence * Seq, int TrackIndex, float Time) { NativeCall<void, FTransform *, UAnimSequence *, int, float>(this, "AEFPerTrackCompressionCodec.GetBoneAtom", OutAtom, Seq, TrackIndex, Time); }
	static void GetBoneAtomRotation(FTransform * OutAtom, UAnimSequence * Seq, int Offset, float Time, float RelativePos) { NativeCall<void, FTransform *, UAnimSequence *, int, float, float>(nullptr, "AEFPerTrackCompressionCodec.GetBoneAtomRotation", OutAtom, Seq, Offset, Time, RelativePos); }
	static void GetBoneAtomScale(FTransform * OutAtom, UAnimSequence * Seq, int Offset, float Time, float RelativePos) { NativeCall<void, FTransform *, UAnimSequence *, int, float, float>(nullptr, "AEFPerTrackCompressionCodec.GetBoneAtomScale", OutAtom, Seq, Offset, Time, RelativePos); }
	static void GetBoneAtomTranslation(FTransform * OutAtom, UAnimSequence * Seq, int Offset, float Time, float RelativePos) { NativeCall<void, FTransform *, UAnimSequence *, int, float, float>(nullptr, "AEFPerTrackCompressionCodec.GetBoneAtomTranslation", OutAtom, Seq, Offset, Time, RelativePos); }
	void GetPoseRotations(TArray<FTransform,TMemStackAllocator<0> > * Atoms, const TArray<BoneTrackPair> * DesiredPairs, UAnimSequence * Seq, float Time) { NativeCall<void, TArray<FTransform,TMemStackAllocator<0> > *, const TArray<BoneTrackPair> *, UAnimSequence *, float>(this, "AEFPerTrackCompressionCodec.GetPoseRotations", Atoms, DesiredPairs, Seq, Time); }
	void GetPoseScales(TArray<FTransform,TMemStackAllocator<0> > * Atoms, const TArray<BoneTrackPair> * DesiredPairs, UAnimSequence * Seq, float Time) { NativeCall<void, TArray<FTransform,TMemStackAllocator<0> > *, const TArray<BoneTrackPair> *, UAnimSequence *, float>(this, "AEFPerTrackCompressionCodec.GetPoseScales", Atoms, DesiredPairs, Seq, Time); }
	void GetPoseTranslations(TArray<FTransform,TMemStackAllocator<0> > * Atoms, const TArray<BoneTrackPair> * DesiredPairs, UAnimSequence * Seq, float Time) { NativeCall<void, TArray<FTransform,TMemStackAllocator<0> > *, const TArray<BoneTrackPair> *, UAnimSequence *, float>(this, "AEFPerTrackCompressionCodec.GetPoseTranslations", Atoms, DesiredPairs, Seq, Time); }
};

