#pragma once

#include "BaseDeclarations.h"
struct FVulkanShaderHeader
{
	enum EInit
	{
		EZero = 0x0,
	};

	enum EAttachmentType
	{
		Color = 0x0,
		Depth = 0x1,
		Count = 0x2,
	};

	enum EType
	{
		PackedGlobal = 0x0,
		Global = 0x1,
		UniformBuffer = 0x2,
		Count = 0x3,
	};

	char __padding[0xd0L];
	TArray<FVulkanShaderHeader::FUniformBufferInfo>& UniformBuffersField() { return *GetNativePointerField<TArray<FVulkanShaderHeader::FUniformBufferInfo>*>(this, "FVulkanShaderHeader.UniformBuffers"); }
	TArray<FVulkanShaderHeader::FGlobalInfo>& GlobalsField() { return *GetNativePointerField<TArray<FVulkanShaderHeader::FGlobalInfo>*>(this, "FVulkanShaderHeader.Globals"); }
	TArray<TEnumAsByte<enum VkDescriptorType>>& GlobalDescriptorTypesField() { return *GetNativePointerField<TArray<TEnumAsByte<enum VkDescriptorType>>*>(this, "FVulkanShaderHeader.GlobalDescriptorTypes"); }
	TArray<FVulkanShaderHeader::FPackedGlobalInfo>& PackedGlobalsField() { return *GetNativePointerField<TArray<FVulkanShaderHeader::FPackedGlobalInfo>*>(this, "FVulkanShaderHeader.PackedGlobals"); }
	TArray<FVulkanShaderHeader::FPackedUBInfo>& PackedUBsField() { return *GetNativePointerField<TArray<FVulkanShaderHeader::FPackedUBInfo>*>(this, "FVulkanShaderHeader.PackedUBs"); }
	TArray<FVulkanShaderHeader::FInputAttachment>& InputAttachmentsField() { return *GetNativePointerField<TArray<FVulkanShaderHeader::FInputAttachment>*>(this, "FVulkanShaderHeader.InputAttachments"); }
	TArray<unsigned int>& EmulatedUBCopyRangesField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "FVulkanShaderHeader.EmulatedUBCopyRanges"); }
	TArray<CrossCompiler::FUniformBufferCopyInfo>& EmulatedUBsCopyInfoField() { return *GetNativePointerField<TArray<CrossCompiler::FUniformBufferCopyInfo>*>(this, "FVulkanShaderHeader.EmulatedUBsCopyInfo"); }
	unsigned int& InOutMaskField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanShaderHeader.InOutMask"); }
	bool& bHasRealUBsField() { return *GetNativePointerField<bool*>(this, "FVulkanShaderHeader.bHasRealUBs"); }
	char& Pad0Field() { return *GetNativePointerField<char*>(this, "FVulkanShaderHeader.Pad0"); }
	unsigned __int16& Pad1Field() { return *GetNativePointerField<unsigned __int16*>(this, "FVulkanShaderHeader.Pad1"); }
	FSHAHash& SourceHashField() { return *GetNativePointerField<FSHAHash*>(this, "FVulkanShaderHeader.SourceHash"); }
	TArray<FVulkanShaderHeader::FSpirvInfo>& UniformBufferSpirvInfosField() { return *GetNativePointerField<TArray<FVulkanShaderHeader::FSpirvInfo>*>(this, "FVulkanShaderHeader.UniformBufferSpirvInfos"); }
	TArray<FVulkanShaderHeader::FSpirvInfo>& GlobalSpirvInfosField() { return *GetNativePointerField<TArray<FVulkanShaderHeader::FSpirvInfo>*>(this, "FVulkanShaderHeader.GlobalSpirvInfos"); }
	FString& DebugNameField() { return *GetNativePointerField<FString*>(this, "FVulkanShaderHeader.DebugName"); }
};

