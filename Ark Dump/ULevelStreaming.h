#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"

struct ULevelStreaming : UObject
{
	char __padding[0x128L];
	FName& PackageName_DEPRECATEDField() { return *GetNativePointerField<FName*>(this, "ULevelStreaming.PackageName_DEPRECATED"); }
	TAssetPtr<UWorld>& WorldAssetField() { return *GetNativePointerField<TAssetPtr<UWorld>*>(this, "ULevelStreaming.WorldAsset"); }
	FName& PackageNameToLoadField() { return *GetNativePointerField<FName*>(this, "ULevelStreaming.PackageNameToLoad"); }
	TArray<FName>& LODPackageNamesField() { return *GetNativePointerField<TArray<FName>*>(this, "ULevelStreaming.LODPackageNames"); }
	TArray<FName>& LODPackageNamesToLoadField() { return *GetNativePointerField<TArray<FName>*>(this, "ULevelStreaming.LODPackageNamesToLoad"); }
	FTransform& LevelTransformField() { return *GetNativePointerField<FTransform*>(this, "ULevelStreaming.LevelTransform"); }
	FColor& DrawColor_DEPRECATEDField() { return *GetNativePointerField<FColor*>(this, "ULevelStreaming.DrawColor_DEPRECATED"); }
	FLinearColor& LevelColorField() { return *GetNativePointerField<FLinearColor*>(this, "ULevelStreaming.LevelColor"); }
	TArray<ALevelStreamingVolume *>& EditorStreamingVolumesField() { return *GetNativePointerField<TArray<ALevelStreamingVolume *>*>(this, "ULevelStreaming.EditorStreamingVolumes"); }
	float& MinTimeBetweenVolumeUnloadRequestsField() { return *GetNativePointerField<float*>(this, "ULevelStreaming.MinTimeBetweenVolumeUnloadRequests"); }
	float& LastVolumeUnloadRequestTimeField() { return *GetNativePointerField<float*>(this, "ULevelStreaming.LastVolumeUnloadRequestTime"); }
	TArray<FString>& KeywordsField() { return *GetNativePointerField<TArray<FString>*>(this, "ULevelStreaming.Keywords"); }
	int& LevelLODIndexField() { return *GetNativePointerField<int*>(this, "ULevelStreaming.LevelLODIndex"); }
	bool& bEnableTileStreamingField() { return *GetNativePointerField<bool*>(this, "ULevelStreaming.bEnableTileStreaming"); }
	ULevel * LoadedLevelField() { return GetNativePointerField<ULevel *>(this, "ULevelStreaming.LoadedLevel"); }
	ULevel * PendingUnloadLevelField() { return GetNativePointerField<ULevel *>(this, "ULevelStreaming.PendingUnloadLevel"); }

	// Functions

	ULevel * GetLoadedLevel() { return NativeCall<ULevel *>(this, "ULevelStreaming.GetLoadedLevel"); }
	void AsyncLevelLoadComplete(const FString * InPackageName, UPackage * InLoadedPackage) { NativeCall<void, const FString *, UPackage *>(this, "ULevelStreaming.AsyncLevelLoadComplete", InPackageName, InLoadedPackage); }
	FString * BPGetPackageName(FString * result) { return NativeCall<FString *, FString *>(this, "ULevelStreaming.BPGetPackageName", result); }
	static void BroadcastLevelLoadedStatus(UWorld * PersistentWorld, FName LevelPackageName, bool bLoaded) { NativeCall<void, UWorld *, FName, bool>(nullptr, "ULevelStreaming.BroadcastLevelLoadedStatus", PersistentWorld, LevelPackageName, bLoaded); }
	static void BroadcastLevelVisibleStatus(UWorld * PersistentWorld, FName LevelPackageName, bool bVisible) { NativeCall<void, UWorld *, FName, bool>(nullptr, "ULevelStreaming.BroadcastLevelVisibleStatus", PersistentWorld, LevelPackageName, bVisible); }
	void DiscardPendingUnloadLevel(UWorld * PersistentWorld) { NativeCall<void, UWorld *>(this, "ULevelStreaming.DiscardPendingUnloadLevel", PersistentWorld); }
	UWorld * GetWorld() { return NativeCall<UWorld *>(this, "ULevelStreaming.GetWorld"); }
	FName * GetWorldAssetPackageFName(FName * result) { return NativeCall<FName *, FName *>(this, "ULevelStreaming.GetWorldAssetPackageFName", result); }
	FString * GetWorldAssetPackageName(FString * result) { return NativeCall<FString *, FString *>(this, "ULevelStreaming.GetWorldAssetPackageName", result); }
	bool IsLevelLoaded() { return NativeCall<bool>(this, "ULevelStreaming.IsLevelLoaded"); }
	bool IsLevelVisible() { return NativeCall<bool>(this, "ULevelStreaming.IsLevelVisible"); }
	bool IsTileStreamingEnabled() { return NativeCall<bool>(this, "ULevelStreaming.IsTileStreamingEnabled"); }
	void PostLoad() { NativeCall<void>(this, "ULevelStreaming.PostLoad"); }
	void RenameForPIE(int PIEInstanceID) { NativeCall<void, int>(this, "ULevelStreaming.RenameForPIE", PIEInstanceID); }
	bool RequestLevel(UWorld * PersistentWorld, bool bAllowLevelLoadRequests, bool bBlockOnLoad, bool bAreUnloadsPending) { return NativeCall<bool, UWorld *, bool, bool, bool>(this, "ULevelStreaming.RequestLevel", PersistentWorld, bAllowLevelLoadRequests, bBlockOnLoad, bAreUnloadsPending); }
	void SetLevelVisibility(bool bVisible, bool bIsLowMemory) { NativeCall<void, bool, bool>(this, "ULevelStreaming.SetLevelVisibility", bVisible, bIsLowMemory); }
	void SetLoadedLevel(ULevel * Level) { NativeCall<void, ULevel *>(this, "ULevelStreaming.SetLoadedLevel", Level); }
	void SetWorldAssetByPackageName(FName InPackageName) { NativeCall<void, FName>(this, "ULevelStreaming.SetWorldAssetByPackageName", InPackageName); }
	bool ShouldBeVisible(const FVector * ViewLocation) { return NativeCall<bool, const FVector *>(this, "ULevelStreaming.ShouldBeVisible", ViewLocation); }
};

