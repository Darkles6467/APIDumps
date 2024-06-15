#pragma once

#include "BaseDeclarations.h"
#include "FPluginReferenceDescriptor.h"

struct FPluginReferenceDescriptor
{
	char __padding[0x48L];
	FString& NameField() { return *GetNativePointerField<FString*>(this, "FPluginReferenceDescriptor.Name"); }
	bool& bEnabledField() { return *GetNativePointerField<bool*>(this, "FPluginReferenceDescriptor.bEnabled"); }
	FString& DescriptionField() { return *GetNativePointerField<FString*>(this, "FPluginReferenceDescriptor.Description"); }
	TArray<FString>& WhitelistPlatformsField() { return *GetNativePointerField<TArray<FString>*>(this, "FPluginReferenceDescriptor.WhitelistPlatforms"); }
	TArray<FString>& BlacklistPlatformsField() { return *GetNativePointerField<TArray<FString>*>(this, "FPluginReferenceDescriptor.BlacklistPlatforms"); }

	// Functions

	bool Read(const FJsonObject * Object, FText * OutFailReason) { return NativeCall<bool, const FJsonObject *, FText *>(this, "FPluginReferenceDescriptor.Read", Object, OutFailReason); }
	static bool ReadArray(const FJsonObject * Object, const wchar_t * Name, TArray<FPluginReferenceDescriptor> * OutPlugins, FText * OutFailReason) { return NativeCall<bool, const FJsonObject *, const wchar_t *, TArray<FPluginReferenceDescriptor> *, FText *>(nullptr, "FPluginReferenceDescriptor.ReadArray", Object, Name, OutPlugins, OutFailReason); }
	void Write(TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t> > * Writer) { NativeCall<void, TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t> > *>(this, "FPluginReferenceDescriptor.Write", Writer); }
	static void WriteArray(TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t> > * Writer, const wchar_t * Name, const TArray<FPluginReferenceDescriptor> * Plugins) { NativeCall<void, TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t> > *, const wchar_t *, const TArray<FPluginReferenceDescriptor> *>(nullptr, "FPluginReferenceDescriptor.WriteArray", Writer, Name, Plugins); }
};

