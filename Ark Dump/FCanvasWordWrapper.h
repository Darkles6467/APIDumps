#pragma once

#include "BaseDeclarations.h"
#include "FWordWrapper.h"

struct FCanvasWordWrapper : FWordWrapper
{
	char __padding[0x10L];
	FTextSizingParameters * ParametersField() { return GetNativePointerField<FTextSizingParameters *>(this, "FCanvasWordWrapper.Parameters"); }
	TArray<FWrappedStringElement> * ResultsField() { return GetNativePointerField<TArray<FWrappedStringElement> *>(this, "FCanvasWordWrapper.Results"); }
};

