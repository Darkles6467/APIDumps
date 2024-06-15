#pragma once

#include "BaseDeclarations.h"
struct FLongPackagePathsSingleton
{
	char __padding[0x120L];
	FString& EngineRootPathField() { return *GetNativePointerField<FString*>(this, "FLongPackagePathsSingleton.EngineRootPath"); }
	FString& GameRootPathField() { return *GetNativePointerField<FString*>(this, "FLongPackagePathsSingleton.GameRootPath"); }
	FString& ScriptRootPathField() { return *GetNativePointerField<FString*>(this, "FLongPackagePathsSingleton.ScriptRootPath"); }
	FString& TempRootPathField() { return *GetNativePointerField<FString*>(this, "FLongPackagePathsSingleton.TempRootPath"); }
	TArray<FString>& MountPointRootPathsField() { return *GetNativePointerField<TArray<FString>*>(this, "FLongPackagePathsSingleton.MountPointRootPaths"); }
	FString& EngineContentPathField() { return *GetNativePointerField<FString*>(this, "FLongPackagePathsSingleton.EngineContentPath"); }
	FString& ContentPathShortField() { return *GetNativePointerField<FString*>(this, "FLongPackagePathsSingleton.ContentPathShort"); }
	FString& EngineShadersPathField() { return *GetNativePointerField<FString*>(this, "FLongPackagePathsSingleton.EngineShadersPath"); }
	FString& EngineShadersPathShortField() { return *GetNativePointerField<FString*>(this, "FLongPackagePathsSingleton.EngineShadersPathShort"); }
	FString& GameContentPathField() { return *GetNativePointerField<FString*>(this, "FLongPackagePathsSingleton.GameContentPath"); }
	FString& GameScriptPathField() { return *GetNativePointerField<FString*>(this, "FLongPackagePathsSingleton.GameScriptPath"); }
	FString& GameSavedPathField() { return *GetNativePointerField<FString*>(this, "FLongPackagePathsSingleton.GameSavedPath"); }
	FString& GameContentPathRebasedField() { return *GetNativePointerField<FString*>(this, "FLongPackagePathsSingleton.GameContentPathRebased"); }
	FString& GameScriptPathRebasedField() { return *GetNativePointerField<FString*>(this, "FLongPackagePathsSingleton.GameScriptPathRebased"); }
	FString& GameSavedPathRebasedField() { return *GetNativePointerField<FString*>(this, "FLongPackagePathsSingleton.GameSavedPathRebased"); }
	TArray<FPathPair>& ContentRootToPathField() { return *GetNativePointerField<TArray<FPathPair>*>(this, "FLongPackagePathsSingleton.ContentRootToPath"); }
	TArray<FPathPair>& ContentPathToRootField() { return *GetNativePointerField<TArray<FPathPair>*>(this, "FLongPackagePathsSingleton.ContentPathToRoot"); }
	TArray<FPathPair>& RedundantContentRootToPathField() { return *GetNativePointerField<TArray<FPathPair>*>(this, "FLongPackagePathsSingleton.RedundantContentRootToPath"); }

	// Functions

	static FLongPackagePathsSingleton * Get() { return NativeCall<FLongPackagePathsSingleton *>(nullptr, "FLongPackagePathsSingleton.Get"); }
	void GetValidLongPackageRoots(TArray<FString> * OutRoots, bool bIncludeReadOnlyRoots) { NativeCall<void, TArray<FString> *, bool>(this, "FLongPackagePathsSingleton.GetValidLongPackageRoots", OutRoots, bIncludeReadOnlyRoots); }
	void InsertMountPoint(const FString * RootPath, const FString * ContentPath) { NativeCall<void, const FString *, const FString *>(this, "FLongPackagePathsSingleton.InsertMountPoint", RootPath, ContentPath); }
	void InsertRedudantMountPoint(const FString * RootPath, const FString * ContentPath) { NativeCall<void, const FString *, const FString *>(this, "FLongPackagePathsSingleton.InsertRedudantMountPoint", RootPath, ContentPath); }
};

