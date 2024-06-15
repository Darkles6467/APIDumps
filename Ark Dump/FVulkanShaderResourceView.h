#pragma once

#include "BaseDeclarations.h"
#include "FRHIShaderResourceView.h"
#include "FRHIResource.h"

struct FVulkanShaderResourceView : FRHIShaderResourceView
{
	char __padding[0x68L];
	EPixelFormat& BufferViewFormatField() { return *GetNativePointerField<EPixelFormat*>(this, "FVulkanShaderResourceView.BufferViewFormat"); }
	FVulkanTextureView& TextureViewField() { return *GetNativePointerField<FVulkanTextureView*>(this, "FVulkanShaderResourceView.TextureView"); }
	FVulkanStructuredBuffer * SourceStructuredBufferField() { return GetNativePointerField<FVulkanStructuredBuffer *>(this, "FVulkanShaderResourceView.SourceStructuredBuffer"); }
	unsigned int& MipLevelField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanShaderResourceView.MipLevel"); }
	unsigned int& NumMipsField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanShaderResourceView.NumMips"); }
	TArray<TRefCountPtr<FVulkanBufferView>>& BufferViewsField() { return *GetNativePointerField<TArray<TRefCountPtr<FVulkanBufferView>>*>(this, "FVulkanShaderResourceView.BufferViews"); }
	unsigned int& BufferIndexField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanShaderResourceView.BufferIndex"); }
	unsigned int& SizeField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanShaderResourceView.Size"); }
	unsigned int& VolatileLockCounterField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanShaderResourceView.VolatileLockCounter"); }

	// Functions

	void UpdateView() { NativeCall<void>(this, "FVulkanShaderResourceView.UpdateView"); }
};

