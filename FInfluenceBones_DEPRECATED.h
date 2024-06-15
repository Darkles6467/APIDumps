#pragma once

#include "BaseDeclarations.h"
struct FInfluenceBones_DEPRECATED
{
	char __padding[0x4L];
	unsigned int& InfluenceBonesDWORDField() { return *GetNativePointerField<unsigned int*>(this, "FInfluenceBones_DEPRECATED.InfluenceBonesDWORD"); }
};

