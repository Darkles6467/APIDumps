#pragma once

#include "BaseDeclarations.h"
struct FDestructibleSpecialHierarchyDepths
{
	char __padding[0x10L];
	int& SupportDepthField() { return *GetNativePointerField<int*>(this, "FDestructibleSpecialHierarchyDepths.SupportDepth"); }
	int& MinimumFractureDepthField() { return *GetNativePointerField<int*>(this, "FDestructibleSpecialHierarchyDepths.MinimumFractureDepth"); }
	int& DebrisDepthField() { return *GetNativePointerField<int*>(this, "FDestructibleSpecialHierarchyDepths.DebrisDepth"); }
	int& EssentialDepthField() { return *GetNativePointerField<int*>(this, "FDestructibleSpecialHierarchyDepths.EssentialDepth"); }

	// Functions

};

