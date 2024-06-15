#pragma once

#include "BaseDeclarations.h"
struct VkPhysicalDeviceMemoryProperties
{
	char __padding[0x208L];
	unsigned int& memoryTypeCountField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceMemoryProperties.memoryTypeCount"); }
	FieldArray<VkMemoryType, 32> memoryTypesField() { return {this, "VkPhysicalDeviceMemoryProperties.memoryTypes"}; }
	unsigned int& memoryHeapCountField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceMemoryProperties.memoryHeapCount"); }
	FieldArray<VkMemoryHeap, 16> memoryHeapsField() { return {this, "VkPhysicalDeviceMemoryProperties.memoryHeaps"}; }
};

