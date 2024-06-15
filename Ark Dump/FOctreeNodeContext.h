#pragma once

#include "BaseDeclarations.h"
struct FOctreeNodeContext
{
	char __padding[0x30L];
	FBoxCenterAndExtent& BoundsField() { return *GetNativePointerField<FBoxCenterAndExtent*>(this, "FOctreeNodeContext.Bounds"); }
	float& ChildExtentField() { return *GetNativePointerField<float*>(this, "FOctreeNodeContext.ChildExtent"); }
	float& ChildCenterOffsetField() { return *GetNativePointerField<float*>(this, "FOctreeNodeContext.ChildCenterOffset"); }
	unsigned int& InCullBitsField() { return *GetNativePointerField<unsigned int*>(this, "FOctreeNodeContext.InCullBits"); }
	unsigned int& OutCullBitsField() { return *GetNativePointerField<unsigned int*>(this, "FOctreeNodeContext.OutCullBits"); }

	// Functions

};

