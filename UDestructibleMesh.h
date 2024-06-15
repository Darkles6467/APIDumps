#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct USkeletalMesh : UObject
{
	char __padding[0x2a0L];
	TSharedPtr<FSkeletalMeshResource,0>& ImportedResourceField() { return *GetNativePointerField<TSharedPtr<FSkeletalMeshResource,0>*>(this, "USkeletalMesh.ImportedResource"); }
	USkeleton * SkeletonField() { return GetNativePointerField<USkeleton *>(this, "USkeletalMesh.Skeleton"); }
	FBoxSphereBounds& BoundsField() { return *GetNativePointerField<FBoxSphereBounds*>(this, "USkeletalMesh.Bounds"); }
	float& CachedInitialSphereRadiusBoundsField() { return *GetNativePointerField<float*>(this, "USkeletalMesh.CachedInitialSphereRadiusBounds"); }
	TArray<FSkeletalMaterial>& MaterialsField() { return *GetNativePointerField<TArray<FSkeletalMaterial>*>(this, "USkeletalMesh.Materials"); }
	FName& CloseToGroundBoneNameField() { return *GetNativePointerField<FName*>(this, "USkeletalMesh.CloseToGroundBoneName"); }
	TArray<FGroundBoneChain>& GroundBonesChainsField() { return *GetNativePointerField<TArray<FGroundBoneChain>*>(this, "USkeletalMesh.GroundBonesChains"); }
	float& DefaultTraceLengthField() { return *GetNativePointerField<float*>(this, "USkeletalMesh.DefaultTraceLength"); }
	float& TraceStartOffsetField() { return *GetNativePointerField<float*>(this, "USkeletalMesh.TraceStartOffset"); }
	float& InterpolationSpeedField() { return *GetNativePointerField<float*>(this, "USkeletalMesh.InterpolationSpeed"); }
	float& InterpolationSpeedUpwardField() { return *GetNativePointerField<float*>(this, "USkeletalMesh.InterpolationSpeedUpward"); }
	TArray<FBoneMirrorInfo>& SkelMirrorTableField() { return *GetNativePointerField<TArray<FBoneMirrorInfo>*>(this, "USkeletalMesh.SkelMirrorTable"); }
	TEnumAsByte<enum EAxis::Type>& SkelMirrorAxisField() { return *GetNativePointerField<TEnumAsByte<enum EAxis::Type>*>(this, "USkeletalMesh.SkelMirrorAxis"); }
	TEnumAsByte<enum EAxis::Type>& SkelMirrorFlipAxisField() { return *GetNativePointerField<TEnumAsByte<enum EAxis::Type>*>(this, "USkeletalMesh.SkelMirrorFlipAxis"); }
	TArray<FSkeletalMeshLODInfo>& LODInfoField() { return *GetNativePointerField<TArray<FSkeletalMeshLODInfo>*>(this, "USkeletalMesh.LODInfo"); }
	int& ConsoleDropLODNewTriangleCountField() { return *GetNativePointerField<int*>(this, "USkeletalMesh.ConsoleDropLODNewTriangleCount"); }
	int& CurrentStreamedInSizeField() { return *GetNativePointerField<int*>(this, "USkeletalMesh.CurrentStreamedInSize"); }
	bool& bStreamInStateField() { return *GetNativePointerField<bool*>(this, "USkeletalMesh.bStreamInState"); }
	bool& bStreamInRequestField() { return *GetNativePointerField<bool*>(this, "USkeletalMesh.bStreamInRequest"); }
	int& StreamingSizeField() { return *GetNativePointerField<int*>(this, "USkeletalMesh.StreamingSize"); }
	unsigned __int64& RequestLoadField() { return *GetNativePointerField<unsigned __int64*>(this, "USkeletalMesh.RequestLoad"); }
	FThreadSafeCounter& PendingLODRequestField() { return *GetNativePointerField<FThreadSafeCounter*>(this, "USkeletalMesh.PendingLODRequest"); }
	long double& LastStreamChangeCallField() { return *GetNativePointerField<long double*>(this, "USkeletalMesh.LastStreamChangeCall"); }
	bool& bForceStreamingLODsField() { return *GetNativePointerField<bool*>(this, "USkeletalMesh.bForceStreamingLODs"); }
	UPhysicsAsset * PhysicsAssetField() { return GetNativePointerField<UPhysicsAsset *>(this, "USkeletalMesh.PhysicsAsset"); }
	float& StreamingDistanceMultiplierField() { return *GetNativePointerField<float*>(this, "USkeletalMesh.StreamingDistanceMultiplier"); }
	TArray<FMorphTargetMap>& MorphTargetTable_DEPRECATEDField() { return *GetNativePointerField<TArray<FMorphTargetMap>*>(this, "USkeletalMesh.MorphTargetTable_DEPRECATED"); }
	TArray<UMorphTarget *>& MorphTargetsField() { return *GetNativePointerField<TArray<UMorphTarget *>*>(this, "USkeletalMesh.MorphTargets"); }
	FRenderCommandFence& ReleaseResourcesFenceField() { return *GetNativePointerField<FRenderCommandFence*>(this, "USkeletalMesh.ReleaseResourcesFence"); }
	FReferenceSkeleton& RefSkeletonField() { return *GetNativePointerField<FReferenceSkeleton*>(this, "USkeletalMesh.RefSkeleton"); }
	TArray<FMatrix>& RefBasesInvMatrixField() { return *GetNativePointerField<TArray<FMatrix>*>(this, "USkeletalMesh.RefBasesInvMatrix"); }
	FRotator& RotOffsetField() { return *GetNativePointerField<FRotator*>(this, "USkeletalMesh.RotOffset"); }
	FVector& LocOffsetField() { return *GetNativePointerField<FVector*>(this, "USkeletalMesh.LocOffset"); }
	FVector& ScaleMultiplierField() { return *GetNativePointerField<FVector*>(this, "USkeletalMesh.ScaleMultiplier"); }
	TArray<FClothingAssetData>& ClothingAssetsField() { return *GetNativePointerField<TArray<FClothingAssetData>*>(this, "USkeletalMesh.ClothingAssets"); }
	FSkeletalMeshSourceData * SourceDataField() { return GetNativePointerField<FSkeletalMeshSourceData *>(this, "USkeletalMesh.SourceData"); }
	TArray<float>& CachedStreamingTextureFactorsField() { return *GetNativePointerField<TArray<float>*>(this, "USkeletalMesh.CachedStreamingTextureFactors"); }
	bool& bBuiltSocketMapField() { return *GetNativePointerField<bool*>(this, "USkeletalMesh.bBuiltSocketMap"); }

	// Functions

	void BeginDestroy() { NativeCall<void>(this, "USkeletalMesh.BeginDestroy"); }
	void CalculateInvRefMatrices() { NativeCall<void>(this, "USkeletalMesh.CalculateInvRefMatrices"); }
	long double Dyn_GetLastRenderTime() { return NativeCall<long double>(this, "USkeletalMesh.Dyn_GetLastRenderTime"); }
	float Dyn_GetSizePriority() { return NativeCall<float>(this, "USkeletalMesh.Dyn_GetSizePriority"); }
	int Dyn_GetStreamingSize() { return NativeCall<int>(this, "USkeletalMesh.Dyn_GetStreamingSize"); }
	bool Dyn_IsFullyStreamedIn() { return NativeCall<bool>(this, "USkeletalMesh.Dyn_IsFullyStreamedIn"); }
	bool Dyn_IsStreamed() { return NativeCall<bool>(this, "USkeletalMesh.Dyn_IsStreamed"); }
	void Dyn_SetStreaming(bool bShouldStream, bool bForceStatusChange) { NativeCall<void, bool, bool>(this, "USkeletalMesh.Dyn_SetStreaming", bShouldStream, bForceStatusChange); }
	UMorphTarget * FindMorphTarget(FName MorphTargetName) { return NativeCall<UMorphTarget *, FName>(this, "USkeletalMesh.FindMorphTarget", MorphTargetName); }
	void GetAssetRegistryTags(TArray<UObject::FAssetRegistryTag> * OutTags) { NativeCall<void, TArray<UObject::FAssetRegistryTag> *>(this, "USkeletalMesh.GetAssetRegistryTags", OutTags); }
	FMatrix * GetComposedRefPoseMatrix(FMatrix * result, FName InBoneName) { return NativeCall<FMatrix *, FMatrix *, FName>(this, "USkeletalMesh.GetComposedRefPoseMatrix", result, InBoneName); }
	FString * GetDesc(FString * result) { return NativeCall<FString *, FString *>(this, "USkeletalMesh.GetDesc", result); }
	FString * GetDetailedInfoInternal(FString * result) { return NativeCall<FString *, FString *>(this, "USkeletalMesh.GetDetailedInfoInternal", result); }
	long double GetMyLastRenderTime() { return NativeCall<long double>(this, "USkeletalMesh.GetMyLastRenderTime"); }
	FMatrix * GetRefPoseMatrix(FMatrix * result, int BoneIndex) { return NativeCall<FMatrix *, FMatrix *, int>(this, "USkeletalMesh.GetRefPoseMatrix", result, BoneIndex); }
	float GetStreamingTextureFactor(int RequestedUVIndex) { return NativeCall<float, int>(this, "USkeletalMesh.GetStreamingTextureFactor", RequestedUVIndex); }
	void InitMorphTargets() { NativeCall<void>(this, "USkeletalMesh.InitMorphTargets"); }
	void InitializeLODData() { NativeCall<void>(this, "USkeletalMesh.InitializeLODData"); }
	bool IsReadyForFinishDestroy() { return NativeCall<bool>(this, "USkeletalMesh.IsReadyForFinishDestroy"); }
	void MoveDeprecatedShadowFlagToMaterials() { NativeCall<void>(this, "USkeletalMesh.MoveDeprecatedShadowFlagToMaterials"); }
	void PostLoad() { NativeCall<void>(this, "USkeletalMesh.PostLoad"); }
	void ReleaseCPUResources() { NativeCall<void>(this, "USkeletalMesh.ReleaseCPUResources"); }
	void ResetStreamingState() { NativeCall<void>(this, "USkeletalMesh.ResetStreamingState"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "USkeletalMesh.Serialize", Ar); }
	void SetLODStreaming(long double CurrentAppTime) { NativeCall<void, long double>(this, "USkeletalMesh.SetLODStreaming", CurrentAppTime); }
	bool UpdateStreaming() { return NativeCall<bool>(this, "USkeletalMesh.UpdateStreaming"); }
};

