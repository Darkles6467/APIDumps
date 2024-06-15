#pragma once

#include "BaseDeclarations.h"
struct FNavLocation
{
	char __padding[0x18L];
	FVector& LocationField() { return *GetNativePointerField<FVector*>(this, "FNavLocation.Location"); }
	unsigned __int64& NodeRefField() { return *GetNativePointerField<unsigned __int64*>(this, "FNavLocation.NodeRef"); }
};

struct FNavPathPoint : FNavLocation
{
	char __padding[0x8L];
	unsigned int& FlagsField() { return *GetNativePointerField<unsigned int*>(this, "FNavPathPoint.Flags"); }
	unsigned int& CustomLinkIdField() { return *GetNativePointerField<unsigned int*>(this, "FNavPathPoint.CustomLinkId"); }
};

