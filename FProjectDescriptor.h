#pragma once

#include "BaseDeclarations.h"
struct FProjectDescriptor
{
	char __padding[0x70L];
	EProjectDescriptorVersion::Type& FileVersionField() { return *GetNativePointerField<EProjectDescriptorVersion::Type*>(this, "FProjectDescriptor.FileVersion"); }
	FString& EngineAssociationField() { return *GetNativePointerField<FString*>(this, "FProjectDescriptor.EngineAssociation"); }
	FString& CategoryField() { return *GetNativePointerField<FString*>(this, "FProjectDescriptor.Category"); }
	FString& DescriptionField() { return *GetNativePointerField<FString*>(this, "FProjectDescriptor.Description"); }
	TArray<FModuleDescriptor>& ModulesField() { return *GetNativePointerField<TArray<FModuleDescriptor>*>(this, "FProjectDescriptor.Modules"); }
	TArray<FPluginReferenceDescriptor>& PluginsField() { return *GetNativePointerField<TArray<FPluginReferenceDescriptor>*>(this, "FProjectDescriptor.Plugins"); }
	TArray<FName>& TargetPlatformsField() { return *GetNativePointerField<TArray<FName>*>(this, "FProjectDescriptor.TargetPlatforms"); }
	unsigned int& EpicSampleNameHashField() { return *GetNativePointerField<unsigned int*>(this, "FProjectDescriptor.EpicSampleNameHash"); }

	// Functions

	static FString * GetExtension(FString * result) { return NativeCall<FString *, FString *>(nullptr, "FProjectDescriptor.GetExtension", result); }
	bool Load(const FString * FileName, FText * OutFailReason) { return NativeCall<bool, const FString *, FText *>(this, "FProjectDescriptor.Load", FileName, OutFailReason); }
	bool Read(const FJsonObject * Object, FText * OutFailReason) { return NativeCall<bool, const FJsonObject *, FText *>(this, "FProjectDescriptor.Read", Object, OutFailReason); }
	bool Save(const FString * FileName, FText * OutFailReason) { return NativeCall<bool, const FString *, FText *>(this, "FProjectDescriptor.Save", FileName, OutFailReason); }
	void UpdateSupportedTargetPlatforms(const FName * InPlatformName, bool bIsSupported) { NativeCall<void, const FName *, bool>(this, "FProjectDescriptor.UpdateSupportedTargetPlatforms", InPlatformName, bIsSupported); }
	void Write(TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t> > * Writer) { NativeCall<void, TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t> > *>(this, "FProjectDescriptor.Write", Writer); }
};

