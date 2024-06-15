#pragma once

#include "BaseDeclarations.h"
struct FNavigationProjectionWork
{
	char __padding[0x30L];
	const FVector& PointField() { return *GetNativePointerField<const FVector*>(this, "FNavigationProjectionWork.Point"); }
	bool& bResultField() { return *GetNativePointerField<bool*>(this, "FNavigationProjectionWork.bResult"); }
};

