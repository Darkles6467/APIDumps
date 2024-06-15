#pragma once

#include "BaseDeclarations.h"
#include "FRHIRenderQuery.h"
#include "FRHIResource.h"

struct FVulkanRenderQuery : FRHIRenderQuery
{
	char __padding[0x18L];
	int& QueryIndexField() { return *GetNativePointerField<int*>(this, "FVulkanRenderQuery.QueryIndex"); }
	ERenderQueryType& QueryTypeField() { return *GetNativePointerField<ERenderQueryType*>(this, "FVulkanRenderQuery.QueryType"); }
	FVulkanCmdBuffer * CurrentCmdBufferField() { return GetNativePointerField<FVulkanCmdBuffer *>(this, "FVulkanRenderQuery.CurrentCmdBuffer"); }

	// Functions

	void End(FVulkanCmdBuffer * CmdBuffer) { NativeCall<void, FVulkanCmdBuffer *>(this, "FVulkanRenderQuery.End", CmdBuffer); }
};

