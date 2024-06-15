#pragma once

#include "BaseDeclarations.h"
struct FetchVisibilityForPrimitivesTask
{
	char __padding[0x8L];
	FVisForPrimParams * ParamsField() { return GetNativePointerField<FVisForPrimParams *>(this, "FetchVisibilityForPrimitivesTask.Params"); }
};

