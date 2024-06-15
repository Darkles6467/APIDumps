#pragma once

#include "BaseDeclarations.h"
struct FSamplerYcbcrConversionInitializer
{
	char __padding[0x30L];
	VkFormat& FormatField() { return *GetNativePointerField<VkFormat*>(this, "FSamplerYcbcrConversionInitializer.Format"); }
	unsigned __int64& ExternalFormatField() { return *GetNativePointerField<unsigned __int64*>(this, "FSamplerYcbcrConversionInitializer.ExternalFormat"); }
	VkComponentMapping& ComponentsField() { return *GetNativePointerField<VkComponentMapping*>(this, "FSamplerYcbcrConversionInitializer.Components"); }
	VkSamplerYcbcrModelConversion& ModelField() { return *GetNativePointerField<VkSamplerYcbcrModelConversion*>(this, "FSamplerYcbcrConversionInitializer.Model"); }
	VkSamplerYcbcrRange& RangeField() { return *GetNativePointerField<VkSamplerYcbcrRange*>(this, "FSamplerYcbcrConversionInitializer.Range"); }
	VkChromaLocation& XOffsetField() { return *GetNativePointerField<VkChromaLocation*>(this, "FSamplerYcbcrConversionInitializer.XOffset"); }
	VkChromaLocation& YOffsetField() { return *GetNativePointerField<VkChromaLocation*>(this, "FSamplerYcbcrConversionInitializer.YOffset"); }
};

