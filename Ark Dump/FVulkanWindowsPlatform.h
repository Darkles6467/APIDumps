#pragma once

#include "BaseDeclarations.h"
struct FVulkanGenericPlatform
{
};

struct FVulkanWindowsPlatform : FVulkanGenericPlatform
{

	// Functions

	static void CreateSurface(void * WindowHandle, struct VkInstance_T * Instance, struct VkSurfaceKHR_T ** OutSurface) { NativeCall<void, void *, struct VkInstance_T *, struct VkSurfaceKHR_T **>(nullptr, "FVulkanWindowsPlatform.CreateSurface", WindowHandle, Instance, OutSurface); }
	static void GetDeviceExtensions(TArray<char const *> * OutExtensions) { NativeCall<void, TArray<char const *> *>(nullptr, "FVulkanWindowsPlatform.GetDeviceExtensions", OutExtensions); }
	static void GetInstanceExtensions(TArray<char const *> * OutExtensions) { NativeCall<void, TArray<char const *> *>(nullptr, "FVulkanWindowsPlatform.GetInstanceExtensions", OutExtensions); }
	static bool LoadVulkanInstanceFunctions(struct VkInstance_T * inInstance) { return NativeCall<bool, struct VkInstance_T *>(nullptr, "FVulkanWindowsPlatform.LoadVulkanInstanceFunctions", inInstance); }
	static bool LoadVulkanLibrary() { return NativeCall<bool>(nullptr, "FVulkanWindowsPlatform.LoadVulkanLibrary"); }
};