struct UDestructibleMesh : USkeletalMesh
{
	char __padding[0xb0L];
	FDestructibleParameters& DefaultDestructibleParametersField() { return *GetNativePointerField<FDestructibleParameters*>(this, "UDestructibleMesh.DefaultDestructibleParameters"); }
	UPhysicalMaterial * DestructiblePhysicalMaterial_DEPRECATEDField() { return GetNativePointerField<UPhysicalMaterial *>(this, "UDestructibleMesh.DestructiblePhysicalMaterial_DEPRECATED"); }
	TEnumAsByte<enum ESleepFamily>& PhysicsSleepFamilyField() { return *GetNativePointerField<TEnumAsByte<enum ESleepFamily>*>(this, "UDestructibleMesh.PhysicsSleepFamily"); }
	TArray<FFractureEffect>& FractureEffectsField() { return *GetNativePointerField<TArray<FFractureEffect>*>(this, "UDestructibleMesh.FractureEffects"); }
	TWeakObjectPtr<UStaticMesh>& ParentStaticMeshField() { return *GetNativePointerField<TWeakObjectPtr<UStaticMesh>*>(this, "UDestructibleMesh.ParentStaticMesh"); }

	// Functions

	long double Dyn_GetLastRenderTime() { return NativeCall<long double>(this, "UDestructibleMesh.Dyn_GetLastRenderTime"); }
	float Dyn_GetSizePriority() { return NativeCall<float>(this, "UDestructibleMesh.Dyn_GetSizePriority"); }
	void PostLoad() { NativeCall<void>(this, "UDestructibleMesh.PostLoad"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UDestructibleMesh.Serialize", Ar); }
	void SetLODStreaming(long double CurrentAppTime) { NativeCall<void, long double>(this, "UDestructibleMesh.SetLODStreaming", CurrentAppTime); }
};

