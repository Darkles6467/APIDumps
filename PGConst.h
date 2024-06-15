#pragma once

#include "BaseDeclarations.h"
#include "PGModule.h"
#include "PGFixed.h"

struct PGConst : PGModule
{
	char __padding[0x8L];
	PGFixed& ConstValueField() { return *GetNativePointerField<PGFixed*>(this, "PGConst.ConstValue"); }

	// Functions

	PGFixed * GetValue(PGFixed * result, PGFixed x, PGFixed y) { return NativeCall<PGFixed *, PGFixed *, PGFixed, PGFixed>(this, "PGConst.GetValue", result, x, y); }
};

