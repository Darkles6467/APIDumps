#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "PGFixed.h"

struct UFloatMap : UObject
{
	char __padding[0x10L];
	Map2DData<PGFixed>& HeightMapDataField() { return *GetNativePointerField<Map2DData<PGFixed>*>(this, "UFloatMap.HeightMapData"); }

	// Functions

	int GetSizeX() { return NativeCall<int>(this, "UFloatMap.GetSizeX"); }
	int GetSizeY() { return NativeCall<int>(this, "UFloatMap.GetSizeY"); }
	void GetGreyScaleColors(TArray<unsigned char> * Color, PGFixed Minmum, PGFixed Maximum) { NativeCall<void, TArray<unsigned char> *, PGFixed, PGFixed>(this, "UFloatMap.GetGreyScaleColors", Color, Minmum, Maximum); }
	int GetSize() { return NativeCall<int>(this, "UFloatMap.GetSize"); }
	void Init(int InSizeX, int InSizeY) { NativeCall<void, int, int>(this, "UFloatMap.Init", InSizeX, InSizeY); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UFloatMap.Serialize", Ar); }
	PGVector * GetNormal(PGVector * result, int X, int Y) { return NativeCall<PGVector *, PGVector *, int, int>(this, "UFloatMap.GetNormal", result, X, Y); }
	PGVector * SampleNormal(PGVector * result, PGFixed X, PGFixed Y) { return NativeCall<PGVector *, PGVector *, PGFixed, PGFixed>(this, "UFloatMap.SampleNormal", result, X, Y); }
};

