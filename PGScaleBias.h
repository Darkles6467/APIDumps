#pragma once

#include "BaseDeclarations.h"
#include "PGModule.h"
#include "PGFixed.h"

struct PGScaleBias : PGModule
{
	char __padding[0x8L];
	PGFixed& ScaleField() { return *GetNativePointerField<PGFixed*>(this, "PGScaleBias.Scale"); }
	PGFixed& BiasField() { return *GetNativePointerField<PGFixed*>(this, "PGScaleBias.Bias"); }

	// Functions

	PGFixed * GetValue(PGFixed * result, PGFixed x, PGFixed y) { return NativeCall<PGFixed *, PGFixed *, PGFixed, PGFixed>(this, "PGScaleBias.GetValue", result, x, y); }
};

