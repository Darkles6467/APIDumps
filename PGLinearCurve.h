#pragma once

#include "BaseDeclarations.h"
#include "PGModule.h"
#include "PGFixed.h"

struct PGLinearCurve : PGModule
{
	char __padding[0x20L];
	TArray<PGFixed>& InputField() { return *GetNativePointerField<TArray<PGFixed>*>(this, "PGLinearCurve.Input"); }
	TArray<PGFixed>& OutputField() { return *GetNativePointerField<TArray<PGFixed>*>(this, "PGLinearCurve.Output"); }

	// Functions

	PGFixed * GetValue(PGFixed * result, PGFixed x, PGFixed y) { return NativeCall<PGFixed *, PGFixed *, PGFixed, PGFixed>(this, "PGLinearCurve.GetValue", result, x, y); }
};

