#pragma once

#include "BaseDeclarations.h"
struct FCompressedTrack
{
	char __padding[0x38L];
	TArray<unsigned char>& ByteStreamField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FCompressedTrack.ByteStream"); }
	TArray<float>& TimesField() { return *GetNativePointerField<TArray<float>*>(this, "FCompressedTrack.Times"); }
	FieldArray<float, 3> MinsField() { return {this, "FCompressedTrack.Mins"}; }
	FieldArray<float, 3> RangesField() { return {this, "FCompressedTrack.Ranges"}; }

	// Functions

	FCompressedTrack * operator=(const FCompressedTrack * __that) { return NativeCall<FCompressedTrack *, const FCompressedTrack *>(this, "FCompressedTrack.operator=", __that); }
};

