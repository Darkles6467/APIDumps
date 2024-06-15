#pragma once

#include "BaseDeclarations.h"
struct FScopedExternalProfilerBase
{
	char __padding[0x1L];
	bool& bWasPausedField() { return *GetNativePointerField<bool*>(this, "FScopedExternalProfilerBase.bWasPaused"); }
};

