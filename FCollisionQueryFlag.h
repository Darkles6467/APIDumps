#pragma once

#include "BaseDeclarations.h"
struct FCollisionQueryFlag
{
	char __padding[0x8L];
	int& AllObjectQueryFlagField() { return *GetNativePointerField<int*>(this, "FCollisionQueryFlag.AllObjectQueryFlag"); }
	int& AllStaticObjectQueryFlagField() { return *GetNativePointerField<int*>(this, "FCollisionQueryFlag.AllStaticObjectQueryFlag"); }
};

