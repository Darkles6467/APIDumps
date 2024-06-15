#pragma once

#include "BaseDeclarations.h"
#include "PGModule.h"
#include "PGFixed.h"

struct PGClamp : PGModule
{
	char __padding[0x8L];
	PGFixed& LowerBoundField() { return *GetNativePointerField<PGFixed*>(this, "PGClamp.LowerBound"); }
	PGFixed& UpperBoundField() { return *GetNativePointerField<PGFixed*>(this, "PGClamp.UpperBound"); }

	// Functions

	PGFixed * GetValue(PGFixed * result, PGFixed x, PGFixed y) { return NativeCall<PGFixed *, PGFixed *, PGFixed, PGFixed>(this, "PGClamp.GetValue", result, x, y); }
};

