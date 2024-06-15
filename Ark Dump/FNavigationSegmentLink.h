#pragma once

#include "BaseDeclarations.h"
#include "FNavigationLinkBase.h"

struct FNavigationSegmentLink : FNavigationLinkBase
{
	char __padding[0x30L];
	FVector& LeftStartField() { return *GetNativePointerField<FVector*>(this, "FNavigationSegmentLink.LeftStart"); }
	FVector& LeftEndField() { return *GetNativePointerField<FVector*>(this, "FNavigationSegmentLink.LeftEnd"); }
	FVector& RightStartField() { return *GetNativePointerField<FVector*>(this, "FNavigationSegmentLink.RightStart"); }
	FVector& RightEndField() { return *GetNativePointerField<FVector*>(this, "FNavigationSegmentLink.RightEnd"); }

	// Functions

};

