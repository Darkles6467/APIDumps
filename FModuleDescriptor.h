#pragma once

#include "BaseDeclarations.h"
#include "FModuleDescriptor.h"

struct FModuleDescriptor
{
	char __padding[0x30L];
	FName& NameField() { return *GetNativePointerField<FName*>(this, "FModuleDescriptor.Name"); }
	EHostType::Type& TypeField() { return *GetNativePointerField<EHostType::Type*>(this, "FModuleDescriptor.Type"); }
	ELoadingPhase::Type& LoadingPhaseField() { return *GetNativePointerField<ELoadingPhase::Type*>(this, "FModuleDescriptor.LoadingPhase"); }
	TArray<FString>& WhitelistPlatformsField() { return *GetNativePointerField<TArray<FString>*>(this, "FModuleDescriptor.WhitelistPlatforms"); }
	TArray<FString>& BlacklistPlatformsField() { return *GetNativePointerField<TArray<FString>*>(this, "FModuleDescriptor.BlacklistPlatforms"); }

	// Functions

	static bool CheckModuleCompatbility(const TArray<FModuleDescriptor> * Modules, bool bGameModules, TArray<FString> * OutIncompatibleFiles) { return NativeCall<bool, const TArray<FModuleDescriptor> *, bool, TArray<FString> *>(nullptr, "FModuleDescriptor.CheckModuleCompatbility", Modules, bGameModules, OutIncompatibleFiles); }
	bool IsCompiledInCurrentConfiguration() { return NativeCall<bool>(this, "FModuleDescriptor.IsCompiledInCurrentConfiguration"); }
	static void LoadModulesForPhase(ELoadingPhase::Type LoadingPhase, const TArray<FModuleDescriptor> * Modules, TMap<FName,enum EModuleLoadResult,FDefaultSetAllocator,TDefaultMapKeyFuncs<FName,enum EModuleLoadResult,0> > * ModuleLoadErrors) { NativeCall<void, ELoadingPhase::Type, const TArray<FModuleDescriptor> *, TMap<FName,enum EModuleLoadResult,FDefaultSetAllocator,TDefaultMapKeyFuncs<FName,enum EModuleLoadResult,0> > *>(nullptr, "FModuleDescriptor.LoadModulesForPhase", LoadingPhase, Modules, ModuleLoadErrors); }
	bool Read(const FJsonObject * Object, FText * OutFailReason) { return NativeCall<bool, const FJsonObject *, FText *>(this, "FModuleDescriptor.Read", Object, OutFailReason); }
	static bool ReadArray(const FJsonObject * Object, const wchar_t * Name, TArray<FModuleDescriptor> * OutModules, FText * OutFailReason) { return NativeCall<bool, const FJsonObject *, const wchar_t *, TArray<FModuleDescriptor> *, FText *>(nullptr, "FModuleDescriptor.ReadArray", Object, Name, OutModules, OutFailReason); }
	void Write(TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t> > * Writer) { NativeCall<void, TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t> > *>(this, "FModuleDescriptor.Write", Writer); }
	static void WriteArray(TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t> > * Writer, const wchar_t * Name, const TArray<FModuleDescriptor> * Modules) { NativeCall<void, TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t> > *, const wchar_t *, const TArray<FModuleDescriptor> *>(nullptr, "FModuleDescriptor.WriteArray", Writer, Name, Modules); }
};

