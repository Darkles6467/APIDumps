#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"

struct UVisual : UObject
{

	// Functions

	void BeginDestroy() { NativeCall<void>(this, "UVisual.BeginDestroy"); }
};

