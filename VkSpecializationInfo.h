#pragma once

#include "BaseDeclarations.h"
struct VkSpecializationInfo
{
	char __padding[0x20L];
	unsigned int& mapEntryCountField() { return *GetNativePointerField<unsigned int*>(this, "VkSpecializationInfo.mapEntryCount"); }
	const VkSpecializationMapEntry * pMapEntriesField() { return GetNativePointerField<const VkSpecializationMapEntry *>(this, "VkSpecializationInfo.pMapEntries"); }
	unsigned __int64& dataSizeField() { return *GetNativePointerField<unsigned __int64*>(this, "VkSpecializationInfo.dataSize"); }
	const void * pDataField() { return GetNativePointerField<const void *>(this, "VkSpecializationInfo.pData"); }
};

