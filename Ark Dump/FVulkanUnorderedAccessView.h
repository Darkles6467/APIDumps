#pragma once

#include "BaseDeclarations.h"
#include "FRHIUnorderedAccessView.h"
#include "FRHIResource.h"

struct FVulkanUnorderedAccessView : FRHIUnorderedAccessView
{
	char __padding[0x50L];
	TRefCountPtr<FVulkanStructuredBuffer>& SourceStructuredBufferField() { return *GetNativePointerField<TRefCountPtr<FVulkanStructuredBuffer>*>(this, "FVulkanUnorderedAccessView.SourceStructuredBuffer"); }
	FVulkanTextureView& TextureViewField() { return *GetNativePointerField<FVulkanTextureView*>(this, "FVulkanUnorderedAccessView.TextureView"); }
	unsigned int& MipLevelField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanUnorderedAccessView.MipLevel"); }
	TRefCountPtr<FVulkanVertexBuffer>& SourceVertexBufferField() { return *GetNativePointerField<TRefCountPtr<FVulkanVertexBuffer>*>(this, "FVulkanUnorderedAccessView.SourceVertexBuffer"); }
	TRefCountPtr<FVulkanIndexBuffer>& SourceIndexBufferField() { return *GetNativePointerField<TRefCountPtr<FVulkanIndexBuffer>*>(this, "FVulkanUnorderedAccessView.SourceIndexBuffer"); }
	TRefCountPtr<FVulkanBufferView>& BufferViewField() { return *GetNativePointerField<TRefCountPtr<FVulkanBufferView>*>(this, "FVulkanUnorderedAccessView.BufferView"); }
	EPixelFormat& BufferViewFormatField() { return *GetNativePointerField<EPixelFormat*>(this, "FVulkanUnorderedAccessView.BufferViewFormat"); }
	unsigned int& VolatileLockCounterField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanUnorderedAccessView.VolatileLockCounter"); }

	// Functions

	void UpdateView() { NativeCall<void>(this, "FVulkanUnorderedAccessView.UpdateView"); }
};

