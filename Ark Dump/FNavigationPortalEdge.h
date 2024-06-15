#pragma once

#include "BaseDeclarations.h"
struct FNavigationPortalEdge
{
	char __padding[0x20L];
	FVector& LeftField() { return *GetNativePointerField<FVector*>(this, "FNavigationPortalEdge.Left"); }
	FVector& RightField() { return *GetNativePointerField<FVector*>(this, "FNavigationPortalEdge.Right"); }
	unsigned __int64& ToRefField() { return *GetNativePointerField<unsigned __int64*>(this, "FNavigationPortalEdge.ToRef"); }
};

