#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ADynamicCaptureManager : AActor
{
	char __padding[0x628L];
	FString& SavePathField() { return *GetNativePointerField<FString*>(this, "ADynamicCaptureManager.SavePath"); }
	bool& bUseMapRelativeSavingField() { return *GetNativePointerField<bool*>(this, "ADynamicCaptureManager.bUseMapRelativeSaving"); }
	TArray<FStringAssetReference>& CapturesDataField() { return *GetNativePointerField<TArray<FStringAssetReference>*>(this, "ADynamicCaptureManager.CapturesData"); }
	FieldArray<FOverrideCaptureData, 32> OverridenCapturesDataField() { return {this, "ADynamicCaptureManager.OverridenCapturesData"}; }
	bool& bIsMasterSkylightOverriderField() { return *GetNativePointerField<bool*>(this, "ADynamicCaptureManager.bIsMasterSkylightOverrider"); }
	FString& OverrideMasterSkylightCapturesPathField() { return *GetNativePointerField<FString*>(this, "ADynamicCaptureManager.OverrideMasterSkylightCapturesPath"); }
	TArray<FOverrideCaptureData>& OverrideMasterSkylightDataField() { return *GetNativePointerField<TArray<FOverrideCaptureData>*>(this, "ADynamicCaptureManager.OverrideMasterSkylightData"); }
	float& CaptureIntervalField() { return *GetNativePointerField<float*>(this, "ADynamicCaptureManager.CaptureInterval"); }
	float& PreviewMatineeTimeField() { return *GetNativePointerField<float*>(this, "ADynamicCaptureManager.PreviewMatineeTime"); }
	bool& bFlushDataField() { return *GetNativePointerField<bool*>(this, "ADynamicCaptureManager.bFlushData"); }
	int& LoadedSnapshotIndex0Field() { return *GetNativePointerField<int*>(this, "ADynamicCaptureManager.LoadedSnapshotIndex0"); }
	int& LoadedSnapshotIndex1Field() { return *GetNativePointerField<int*>(this, "ADynamicCaptureManager.LoadedSnapshotIndex1"); }
	UDynamicCaptureData * LoadedSnapshot0Field() { return GetNativePointerField<UDynamicCaptureData *>(this, "ADynamicCaptureManager.LoadedSnapshot0"); }
	UDynamicCaptureData * LoadedSnapshot1Field() { return GetNativePointerField<UDynamicCaptureData *>(this, "ADynamicCaptureManager.LoadedSnapshot1"); }
	UDynamicCaptureData * OverrideLoadedSnapshot0Field() { return GetNativePointerField<UDynamicCaptureData *>(this, "ADynamicCaptureManager.OverrideLoadedSnapshot0"); }
	UDynamicCaptureData * OverrideLoadedSnapshot1Field() { return GetNativePointerField<UDynamicCaptureData *>(this, "ADynamicCaptureManager.OverrideLoadedSnapshot1"); }
	TArray<FStringAssetReference>& OldCapturesDataField() { return *GetNativePointerField<TArray<FStringAssetReference>*>(this, "ADynamicCaptureManager.OldCapturesData"); }
	TArray<FStringAssetReference>& StreamingSnapshotsField() { return *GetNativePointerField<TArray<FStringAssetReference>*>(this, "ADynamicCaptureManager.StreamingSnapshots"); }
	TWeakObjectPtr<ADynamicCaptureManager>& PreviousOverridenManagerField() { return *GetNativePointerField<TWeakObjectPtr<ADynamicCaptureManager>*>(this, "ADynamicCaptureManager.PreviousOverridenManager"); }
	float& StartStreamingTimeField() { return *GetNativePointerField<float*>(this, "ADynamicCaptureManager.StartStreamingTime"); }
	bool& bForceDataUploadField() { return *GetNativePointerField<bool*>(this, "ADynamicCaptureManager.bForceDataUpload"); }
	bool& bStillNeedsRealtimeField() { return *GetNativePointerField<bool*>(this, "ADynamicCaptureManager.bStillNeedsRealtime"); }
	bool& bIsCapturingField() { return *GetNativePointerField<bool*>(this, "ADynamicCaptureManager.bIsCapturing"); }
	int& CaptureIndexField() { return *GetNativePointerField<int*>(this, "ADynamicCaptureManager.CaptureIndex"); }
	int& TotalCapturesCountField() { return *GetNativePointerField<int*>(this, "ADynamicCaptureManager.TotalCapturesCount"); }
	TWeakObjectPtr<ADynamicCaptureManager>& MasterManagerField() { return *GetNativePointerField<TWeakObjectPtr<ADynamicCaptureManager>*>(this, "ADynamicCaptureManager.MasterManager"); }
	float& PreCaptureInterPositionField() { return *GetNativePointerField<float*>(this, "ADynamicCaptureManager.PreCaptureInterPosition"); }
	bool& bReCaptureField() { return *GetNativePointerField<bool*>(this, "ADynamicCaptureManager.bReCapture"); }
	TArray<USkyLightComponent *>& EditorSkyLightsField() { return *GetNativePointerField<TArray<USkyLightComponent *>*>(this, "ADynamicCaptureManager.EditorSkyLights"); }
	FStreamableManager& StreamableManagerField() { return *GetNativePointerField<FStreamableManager*>(this, "ADynamicCaptureManager.StreamableManager"); }

	// Functions

	static void AddReferencedObjects(UObject * InThis, FReferenceCollector * Collector) { NativeCall<void, UObject *, FReferenceCollector *>(nullptr, "ADynamicCaptureManager.AddReferencedObjects", InThis, Collector); }
	void AsyncLoadComplete(const FStringAssetReference * InAssetReference) { NativeCall<void, const FStringAssetReference *>(this, "ADynamicCaptureManager.AsyncLoadComplete", InAssetReference); }
	void BeginPlay() { NativeCall<void>(this, "ADynamicCaptureManager.BeginPlay"); }
	void Destroyed() { NativeCall<void>(this, "ADynamicCaptureManager.Destroyed"); }
	void EndPlay(const EEndPlayReason::Type EndPlayReason) { NativeCall<void, const EEndPlayReason::Type>(this, "ADynamicCaptureManager.EndPlay", EndPlayReason); }
	void ForceReUploadAll() { NativeCall<void>(this, "ADynamicCaptureManager.ForceReUploadAll"); }
	static ADynamicCaptureManager * ForceReUploadAllManagers(UWorld * World) { return NativeCall<ADynamicCaptureManager *, UWorld *>(nullptr, "ADynamicCaptureManager.ForceReUploadAllManagers", World); }
	void ForceUpdateAll() { NativeCall<void>(this, "ADynamicCaptureManager.ForceUpdateAll"); }
	static ADynamicCaptureManager * ForceUpdateAllManagers(UWorld * World) { return NativeCall<ADynamicCaptureManager *, UWorld *>(nullptr, "ADynamicCaptureManager.ForceUpdateAllManagers", World); }
	static ADynamicCaptureManager * GetMasterManager(UWorld * World) { return NativeCall<ADynamicCaptureManager *, UWorld *>(nullptr, "ADynamicCaptureManager.GetMasterManager", World); }
	static ADynamicCaptureManager * GetOverrideMasterSkylightManager(UWorld * World) { return NativeCall<ADynamicCaptureManager *, UWorld *>(nullptr, "ADynamicCaptureManager.GetOverrideMasterSkylightManager", World); }
	float GetSnapshotBrightness(int SnapshotIndex) { return NativeCall<float, int>(this, "ADynamicCaptureManager.GetSnapshotBrightness", SnapshotIndex); }
	FOverrideCaptureData * GetSnapshotOverride(int SnapshotIndex) { return NativeCall<FOverrideCaptureData *, int>(this, "ADynamicCaptureManager.GetSnapshotOverride", SnapshotIndex); }
	void InitializeAssetsList(bool bCheckForDifferences) { NativeCall<void, bool>(this, "ADynamicCaptureManager.InitializeAssetsList", bCheckForDifferences); }
	static bool IsCapturing(UWorld * World) { return NativeCall<bool, UWorld *>(nullptr, "ADynamicCaptureManager.IsCapturing", World); }
	bool LoadSnapshot(int SnapshotIndex, FStringAssetReference * StringAssetOverride) { return NativeCall<bool, int, FStringAssetReference *>(this, "ADynamicCaptureManager.LoadSnapshot", SnapshotIndex, StringAssetOverride); }
	void LoadSnapshotSync(int SnapshotIndex) { NativeCall<void, int>(this, "ADynamicCaptureManager.LoadSnapshotSync", SnapshotIndex); }
	void PostInitializeComponents() { NativeCall<void>(this, "ADynamicCaptureManager.PostInitializeComponents"); }
	void PostLoad() { NativeCall<void>(this, "ADynamicCaptureManager.PostLoad"); }
	void Tick(float DeltaTime) { NativeCall<void, float>(this, "ADynamicCaptureManager.Tick", DeltaTime); }
	void UpdateCaptures(bool bUpdatelockedSkyOnly) { NativeCall<void, bool>(this, "ADynamicCaptureManager.UpdateCaptures", bUpdatelockedSkyOnly); }
	void UpdateCapturesTimer() { NativeCall<void>(this, "ADynamicCaptureManager.UpdateCapturesTimer"); }
	void UploadSnapshot(UDynamicCaptureData * Snapshot0, UDynamicCaptureData * Snapshot1, UDynamicCaptureData * OverrideSnapshot0, UDynamicCaptureData * OverrideSnapshot1, bool JustLoaded, bool bUpdatelockedSkyOnly) { NativeCall<void, UDynamicCaptureData *, UDynamicCaptureData *, UDynamicCaptureData *, UDynamicCaptureData *, bool, bool>(this, "ADynamicCaptureManager.UploadSnapshot", Snapshot0, Snapshot1, OverrideSnapshot0, OverrideSnapshot1, JustLoaded, bUpdatelockedSkyOnly); }
};

