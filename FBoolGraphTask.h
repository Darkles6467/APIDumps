#pragma once

#include "BaseDeclarations.h"
#include "FCustomStatIDGraphTaskBase.h"

struct FBoolGraphTask : FCustomStatIDGraphTaskBase
{
	char __padding[0x8L];
	bool * OutField() { return GetNativePointerField<bool *>(this, "FBoolGraphTask.Out"); }
};

