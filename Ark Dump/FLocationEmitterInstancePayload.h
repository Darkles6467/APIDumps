#pragma once

#include "BaseDeclarations.h"
struct FLocationEmitterInstancePayload
{
	char __padding[0x4L];
	int& LastSelectedIndexField() { return *GetNativePointerField<int*>(this, "FLocationEmitterInstancePayload.LastSelectedIndex"); }
};

