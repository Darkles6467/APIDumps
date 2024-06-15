#pragma once

#include "BaseDeclarations.h"
struct VkPhysicalDeviceSparseProperties
{
	char __padding[0x14L];
	unsigned int& residencyStandard2DBlockShapeField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceSparseProperties.residencyStandard2DBlockShape"); }
	unsigned int& residencyStandard2DMultisampleBlockShapeField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceSparseProperties.residencyStandard2DMultisampleBlockShape"); }
	unsigned int& residencyStandard3DBlockShapeField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceSparseProperties.residencyStandard3DBlockShape"); }
	unsigned int& residencyAlignedMipSizeField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceSparseProperties.residencyAlignedMipSize"); }
	unsigned int& residencyNonResidentStrictField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceSparseProperties.residencyNonResidentStrict"); }
};

