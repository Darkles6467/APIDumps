#pragma once

#include "BaseDeclarations.h"
struct FRHIDrawIndirectParameters
{
	char __padding[0x10L];
	unsigned int& VertexCountPerInstanceField() { return *GetNativePointerField<unsigned int*>(this, "FRHIDrawIndirectParameters.VertexCountPerInstance"); }
	unsigned int& InstanceCountField() { return *GetNativePointerField<unsigned int*>(this, "FRHIDrawIndirectParameters.InstanceCount"); }
	unsigned int& StartVertexLocationField() { return *GetNativePointerField<unsigned int*>(this, "FRHIDrawIndirectParameters.StartVertexLocation"); }
	unsigned int& StartInstanceLocationField() { return *GetNativePointerField<unsigned int*>(this, "FRHIDrawIndirectParameters.StartInstanceLocation"); }
};

