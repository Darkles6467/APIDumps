#pragma once

#include "BaseDeclarations.h"
struct FLayerExtension
{
	char __padding[0x218L];
	VkLayerProperties& LayerPropsField() { return *GetNativePointerField<VkLayerProperties*>(this, "FLayerExtension.LayerProps"); }
	TArray<VkExtensionProperties>& ExtensionPropsField() { return *GetNativePointerField<TArray<VkExtensionProperties>*>(this, "FLayerExtension.ExtensionProps"); }

	// Functions

	void AddAnsiExtensionNames(TArray<char const *> * Out) { NativeCall<void, TArray<char const *> *>(this, "FLayerExtension.AddAnsiExtensionNames", Out); }
	void AddUniqueExtensionNames(TArray<FString> * Out) { NativeCall<void, TArray<FString> *>(this, "FLayerExtension.AddUniqueExtensionNames", Out); }
};

