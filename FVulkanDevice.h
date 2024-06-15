#pragma once

#include "BaseDeclarations.h"
struct FVulkanDevice
{
	char __padding[0x17b8L];
	struct VkDevice_T * DeviceField() { return GetNativePointerField<struct VkDevice_T *>(this, "FVulkanDevice.Device"); }
	VulkanRHI::FDeviceMemoryManager& MemoryManagerField() { return *GetNativePointerField<VulkanRHI::FDeviceMemoryManager*>(this, "FVulkanDevice.MemoryManager"); }
	VulkanRHI::FResourceHeapManager& ResourceHeapManagerField() { return *GetNativePointerField<VulkanRHI::FResourceHeapManager*>(this, "FVulkanDevice.ResourceHeapManager"); }
	VulkanRHI::FDeferredDeletionQueue& DeferredDeletionQueueField() { return *GetNativePointerField<VulkanRHI::FDeferredDeletionQueue*>(this, "FVulkanDevice.DeferredDeletionQueue"); }
	VulkanRHI::FStagingManager& StagingManagerField() { return *GetNativePointerField<VulkanRHI::FStagingManager*>(this, "FVulkanDevice.StagingManager"); }
	VulkanRHI::FFenceManager& FenceManagerField() { return *GetNativePointerField<VulkanRHI::FFenceManager*>(this, "FVulkanDevice.FenceManager"); }
	FVulkanDescriptorPoolsManager * DescriptorPoolsManagerField() { return GetNativePointerField<FVulkanDescriptorPoolsManager *>(this, "FVulkanDevice.DescriptorPoolsManager"); }
	FVulkanShaderFactory& ShaderFactoryField() { return *GetNativePointerField<FVulkanShaderFactory*>(this, "FVulkanDevice.ShaderFactory"); }
	TArray<FVulkanOcclusionQueryPool *>& OcclusionQueryPoolsField() { return *GetNativePointerField<TArray<FVulkanOcclusionQueryPool *>*>(this, "FVulkanDevice.OcclusionQueryPools"); }
	FVulkanTimestampPool * TimestampQueryPoolField() { return GetNativePointerField<FVulkanTimestampPool *>(this, "FVulkanDevice.TimestampQueryPool"); }
	FVulkanSamplerState * DefaultSamplerField() { return GetNativePointerField<FVulkanSamplerState *>(this, "FVulkanDevice.DefaultSampler"); }
	FVulkanSurface * DefaultImageField() { return GetNativePointerField<FVulkanSurface *>(this, "FVulkanDevice.DefaultImage"); }
	struct VkImageView_T * DefaultImageViewField() { return GetNativePointerField<struct VkImageView_T *>(this, "FVulkanDevice.DefaultImageView"); }
	struct VkPhysicalDevice_T * GpuField() { return GetNativePointerField<struct VkPhysicalDevice_T *>(this, "FVulkanDevice.Gpu"); }
	VkPhysicalDeviceProperties& GpuPropsField() { return *GetNativePointerField<VkPhysicalDeviceProperties*>(this, "FVulkanDevice.GpuProps"); }
	VkPhysicalDeviceFeatures& PhysicalFeaturesField() { return *GetNativePointerField<VkPhysicalDeviceFeatures*>(this, "FVulkanDevice.PhysicalFeatures"); }
	TArray<VkQueueFamilyProperties>& QueueFamilyPropsField() { return *GetNativePointerField<TArray<VkQueueFamilyProperties>*>(this, "FVulkanDevice.QueueFamilyProps"); }
	FieldArray<VkFormatProperties, 185> FormatPropertiesField() { return {this, "FVulkanDevice.FormatProperties"}; }
	TArray<FVulkanOcclusionQueryPool *>& UsedOcclusionQueryPoolsField() { return *GetNativePointerField<TArray<FVulkanOcclusionQueryPool *>*>(this, "FVulkanDevice.UsedOcclusionQueryPools"); }
	TArray<FVulkanOcclusionQueryPool *>& FreeOcclusionQueryPoolsField() { return *GetNativePointerField<TArray<FVulkanOcclusionQueryPool *>*>(this, "FVulkanDevice.FreeOcclusionQueryPools"); }
	unsigned __int64& TimestampValidBitsMaskField() { return *GetNativePointerField<unsigned __int64*>(this, "FVulkanDevice.TimestampValidBitsMask"); }
	FVulkanQueue * GfxQueueField() { return GetNativePointerField<FVulkanQueue *>(this, "FVulkanDevice.GfxQueue"); }
	FVulkanQueue * ComputeQueueField() { return GetNativePointerField<FVulkanQueue *>(this, "FVulkanDevice.ComputeQueue"); }
	FVulkanQueue * TransferQueueField() { return GetNativePointerField<FVulkanQueue *>(this, "FVulkanDevice.TransferQueue"); }
	FVulkanQueue * PresentQueueField() { return GetNativePointerField<FVulkanQueue *>(this, "FVulkanDevice.PresentQueue"); }
	bool& bAsyncComputeQueueField() { return *GetNativePointerField<bool*>(this, "FVulkanDevice.bAsyncComputeQueue"); }
	bool& bPresentOnComputeQueueField() { return *GetNativePointerField<bool*>(this, "FVulkanDevice.bPresentOnComputeQueue"); }
	FVulkanDevice::<unnamed_type_CrashMarker>& CrashMarkerField() { return *GetNativePointerField<FVulkanDevice::<unnamed_type_CrashMarker>*>(this, "FVulkanDevice.CrashMarker"); }
	FieldArray<VkComponentMapping, 55> PixelFormatComponentMappingField() { return {this, "FVulkanDevice.PixelFormatComponentMapping"}; }
	FOptionalVulkanDeviceExtensions& OptionalDeviceExtensionsField() { return *GetNativePointerField<FOptionalVulkanDeviceExtensions*>(this, "FVulkanDevice.OptionalDeviceExtensions"); }
	struct VkValidationCacheEXT_T * ValidationCacheField() { return GetNativePointerField<struct VkValidationCacheEXT_T *>(this, "FVulkanDevice.ValidationCache"); }

