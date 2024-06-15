#pragma once

#include "BaseDeclarations.h"
#include "FPluginInstance.h"
#include "FPluginStatus.h"

struct IPluginManager
{
	char __padding[0x8L];

	// Functions

};

struct FPluginManager : IPluginManager
{
	char __padding[0x30L];
	TArray<TSharedRef<FPluginInstance,0>>& AllPluginsField() { return *GetNativePointerField<TArray<TSharedRef<FPluginInstance,0>>*>(this, "FPluginManager.AllPlugins"); }
	TArray<FPluginContentFolder>& ContentFoldersField() { return *GetNativePointerField<TArray<FPluginContentFolder>*>(this, "FPluginManager.ContentFolders"); }
	bool& bHaveConfiguredEnabledPluginsField() { return *GetNativePointerField<bool*>(this, "FPluginManager.bHaveConfiguredEnabledPlugins"); }
	bool& bHaveAllRequiredPluginsField() { return *GetNativePointerField<bool*>(this, "FPluginManager.bHaveAllRequiredPlugins"); }

	// Functions

	bool AreRequiredPluginsAvailable() { return NativeCall<bool>(this, "FPluginManager.AreRequiredPluginsAvailable"); }
	bool CheckModuleCompatibility(TArray<FString> * OutIncompatibleModules) { return NativeCall<bool, TArray<FString> *>(this, "FPluginManager.CheckModuleCompatibility", OutIncompatibleModules); }
	bool ConfigureEnabledPlugins() { return NativeCall<bool>(this, "FPluginManager.ConfigureEnabledPlugins"); }
	void DiscoverAllPlugins() { NativeCall<void>(this, "FPluginManager.DiscoverAllPlugins"); }
	TSharedPtr<FPluginInstance,0> * FindPluginInstance(TSharedPtr<FPluginInstance,0> * result, const FString * Name) { return NativeCall<TSharedPtr<FPluginInstance,0> *, TSharedPtr<FPluginInstance,0> *, const FString *>(this, "FPluginManager.FindPluginInstance", result, Name); }
	bool LoadModulesForEnabledPlugins(const ELoadingPhase::Type LoadingPhase) { return NativeCall<bool, const ELoadingPhase::Type>(this, "FPluginManager.LoadModulesForEnabledPlugins", LoadingPhase); }
	TArray<FPluginStatus> * QueryStatusForAllPlugins(TArray<FPluginStatus> * result) { return NativeCall<TArray<FPluginStatus> *, TArray<FPluginStatus> *>(this, "FPluginManager.QueryStatusForAllPlugins", result); }
};

