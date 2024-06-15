#pragma once

#include "BaseDeclarations.h"
struct VkWin32SurfaceCreateInfoKHR
{
	char __padding[0x28L];
	VkStructureType& sTypeField() { return *GetNativePointerField<VkStructureType*>(this, "VkWin32SurfaceCreateInfoKHR.sType"); }
	const void * pNextField() { return GetNativePointerField<const void *>(this, "VkWin32SurfaceCreateInfoKHR.pNext"); }
	unsigned int& flagsField() { return *GetNativePointerField<unsigned int*>(this, "VkWin32SurfaceCreateInfoKHR.flags"); }
	HINSTANCE__ * hinstanceField() { return GetNativePointerField<HINSTANCE__ *>(this, "VkWin32SurfaceCreateInfoKHR.hinstance"); }
	HWND__ * hwndField() { return GetNativePointerField<HWND__ *>(this, "VkWin32SurfaceCreateInfoKHR.hwnd"); }
};

