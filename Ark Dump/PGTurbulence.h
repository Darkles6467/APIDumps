#pragma once

#include "BaseDeclarations.h"
#include "PGModule.h"
#include "PGFixed.h"

struct PGTurbulence : PGModule
{
	char __padding[0x880L];
	PGFixed& PowerField() { return *GetNativePointerField<PGFixed*>(this, "PGTurbulence.Power"); }
	const PGFixed& FPTurC1Field() { return *GetNativePointerField<const PGFixed*>(this, "PGTurbulence.FPTurC1"); }
	const PGFixed& FPTurC2Field() { return *GetNativePointerField<const PGFixed*>(this, "PGTurbulence.FPTurC2"); }
	const PGFixed& FPTurC3Field() { return *GetNativePointerField<const PGFixed*>(this, "PGTurbulence.FPTurC3"); }
	const PGFixed& FPTurC4Field() { return *GetNativePointerField<const PGFixed*>(this, "PGTurbulence.FPTurC4"); }
	const PGFixed& FPTurC5Field() { return *GetNativePointerField<const PGFixed*>(this, "PGTurbulence.FPTurC5"); }
	const PGFixed& FPTurC6Field() { return *GetNativePointerField<const PGFixed*>(this, "PGTurbulence.FPTurC6"); }

	// Functions

	PGFixed * GetValue(PGFixed * result, PGFixed x, PGFixed y) { return NativeCall<PGFixed *, PGFixed *, PGFixed, PGFixed>(this, "PGTurbulence.GetValue", result, x, y); }
};

