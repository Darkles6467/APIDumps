#pragma once

#include "BaseDeclarations.h"
struct FFilterData
{
	char __padding[0x8L];
	float& InputField() { return *GetNativePointerField<float*>(this, "FFilterData.Input"); }
	float& TimeField() { return *GetNativePointerField<float*>(this, "FFilterData.Time"); }
};

