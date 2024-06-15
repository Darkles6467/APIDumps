#pragma once

#include "BaseDeclarations.h"
#include "PGModule.h"
#include "PGFixed.h"

struct PGMin : PGModule
{

	// Functions

	PGFixed * GetValue(PGFixed * result, PGFixed x, PGFixed y) { return NativeCall<PGFixed *, PGFixed *, PGFixed, PGFixed>(this, "PGMin.GetValue", result, x, y); }
};

