#pragma once

#include "BaseDeclarations.h"
struct VkQueryPoolCreateInfo
{
	char __padding[0x20L];
	VkStructureType& sTypeField() { return *GetNativePointerField<VkStructureType*>(this, "VkQueryPoolCreateInfo.sType"); }
	const void * pNextField() { return GetNativePointerField<const void *>(this, "VkQueryPoolCreateInfo.pNext"); }
	unsigned int& flagsField() { return *GetNativePointerField<unsigned int*>(this, "VkQueryPoolCreateInfo.flags"); }
	VkQueryType& queryTypeField() { return *GetNativePointerField<VkQueryType*>(this, "VkQueryPoolCreateInfo.queryType"); }
	unsigned int& queryCountField() { return *GetNativePointerField<unsigned int*>(this, "VkQueryPoolCreateInfo.queryCount"); }
	unsigned int& pipelineStatisticsField() { return *GetNativePointerField<unsigned int*>(this, "VkQueryPoolCreateInfo.pipelineStatistics"); }
};

