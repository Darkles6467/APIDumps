#pragma once

#include "BaseDeclarations.h"
struct FPluginInstance
{
	char __padding[0xa8L];
	FString& NameField() { return *GetNativePointerField<FString*>(this, "FPluginInstance.Name"); }
	FString& FileNameField() { return *GetNativePointerField<FString*>(this, "FPluginInstance.FileName"); }
	FPluginDescriptor& DescriptorField() { return *GetNativePointerField<FPluginDescriptor*>(this, "FPluginInstance.Descriptor"); }
	EPluginLoadedFrom::Type& LoadedFromField() { return *GetNativePointerField<EPluginLoadedFrom::Type*>(this, "FPluginInstance.LoadedFrom"); }
	bool& bEnabledField() { return *GetNativePointerField<bool*>(this, "FPluginInstance.bEnabled"); }
};

