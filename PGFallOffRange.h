#pragma once

#include "BaseDeclarations.h"
#include "PGModule.h"
#include "PGFixed.h"

struct PGFallOffRange : PGModule
{
	char __padding[0x10L];
	PGFixed& ThresholdField() { return *GetNativePointerField<PGFixed*>(this, "PGFallOffRange.Threshold"); }
	PGFixed& RangeField() { return *GetNativePointerField<PGFixed*>(this, "PGFallOffRange.Range"); }
	PGFixed& PowerField() { return *GetNativePointerField<PGFixed*>(this, "PGFallOffRange.Power"); }

	// Functions

	PGFixed * GetValue(PGFixed * result, PGFixed x, PGFixed y) { return NativeCall<PGFixed *, PGFixed *, PGFixed, PGFixed>(this, "PGFallOffRange.GetValue", result, x, y); }
	void SetPower(PGFixed InPower) { NativeCall<void, PGFixed>(this, "PGFallOffRange.SetPower", InPower); }
	void SetRange(PGFixed InRange) { NativeCall<void, PGFixed>(this, "PGFallOffRange.SetRange", InRange); }
	void SetThreshold(PGFixed InThreshold) { NativeCall<void, PGFixed>(this, "PGFallOffRange.SetThreshold", InThreshold); }
};

