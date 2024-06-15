#pragma once

#include "BaseDeclarations.h"
struct VkCheckpointDataNV
{
	char __padding[0x20L];
	VkStructureType& sTypeField() { return *GetNativePointerField<VkStructureType*>(this, "VkCheckpointDataNV.sType"); }
	void * pNextField() { return GetNativePointerField<void *>(this, "VkCheckpointDataNV.pNext"); }
	VkPipelineStageFlagBits& stageField() { return *GetNativePointerField<VkPipelineStageFlagBits*>(this, "VkCheckpointDataNV.stage"); }
	void * pCheckpointMarkerField() { return GetNativePointerField<void *>(this, "VkCheckpointDataNV.pCheckpointMarker"); }
};

