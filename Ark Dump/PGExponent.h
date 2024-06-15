#pragma once

#include "BaseDeclarations.h"
#include "PGModule.h"
#include "PGFixed.h"

struct PGExponent : PGModule
{
	char __padding[0x8L];
	PGFixed& ExponentField() { return *GetNativePointerField<PGFixed*>(this, "PGExponent.Exponent"); }

	// Functions

	PGFixed * GetValue(PGFixed * result, PGFixed x, PGFixed y) { return NativeCall<PGFixed *, PGFixed *, PGFixed, PGFixed>(this, "PGExponent.GetValue", result, x, y); }
};

