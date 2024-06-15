#pragma once

#include "BaseDeclarations.h"
#include "PGModule.h"
#include "PGFixed.h"

struct PGLerp : PGModule
{

	// Functions

	PGFixed * GetValue(PGFixed * result, PGFixed x, PGFixed y) { return NativeCall<PGFixed *, PGFixed *, PGFixed, PGFixed>(this, "PGLerp.GetValue", result, x, y); }
};

