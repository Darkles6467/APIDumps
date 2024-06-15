#pragma once

#include "BaseDeclarations.h"
struct FRHIDrawIndexedIndirectParameters
{
	char __padding[0x14L];
	unsigned int& IndexCountPerInstanceField() { return *GetNativePointerField<unsigned int*>(this, "FRHIDrawIndexedIndirectParameters.IndexCountPerInstance"); }
	unsigned int& InstanceCountField() { return *GetNativePointerField<unsigned int*>(this, "FRHIDrawIndexedIndirectParameters.InstanceCount"); }
	unsigned int& StartIndexLocationField() { return *GetNativePointerField<unsigned int*>(this, "FRHIDrawIndexedIndirectParameters.StartIndexLocation"); }
	int& BaseVertexLocationField() { return *GetNativePointerField<int*>(this, "FRHIDrawIndexedIndirectParameters.BaseVertexLocation"); }
	unsigned int& StartInstanceLocationField() { return *GetNativePointerField<unsigned int*>(this, "FRHIDrawIndexedIndirectParameters.StartInstanceLocation"); }
};

