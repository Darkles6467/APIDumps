#pragma once

#include "BaseDeclarations.h"
struct FMaterialExpressionKey
{
	char __padding[0x10L];
	int& OutputIndexField() { return *GetNativePointerField<int*>(this, "FMaterialExpressionKey.OutputIndex"); }
	int& MultiplexIndexField() { return *GetNativePointerField<int*>(this, "FMaterialExpressionKey.MultiplexIndex"); }
};

