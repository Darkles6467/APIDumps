#pragma once

#include "BaseDeclarations.h"
#include "FOctreeElementId.h"

struct FNavigationOctreeSemantics
{

	// Functions

	static void SetElementId(const FNavigationOctreeElement * Element, FOctreeElementId Id, unsigned int OctreeUserData) { NativeCall<void, const FNavigationOctreeElement *, FOctreeElementId, unsigned int>(nullptr, "FNavigationOctreeSemantics.SetElementId", Element, Id, OctreeUserData); }
};

