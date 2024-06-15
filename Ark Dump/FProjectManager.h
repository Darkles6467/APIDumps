#pragma once

#include "BaseDeclarations.h"
struct IProjectManager
{
	char __padding[0x8L];

	// Functions

};

struct FProjectManager : IProjectManager
{
	char __padding[0x38L];
	TSharedPtr<FProjectDescriptor,0>& CurrentProjectField() { return *GetNativePointerField<TSharedPtr<FProjectDescriptor,0>*>(this, "FProjectManager.CurrentProject"); }
	bool& bRestartRequiredField() { return *GetNativePointerField<bool*>(this, "FProjectManager.bRestartRequired"); }

	// Functions

	bool CheckModuleCompatibility(TArray<FString> * OutIncompatibleModules) { return NativeCall<bool, TArray<FString> *>(this, "FProjectManager.CheckModuleCompatibility", OutIncompatibleModules); }
	void ClearSupportedTargetPlatformsForCurrentProject() { NativeCall<void>(this, "FProjectManager.ClearSupportedTargetPlatformsForCurrentProject"); }
	void ClearSupportedTargetPlatformsForProject(const FString * FilePath) { NativeCall<void, const FString *>(this, "FProjectManager.ClearSupportedTargetPlatformsForProject", FilePath); }
	bool GenerateNewProjectFile(const FString * NewProjectFilename, const TArray<FString> * StartupModuleNames, const FString * EngineIdentifier, FText * OutFailReason) { return NativeCall<bool, const FString *, const TArray<FString> *, const FString *, FText *>(this, "FProjectManager.GenerateNewProjectFile", NewProjectFilename, StartupModuleNames, EngineIdentifier, OutFailReason); }
	const FString * GetAutoLoadProjectFileName() { return NativeCall<const FString *>(this, "FProjectManager.GetAutoLoadProjectFileName"); }
	static void GetDefaultEnabledPlugins(TArray<FString> * OutPluginNames) { NativeCall<void, TArray<FString> *>(nullptr, "FProjectManager.GetDefaultEnabledPlugins", OutPluginNames); }
	void GetEnabledPlugins(TArray<FString> * OutPluginNames) { NativeCall<void, TArray<FString> *>(this, "FProjectManager.GetEnabledPlugins", OutPluginNames); }
	bool IsNonDefaultPluginEnabled() { return NativeCall<bool>(this, "FProjectManager.IsNonDefaultPluginEnabled"); }
	bool IsRestartRequired() { return NativeCall<bool>(this, "FProjectManager.IsRestartRequired"); }
	bool LoadModulesForProject(const ELoadingPhase::Type LoadingPhase) { return NativeCall<bool, const ELoadingPhase::Type>(this, "FProjectManager.LoadModulesForProject", LoadingPhase); }
	bool LoadProjectFile(const FString * InProjectFile) { return NativeCall<bool, const FString *>(this, "FProjectManager.LoadProjectFile", InProjectFile); }
	bool QueryStatusForCurrentProject(FProjectStatus * OutProjectStatus) { return NativeCall<bool, FProjectStatus *>(this, "FProjectManager.QueryStatusForCurrentProject", OutProjectStatus); }
	bool QueryStatusForProject(const FString * FilePath, FProjectStatus * OutProjectStatus) { return NativeCall<bool, const FString *, FProjectStatus *>(this, "FProjectManager.QueryStatusForProject", FilePath, OutProjectStatus); }
	static void QueryStatusForProjectImpl(const FProjectDescriptor * ProjectInfo, const FString * FilePath, FProjectStatus * OutProjectStatus) { NativeCall<void, const FProjectDescriptor *, const FString *, FProjectStatus *>(nullptr, "FProjectManager.QueryStatusForProjectImpl", ProjectInfo, FilePath, OutProjectStatus); }
	bool SetPluginEnabled(const FString * PluginName, bool bEnabled, FText * OutFailReason) { return NativeCall<bool, const FString *, bool, FText *>(this, "FProjectManager.SetPluginEnabled", PluginName, bEnabled, OutFailReason); }
	bool SignSampleProject(const FString * FilePath, const FString * Category, FText * OutFailReason) { return NativeCall<bool, const FString *, const FString *, FText *>(this, "FProjectManager.SignSampleProject", FilePath, Category, OutFailReason); }
	void UpdateSupportedTargetPlatformsForCurrentProject(const FName * InPlatformName, const bool bIsSupported) { NativeCall<void, const FName *, const bool>(this, "FProjectManager.UpdateSupportedTargetPlatformsForCurrentProject", InPlatformName, bIsSupported); }
	void UpdateSupportedTargetPlatformsForProject(const FString * FilePath, const FName * InPlatformName, const bool bIsSupported) { NativeCall<void, const FString *, const FName *, const bool>(this, "FProjectManager.UpdateSupportedTargetPlatformsForProject", FilePath, InPlatformName, bIsSupported); }
};

