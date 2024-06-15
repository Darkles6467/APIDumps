#pragma once

#include "BaseDeclarations.h"
#include "PGModule.h"
#include "PGFixed.h"

struct PointSampleFloatMap : PGModule
{
	char __padding[0x8L];
	UFloatMap * FloatMapField() { return GetNativePointerField<UFloatMap *>(this, "PointSampleFloatMap.FloatMap"); }

	// Functions

	PGFixed * GetValue(PGFixed * result, PGFixed x, PGFixed y) { return NativeCall<PGFixed *, PGFixed *, PGFixed, PGFixed>(this, "PointSampleFloatMap.GetValue", result, x, y); }
};

