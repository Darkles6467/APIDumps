#pragma once

#include "BaseDeclarations.h"
struct FAssetRegistryConsoleCommands
{
	char __padding[0x78L];
	FAssetRegistryModule * ModuleField() { return GetNativePointerField<FAssetRegistryModule *>(this, "FAssetRegistryConsoleCommands.Module"); }
	FAutoConsoleCommand& GetByNameCommandField() { return *GetNativePointerField<FAutoConsoleCommand*>(this, "FAssetRegistryConsoleCommands.GetByNameCommand"); }
	FAutoConsoleCommand& GetByPathCommandField() { return *GetNativePointerField<FAutoConsoleCommand*>(this, "FAssetRegistryConsoleCommands.GetByPathCommand"); }
	FAutoConsoleCommand& GetByClassCommandField() { return *GetNativePointerField<FAutoConsoleCommand*>(this, "FAssetRegistryConsoleCommands.GetByClassCommand"); }
	FAutoConsoleCommand& GetByTagCommandField() { return *GetNativePointerField<FAutoConsoleCommand*>(this, "FAssetRegistryConsoleCommands.GetByTagCommand"); }
	FAutoConsoleCommand& GetDependenciesCommandField() { return *GetNativePointerField<FAutoConsoleCommand*>(this, "FAssetRegistryConsoleCommands.GetDependenciesCommand"); }
	FAutoConsoleCommand& GetReferencersCommandField() { return *GetNativePointerField<FAutoConsoleCommand*>(this, "FAssetRegistryConsoleCommands.GetReferencersCommand"); }
	FAutoConsoleCommand& FindInvalidUAssetsCommandField() { return *GetNativePointerField<FAutoConsoleCommand*>(this, "FAssetRegistryConsoleCommands.FindInvalidUAssetsCommand"); }

	// Functions

	void FindInvalidUAssets(const TArray<FString> * Args) { NativeCall<void, const TArray<FString> *>(this, "FAssetRegistryConsoleCommands.FindInvalidUAssets", Args); }
	void GetByClass(const TArray<FString> * Args) { NativeCall<void, const TArray<FString> *>(this, "FAssetRegistryConsoleCommands.GetByClass", Args); }
	void GetByName(const TArray<FString> * Args) { NativeCall<void, const TArray<FString> *>(this, "FAssetRegistryConsoleCommands.GetByName", Args); }
	void GetByPath(const TArray<FString> * Args) { NativeCall<void, const TArray<FString> *>(this, "FAssetRegistryConsoleCommands.GetByPath", Args); }
	void GetByTag(const TArray<FString> * Args) { NativeCall<void, const TArray<FString> *>(this, "FAssetRegistryConsoleCommands.GetByTag", Args); }
	void GetDependencies(const TArray<FString> * Args) { NativeCall<void, const TArray<FString> *>(this, "FAssetRegistryConsoleCommands.GetDependencies", Args); }
	void GetReferencers(const TArray<FString> * Args) { NativeCall<void, const TArray<FString> *>(this, "FAssetRegistryConsoleCommands.GetReferencers", Args); }
};

