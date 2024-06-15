#pragma once

#include "BaseDeclarations.h"
#include "PGModule.h"
#include "PGFixed.h"

struct SampleFloatMap : PGModule
{
	char __padding[0x8L];
	UFloatMap * FloatMapField() { return GetNativePointerField<UFloatMap *>(this, "SampleFloatMap.FloatMap"); }

	// Functions

	PGFixed * GetValue(PGFixed * result, PGFixed x, PGFixed y) { return NativeCall<PGFixed *, PGFixed *, PGFixed, PGFixed>(this, "SampleFloatMap.GetValue", result, x, y); }
};

