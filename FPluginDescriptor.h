#pragma once

#include "BaseDeclarations.h"
struct FPluginDescriptor
{
	char __padding[0x80L];
	int& FileVersionField() { return *GetNativePointerField<int*>(this, "FPluginDescriptor.FileVersion"); }
	int& VersionField() { return *GetNativePointerField<int*>(this, "FPluginDescriptor.Version"); }
	FString& VersionNameField() { return *GetNativePointerField<FString*>(this, "FPluginDescriptor.VersionName"); }
	FString& FriendlyNameField() { return *GetNativePointerField<FString*>(this, "FPluginDescriptor.FriendlyName"); }
	FString& DescriptionField() { return *GetNativePointerField<FString*>(this, "FPluginDescriptor.Description"); }
	FString& CategoryField() { return *GetNativePointerField<FString*>(this, "FPluginDescriptor.Category"); }
	FString& CreatedByField() { return *GetNativePointerField<FString*>(this, "FPluginDescriptor.CreatedBy"); }
	FString& CreatedByURLField() { return *GetNativePointerField<FString*>(this, "FPluginDescriptor.CreatedByURL"); }
	TArray<FModuleDescriptor>& ModulesField() { return *GetNativePointerField<TArray<FModuleDescriptor>*>(this, "FPluginDescriptor.Modules"); }
	bool& bEnabledByDefaultField() { return *GetNativePointerField<bool*>(this, "FPluginDescriptor.bEnabledByDefault"); }
	bool& bCanContainContentField() { return *GetNativePointerField<bool*>(this, "FPluginDescriptor.bCanContainContent"); }
	bool& bIsBetaVersionField() { return *GetNativePointerField<bool*>(this, "FPluginDescriptor.bIsBetaVersion"); }

	// Functions

	bool Load(const FString * FileName, FText * OutFailReason) { return NativeCall<bool, const FString *, FText *>(this, "FPluginDescriptor.Load", FileName, OutFailReason); }
	bool Read(const FJsonObject * Object, FText * OutFailReason) { return NativeCall<bool, const FJsonObject *, FText *>(this, "FPluginDescriptor.Read", Object, OutFailReason); }
};