	// Functions

	void CreateDevice() { NativeCall<void>(this, "FVulkanDevice.CreateDevice"); }
	void Destroy() { NativeCall<void>(this, "FVulkanDevice.Destroy"); }
	FVulkanOcclusionQueryPool * FindAvailableOcclusionQueryPool(FVulkanCmdBuffer * CmdBuffer) { return NativeCall<FVulkanOcclusionQueryPool *, FVulkanCmdBuffer *>(this, "FVulkanDevice.FindAvailableOcclusionQueryPool", CmdBuffer); }
	void GetDeviceExtensionsAndLayers(TArray<char const *> * OutDeviceExtensions, TArray<char const *> * OutDeviceLayers, bool * bOutDebugMarkers) { NativeCall<void, TArray<char const *> *, TArray<char const *> *, bool *>(this, "FVulkanDevice.GetDeviceExtensionsAndLayers", OutDeviceExtensions, OutDeviceLayers, bOutDebugMarkers); }
	const VkComponentMapping * GetFormatComponentMapping(EPixelFormat UEFormat) { return NativeCall<const VkComponentMapping *, EPixelFormat>(this, "FVulkanDevice.GetFormatComponentMapping", UEFormat); }
	void InitGPU(int DeviceIndex) { NativeCall<void, int>(this, "FVulkanDevice.InitGPU", DeviceIndex); }
	bool IsFormatSupported(VkFormat Format) { return NativeCall<bool, VkFormat>(this, "FVulkanDevice.IsFormatSupported", Format); }
	void NotifyDeletedImage(struct VkImage_T * Image) { NativeCall<void, struct VkImage_T *>(this, "FVulkanDevice.NotifyDeletedImage", Image); }
	void ParseOptionalDeviceExtensions(const TArray<char const *> * DeviceExtensions) { NativeCall<void, const TArray<char const *> *>(this, "FVulkanDevice.ParseOptionalDeviceExtensions", DeviceExtensions); }
	bool QueryGPU(int DeviceIndex) { return NativeCall<bool, int>(this, "FVulkanDevice.QueryGPU", DeviceIndex); }
	void ReleaseDeferredContext(FVulkanCommandListContext * InContext) { NativeCall<void, FVulkanCommandListContext *>(this, "FVulkanDevice.ReleaseDeferredContext", InContext); }
	void SetupFormats() { NativeCall<void>(this, "FVulkanDevice.SetupFormats"); }
	void SetupPresentQueue(struct VkSurfaceKHR_T * Surface) { NativeCall<void, struct VkSurfaceKHR_T *>(this, "FVulkanDevice.SetupPresentQueue", Surface); }
	void SubmitCommands(FVulkanCommandListContext * Context) { NativeCall<void, FVulkanCommandListContext *>(this, "FVulkanDevice.SubmitCommands", Context); }
	void WaitUntilIdle() { NativeCall<void>(this, "FVulkanDevice.WaitUntilIdle"); }
};

