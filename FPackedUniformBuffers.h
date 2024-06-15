#pragma once

#include "BaseDeclarations.h"
struct FPackedUniformBuffers
{
	char __padding[0x30L];
	TArray<TArray<unsigned char>>& PackedUniformBuffersField() { return *GetNativePointerField<TArray<TArray<unsigned char>>*>(this, "FPackedUniformBuffers.PackedUniformBuffers"); }
	TArray<CrossCompiler::FUniformBufferCopyInfo>& EmulatedUBsCopyInfoField() { return *GetNativePointerField<TArray<CrossCompiler::FUniformBufferCopyInfo>*>(this, "FPackedUniformBuffers.EmulatedUBsCopyInfo"); }
	TArray<unsigned int>& EmulatedUBsCopyRangesField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "FPackedUniformBuffers.EmulatedUBsCopyRanges"); }

	// Functions

	void Init(const FVulkanShaderHeader * InCodeHeader, unsigned __int64 * OutPackedUniformBufferStagingMask) { NativeCall<void, const FVulkanShaderHeader *, unsigned __int64 *>(this, "FPackedUniformBuffers.Init", InCodeHeader, OutPackedUniformBufferStagingMask); }
	void SetEmulatedUniformBufferIntoPacked(unsigned int BindPoint, const TArray<unsigned char> * ConstantData, unsigned __int64 * NEWPackedUniformBufferStagingDirty) { NativeCall<void, unsigned int, const TArray<unsigned char> *, unsigned __int64 *>(this, "FPackedUniformBuffers.SetEmulatedUniformBufferIntoPacked", BindPoint, ConstantData, NEWPackedUniformBufferStagingDirty); }
	void SetPackedGlobalParameter(unsigned int BufferIndex, unsigned int ByteOffset, unsigned int NumBytes, const void * NewValue, unsigned __int64 * InOutPackedUniformBufferStagingDirty) { NativeCall<void, unsigned int, unsigned int, unsigned int, const void *, unsigned __int64 *>(this, "FPackedUniformBuffers.SetPackedGlobalParameter", BufferIndex, ByteOffset, NumBytes, NewValue, InOutPackedUniformBufferStagingDirty); }
};

