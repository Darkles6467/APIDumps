#pragma once

#include "BaseDeclarations.h"
struct FDependencyRef
{
	char __padding[0x10L];
	int& ExportIndexField() { return *GetNativePointerField<int*>(this, "FDependencyRef.ExportIndex"); }
};

