#pragma once

#include "BaseDeclarations.h"
#include "FMaxSizedRWBuffers.h"
#include "FRenderResource.h"

struct FVPLResources : FMaxSizedRWBuffers
{
	char __padding[0x80L];
	FRWBuffer& VPLParameterBufferField() { return *GetNativePointerField<FRWBuffer*>(this, "FVPLResources.VPLParameterBuffer"); }
	FRWBuffer& VPLDispatchIndirectBufferField() { return *GetNativePointerField<FRWBuffer*>(this, "FVPLResources.VPLDispatchIndirectBuffer"); }
	FRWBuffer& VPLClusterDataField() { return *GetNativePointerField<FRWBuffer*>(this, "FVPLResources.VPLClusterData"); }
	FRWBuffer& VPLDataField() { return *GetNativePointerField<FRWBuffer*>(this, "FVPLResources.VPLData"); }

	// Functions

	void InitDynamicRHI() { NativeCall<void>(this, "FVPLResources.InitDynamicRHI"); }
	void ReleaseDynamicRHI() { NativeCall<void>(this, "FVPLResources.ReleaseDynamicRHI"); }
};

