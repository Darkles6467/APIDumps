#pragma once

#include "BaseDeclarations.h"
struct FOctreeElementSimple
{
	char __padding[0x38L];
	FBoxSphereBounds& OctreeBoundsField() { return *GetNativePointerField<FBoxSphereBounds*>(this, "FOctreeElementSimple.OctreeBounds"); }
	FOctreeElementId& OctreeIdField() { return *GetNativePointerField<FOctreeElementId*>(this, "FOctreeElementSimple.OctreeId"); }
	unsigned int& OctreeMaskField() { return *GetNativePointerField<unsigned int*>(this, "FOctreeElementSimple.OctreeMask"); }

	// Functions

};

