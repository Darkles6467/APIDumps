#pragma once

#include "BaseDeclarations.h"
#include "FNavigationLinkBase.h"

struct FNavigationLink : FNavigationLinkBase
{
	char __padding[0x18L];
	FVector& LeftField() { return *GetNativePointerField<FVector*>(this, "FNavigationLink.Left"); }
	FVector& RightField() { return *GetNativePointerField<FVector*>(this, "FNavigationLink.Right"); }

	// Functions

};

