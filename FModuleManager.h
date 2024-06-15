#pragma once

#include "BaseDeclarations.h"
#include "FSelfRegisteringExec.h"
#include "FExec.h"

struct FModuleManager : FSelfRegisteringExec
{
	char __padding[0x110L];
	bool& bCanProcessNewlyLoadedObjectsField() { return *GetNativePointerField<bool*>(this, "FModuleManager.bCanProcessNewlyLoadedObjects"); }
	FModuleManager::FModulesChangedEvent& ModulesChangedEventField() { return *GetNativePointerField<FModuleManager::FModulesChangedEvent*>(this, "FModuleManager.ModulesChangedEvent"); }
	TArray<FString>& EngineBinariesDirectoriesField() { return *GetNativePointerField<TArray<FString>*>(this, "FModuleManager.EngineBinariesDirectories"); }
	TArray<FString>& GameBinariesDirectoriesField() { return *GetNativePointerField<TArray<FString>*>(this, "FModuleManager.GameBinariesDirectories"); }

	// Functions

	void AddBinariesDirectory(const wchar_t * InDirectory, bool bIsGameDirectory) { NativeCall<void, const wchar_t *, bool>(this, "FModuleManager.AddBinariesDirectory", InDirectory, bIsGameDirectory); }
	void AddModule(const FName InModuleName) { NativeCall<void, const FName>(this, "FModuleManager.AddModule", InModuleName); }
	void FindModulePaths(const wchar_t * NamePattern, TMap<FName,FString,FDefaultSetAllocator,TDefaultMapKeyFuncs<FName,FString,0> > * OutModulePaths) { NativeCall<void, const wchar_t *, TMap<FName,FString,FDefaultSetAllocator,TDefaultMapKeyFuncs<FName,FString,0> > *>(this, "FModuleManager.FindModulePaths", NamePattern, OutModulePaths); }
	void FindModulePathsInDirectory(const FString * InDirectoryName, bool bIsGameDirectory, const wchar_t * NamePattern, TMap<FName,FString,FDefaultSetAllocator,TDefaultMapKeyFuncs<FName,FString,0> > * OutModulePaths) { NativeCall<void, const FString *, bool, const wchar_t *, TMap<FName,FString,FDefaultSetAllocator,TDefaultMapKeyFuncs<FName,FString,0> > *>(this, "FModuleManager.FindModulePathsInDirectory", InDirectoryName, bIsGameDirectory, NamePattern, OutModulePaths); }
	void FindModules(const wchar_t * WildcardWithoutExtension, TArray<FName> * OutModules) { NativeCall<void, const wchar_t *, TArray<FName> *>(this, "FModuleManager.FindModules", WildcardWithoutExtension, OutModules); }
	static FModuleManager * Get() { return NativeCall<FModuleManager *>(nullptr, "FModuleManager.Get"); }
	static FString * GetCleanModuleFilename(FString * result, FName ModuleName, bool bGameModule) { return NativeCall<FString *, FString *, FName, bool>(nullptr, "FModuleManager.GetCleanModuleFilename", result, ModuleName, bGameModule); }
	static void GetModuleFilenameFormat(bool bGameModule, FString * OutPrefix, FString * OutSuffix) { NativeCall<void, bool, FString *, FString *>(nullptr, "FModuleManager.GetModuleFilenameFormat", bGameModule, OutPrefix, OutSuffix); }
	bool IsModuleLoaded(const FName InModuleName) { return NativeCall<bool, const FName>(this, "FModuleManager.IsModuleLoaded", InModuleName); }
	bool IsModuleUpToDate(const FName InModuleName) { return NativeCall<bool, const FName>(this, "FModuleManager.IsModuleUpToDate", InModuleName); }
	void StartProcessingNewlyLoadedObjects() { NativeCall<void>(this, "FModuleManager.StartProcessingNewlyLoadedObjects"); }
	bool UnloadModule(const FName InModuleName, bool bIsShutdown) { return NativeCall<bool, const FName, bool>(this, "FModuleManager.UnloadModule", InModuleName, bIsShutdown); }
	void UnloadModulesAtShutdown() { NativeCall<void>(this, "FModuleManager.UnloadModulesAtShutdown"); }
};

