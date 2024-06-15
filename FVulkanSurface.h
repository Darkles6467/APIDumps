#pragma once

#include "BaseDeclarations.h"
struct FVulkanSurface
{
	char __padding[0x78L];
	FVulkanDevice * DeviceField() { return GetNativePointerField<FVulkanDevice *>(this, "FVulkanSurface.Device"); }
	struct VkImage_T * ImageField() { return GetNativePointerField<struct VkImage_T *>(this, "FVulkanSurface.Image"); }
	VkFormat& StorageFormatField() { return *GetNativePointerField<VkFormat*>(this, "FVulkanSurface.StorageFormat"); }
	VkFormat& ViewFormatField() { return *GetNativePointerField<VkFormat*>(this, "FVulkanSurface.ViewFormat"); }
	unsigned int& WidthField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanSurface.Width"); }
	unsigned int& HeightField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanSurface.Height"); }
	unsigned int& DepthField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanSurface.Depth"); }
	EPixelFormat& PixelFormatField() { return *GetNativePointerField<EPixelFormat*>(this, "FVulkanSurface.PixelFormat"); }
	unsigned int& UEFlagsField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanSurface.UEFlags"); }
	unsigned int& MemPropsField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanSurface.MemProps"); }
	VkMemoryRequirements& MemoryRequirementsField() { return *GetNativePointerField<VkMemoryRequirements*>(this, "FVulkanSurface.MemoryRequirements"); }
	unsigned int& NumArrayLevelsField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanSurface.NumArrayLevels"); }
	VkImageTiling& TilingField() { return *GetNativePointerField<VkImageTiling*>(this, "FVulkanSurface.Tiling"); }
	VkImageViewType& ViewTypeField() { return *GetNativePointerField<VkImageViewType*>(this, "FVulkanSurface.ViewType"); }
	bool& bIsImageOwnerField() { return *GetNativePointerField<bool*>(this, "FVulkanSurface.bIsImageOwner"); }
	TRefCountPtr<VulkanRHI::FOldResourceAllocation>& ResourceAllocationField() { return *GetNativePointerField<TRefCountPtr<VulkanRHI::FOldResourceAllocation>*>(this, "FVulkanSurface.ResourceAllocation"); }
	unsigned int& NumMipsField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanSurface.NumMips"); }
	unsigned int& NumSamplesField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanSurface.NumSamples"); }
	unsigned int& FullAspectMaskField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanSurface.FullAspectMask"); }
	unsigned int& PartialAspectMaskField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanSurface.PartialAspectMask"); }

	// Functions

	static struct VkImage_T * CreateImage(FVulkanDevice * InDevice, VkImageViewType ResourceType, EPixelFormat InFormat, unsigned int SizeX, unsigned int SizeY, unsigned int SizeZ, bool bArray, unsigned int ArraySize, unsigned int NumMips, unsigned int NumSamples, unsigned int UEFlags, VkMemoryRequirements * OutMemoryRequirements, VkFormat * OutStorageFormat, VkFormat * OutViewFormat, VkImageCreateInfo * OutInfo, bool bForceLinearTexture) { return NativeCall<struct VkImage_T *, FVulkanDevice *, VkImageViewType, EPixelFormat, unsigned int, unsigned int, unsigned int, bool, unsigned int, unsigned int, unsigned int, unsigned int, VkMemoryRequirements *, VkFormat *, VkFormat *, VkImageCreateInfo *, bool>(nullptr, "FVulkanSurface.CreateImage", InDevice, ResourceType, InFormat, SizeX, SizeY, SizeZ, bArray, ArraySize, NumMips, NumSamples, UEFlags, OutMemoryRequirements, OutStorageFormat, OutViewFormat, OutInfo, bForceLinearTexture); }
	void Destroy() { NativeCall<void>(this, "FVulkanSurface.Destroy"); }
	void GetMipSize(unsigned int MipIndex, unsigned int * MipBytes) { NativeCall<void, unsigned int, unsigned int *>(this, "FVulkanSurface.GetMipSize", MipIndex, MipBytes); }
	void GetMipStride(unsigned int MipIndex, unsigned int * Stride) { NativeCall<void, unsigned int, unsigned int *>(this, "FVulkanSurface.GetMipStride", MipIndex, Stride); }
	void InitialClear(FVulkanCommandListContext * Context, const FClearValueBinding * ClearValueBinding, bool bTransitionToPresentable) { NativeCall<void, FVulkanCommandListContext *, const FClearValueBinding *, bool>(this, "FVulkanSurface.InitialClear", Context, ClearValueBinding, bTransitionToPresentable); }
	static void InternalLockWrite(FVulkanCommandListContext * Context, FVulkanSurface * Surface, const VkImageSubresourceRange * SubresourceRange, const VkBufferImageCopy * Region, VulkanRHI::FStagingBuffer * StagingBuffer) { NativeCall<void, FVulkanCommandListContext *, FVulkanSurface *, const VkImageSubresourceRange *, const VkBufferImageCopy *, VulkanRHI::FStagingBuffer *>(nullptr, "FVulkanSurface.InternalLockWrite", Context, Surface, SubresourceRange, Region, StagingBuffer); }
};

