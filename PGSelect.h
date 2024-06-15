#pragma once

#include "BaseDeclarations.h"
#include "PGModule.h"
#include "PGFixed.h"

struct PGSelect : PGModule
{
	char __padding[0x10L];
	PGFixed& LowerBoundField() { return *GetNativePointerField<PGFixed*>(this, "PGSelect.LowerBound"); }
	PGFixed& UpperBoundField() { return *GetNativePointerField<PGFixed*>(this, "PGSelect.UpperBound"); }
	PGFixed& EdgeFallOffField() { return *GetNativePointerField<PGFixed*>(this, "PGSelect.EdgeFallOff"); }

	// Functions

	PGFixed * GetValue(PGFixed * result, PGFixed x, PGFixed y) { return NativeCall<PGFixed *, PGFixed *, PGFixed, PGFixed>(this, "PGSelect.GetValue", result, x, y); }
};

