#pragma once

#include "BaseDeclarations.h"
#include "FFeedbackContext.h"
#include "FOutputDevice.h"

struct FFeedbackContextWindows : FFeedbackContext
{
	char __padding[0x10L];
	FContextSupplier * ContextField() { return GetNativePointerField<FContextSupplier *>(this, "FFeedbackContextWindows.Context"); }
	int& SlowTaskCountField() { return *GetNativePointerField<int*>(this, "FFeedbackContextWindows.SlowTaskCount"); }
};

