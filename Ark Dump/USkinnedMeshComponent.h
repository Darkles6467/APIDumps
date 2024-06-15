#pragma once

#include "BaseDeclarations.h"
#include "UMeshComponent.h"
#include "FStreamingTexturePrimitiveInfo.h"
#include "FComponentSocketDescription.h"
#include "FActiveVertexAnim.h"
#include "FOverlapInfo.h"

struct USkinnedMeshComponent : UMeshComponent
{
	char __padding[0x120L];
	TArray<FTransform>& SpaceBasesField() { return *GetNativePointerField<TArray<FTransform>*>(this, "USkinnedMeshComponent.SpaceBases"); }
	TArray<int>& MasterBoneMapField() { return *GetNativePointerField<TArray<int>*>(this, "USkinnedMeshComponent.MasterBoneMap"); }
	TArray<FActiveVertexAnim>& ActiveVertexAnimsField() { return *GetNativePointerField<TArray<FActiveVertexAnim>*>(this, "USkinnedMeshComponent.ActiveVertexAnims"); }
	UPhysicsAsset * PhysicsAssetOverrideField() { return GetNativePointerField<UPhysicsAsset *>(this, "USkinnedMeshComponent.PhysicsAssetOverride"); }
	int& ForcedLodModelField() { return *GetNativePointerField<int*>(this, "USkinnedMeshComponent.ForcedLodModel"); }
	int& MinLodModelField() { return *GetNativePointerField<int*>(this, "USkinnedMeshComponent.MinLodModel"); }
	int& PredictedLODLevelField() { return *GetNativePointerField<int*>(this, "USkinnedMeshComponent.PredictedLODLevel"); }
	int& OldPredictedLODLevelField() { return *GetNativePointerField<int*>(this, "USkinnedMeshComponent.OldPredictedLODLevel"); }
	float& MaxDistanceFactorField() { return *GetNativePointerField<float*>(this, "USkinnedMeshComponent.MaxDistanceFactor"); }
	float& ShadowedRecentlyRenderedBoundsScaleMultiplierField() { return *GetNativePointerField<float*>(this, "USkinnedMeshComponent.ShadowedRecentlyRenderedBoundsScaleMultiplier"); }
	TArray<FSkelMeshComponentLODInfo>& LODInfoField() { return *GetNativePointerField<TArray<FSkelMeshComponentLODInfo>*>(this, "USkinnedMeshComponent.LODInfo"); }
	float& StreamingDistanceMultiplierField() { return *GetNativePointerField<float*>(this, "USkinnedMeshComponent.StreamingDistanceMultiplier"); }
	FColor& WireframeColorField() { return *GetNativePointerField<FColor*>(this, "USkinnedMeshComponent.WireframeColor"); }
	float& ForceTickPoseWithinRangeSquaredField() { return *GetNativePointerField<float*>(this, "USkinnedMeshComponent.ForceTickPoseWithinRangeSquared"); }
	TArray<unsigned char>& BoneVisibilityStatesField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "USkinnedMeshComponent.BoneVisibilityStates"); }
	TEnumAsByte<enum EMeshComponentUpdateFlag::Type>& MeshComponentUpdateFlagField() { return *GetNativePointerField<TEnumAsByte<enum EMeshComponentUpdateFlag::Type>*>(this, "USkinnedMeshComponent.MeshComponentUpdateFlag"); }
	float& ProgressiveDrawingFractionField() { return *GetNativePointerField<float*>(this, "USkinnedMeshComponent.ProgressiveDrawingFraction"); }
	char& CustomSortAlternateIndexModeField() { return *GetNativePointerField<char*>(this, "USkinnedMeshComponent.CustomSortAlternateIndexMode"); }
	FBoxSphereBounds& CachedLocalBoundsField() { return *GetNativePointerField<FBoxSphereBounds*>(this, "USkinnedMeshComponent.CachedLocalBounds"); }
	bool& bCachedLocalBoundsUpToDateField() { return *GetNativePointerField<bool*>(this, "USkinnedMeshComponent.bCachedLocalBoundsUpToDate"); }
	bool& bEnableUpdateRateOptimizationsField() { return *GetNativePointerField<bool*>(this, "USkinnedMeshComponent.bEnableUpdateRateOptimizations"); }
	bool& bDisplayDebugUpdateRateOptimizationsField() { return *GetNativePointerField<bool*>(this, "USkinnedMeshComponent.bDisplayDebugUpdateRateOptimizations"); }
	float& SkippedTickDeltaTimeField() { return *GetNativePointerField<float*>(this, "USkinnedMeshComponent.SkippedTickDeltaTime"); }
	bool& bPoseTickedField() { return *GetNativePointerField<bool*>(this, "USkinnedMeshComponent.bPoseTicked"); }
	FAnimUpdateRateParameters& AnimUpdateRateParamsField() { return *GetNativePointerField<FAnimUpdateRateParameters*>(this, "USkinnedMeshComponent.AnimUpdateRateParams"); }

	// Functions

	unsigned __int64 GetResourceSize(EResourceSizeMode::Type Mode) { return NativeCall<unsigned __int64, EResourceSizeMode::Type>(this, "USkinnedMeshComponent.GetResourceSize", Mode); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "USkinnedMeshComponent.Serialize", Ar); }
	void UpdateMorphMaterialUsageOnProxy() { NativeCall<void>(this, "USkinnedMeshComponent.UpdateMorphMaterialUsageOnProxy"); }
	bool AllocateTransformData() { return NativeCall<bool>(this, "USkinnedMeshComponent.AllocateTransformData"); }
	void AnimUpdateRateSetParams(const bool * bRecentlyRendered, const float * MaxDistanceFactor, const bool * bPlayingRootMotion) { NativeCall<void, const bool *, const float *, const bool *>(this, "USkinnedMeshComponent.AnimUpdateRateSetParams", bRecentlyRendered, MaxDistanceFactor, bPlayingRootMotion); }
	void AnimUpdateRateTick() { NativeCall<void>(this, "USkinnedMeshComponent.AnimUpdateRateTick"); }
	FBoxSphereBounds * CalcBounds(FBoxSphereBounds * result, const FTransform * LocalToWorld) { return NativeCall<FBoxSphereBounds *, FBoxSphereBounds *, const FTransform *>(this, "USkinnedMeshComponent.CalcBounds", result, LocalToWorld); }
	FBoxSphereBounds * CalcMeshBound(FBoxSphereBounds * result, const FVector * RootOffset, bool UsePhysicsAsset, const FTransform * LocalToWorld) { return NativeCall<FBoxSphereBounds *, FBoxSphereBounds *, const FVector *, bool, const FTransform *>(this, "USkinnedMeshComponent.CalcMeshBound", result, RootOffset, UsePhysicsAsset, LocalToWorld); }
	void ComputeSkinnedPositions(TArray<FVector> * OutPositions) { NativeCall<void, TArray<FVector> *>(this, "USkinnedMeshComponent.ComputeSkinnedPositions", OutPositions); }
	void CreateRenderState_Concurrent() { NativeCall<void>(this, "USkinnedMeshComponent.CreateRenderState_Concurrent"); }
	void DeallocateTransformData() { NativeCall<void>(this, "USkinnedMeshComponent.DeallocateTransformData"); }
	void DestroyRenderState_Concurrent() { NativeCall<void>(this, "USkinnedMeshComponent.DestroyRenderState_Concurrent"); }
	bool DoesSocketExist(FName InSocketName) { return NativeCall<bool, FName>(this, "USkinnedMeshComponent.DoesSocketExist", InSocketName); }
	FName * FindClosestBone(FName * result, FVector TestLocation, FVector * BoneLocation, float IgnoreScale) { return NativeCall<FName *, FName *, FVector, FVector *, float>(this, "USkinnedMeshComponent.FindClosestBone", result, TestLocation, BoneLocation, IgnoreScale); }
	UMorphTarget * FindMorphTarget(FName MorphTargetName) { return NativeCall<UMorphTarget *, FName>(this, "USkinnedMeshComponent.FindMorphTarget", MorphTargetName); }
	TArray<FName> * GetAllSocketNames(TArray<FName> * result) { return NativeCall<TArray<FName> *, TArray<FName> *>(this, "USkinnedMeshComponent.GetAllSocketNames", result); }
	int GetBoneIndex(FName BoneName) { return NativeCall<int, FName>(this, "USkinnedMeshComponent.GetBoneIndex", BoneName); }
	FVector * GetBoneLocation(FVector * result, FName BoneName, int Space) { return NativeCall<FVector *, FVector *, FName, int>(this, "USkinnedMeshComponent.GetBoneLocation", result, BoneName, Space); }
	FMatrix * GetBoneMatrix(FMatrix * result, int BoneIdx) { return NativeCall<FMatrix *, FMatrix *, int>(this, "USkinnedMeshComponent.GetBoneMatrix", result, BoneIdx); }
	FName * GetBoneName(FName * result, int BoneIndex) { return NativeCall<FName *, FName *, int>(this, "USkinnedMeshComponent.GetBoneName", result, BoneIndex); }
	FQuat * GetBoneQuaternion(FQuat * result, FName BoneName, int Space) { return NativeCall<FQuat *, FQuat *, FName, int>(this, "USkinnedMeshComponent.GetBoneQuaternion", result, BoneName, Space); }
	FTransform * GetBoneTransform(FTransform * result, int BoneIdx) { return NativeCall<FTransform *, FTransform *, int>(this, "USkinnedMeshComponent.GetBoneTransform", result, BoneIdx); }
	FString * GetDetailedInfoInternal(FString * result) { return NativeCall<FString *, FString *>(this, "USkinnedMeshComponent.GetDetailedInfoInternal", result); }
	int GetNumBones() { return NativeCall<int>(this, "USkinnedMeshComponent.GetNumBones"); }
	int GetNumMaterials() { return NativeCall<int>(this, "USkinnedMeshComponent.GetNumMaterials"); }
	FName * GetParentBone(FName * result, FName BoneName) { return NativeCall<FName *, FName *, FName>(this, "USkinnedMeshComponent.GetParentBone", result, BoneName); }
	UPhysicsAsset * GetPhysicsAsset() { return NativeCall<UPhysicsAsset *>(this, "USkinnedMeshComponent.GetPhysicsAsset"); }
	FSkeletalMeshResource * GetSkeletalMeshResource() { return NativeCall<FSkeletalMeshResource *>(this, "USkinnedMeshComponent.GetSkeletalMeshResource"); }
	FVector * GetSkinnedVertexPosition(FVector * result, int VertexIndex) { return NativeCall<FVector *, FVector *, int>(this, "USkinnedMeshComponent.GetSkinnedVertexPosition", result, VertexIndex); }
	FName * GetSocketBoneName(FName * result, FName InSocketName) { return NativeCall<FName *, FName *, FName>(this, "USkinnedMeshComponent.GetSocketBoneName", result, InSocketName); }
	FTransform * GetSocketTransform(FTransform * result, FName InSocketName, ERelativeTransformSpace TransformSpace) { return NativeCall<FTransform *, FTransform *, FName, ERelativeTransformSpace>(this, "USkinnedMeshComponent.GetSocketTransform", result, InSocketName, TransformSpace); }
	void GetStreamingTextureInfo(TArray<FStreamingTexturePrimitiveInfo> * OutStreamingTextures) { NativeCall<void, TArray<FStreamingTexturePrimitiveInfo> *>(this, "USkinnedMeshComponent.GetStreamingTextureInfo", OutStreamingTextures); }
	void GetUsedMaterials(TArray<UMaterialInterface *> * OutMaterials) { NativeCall<void, TArray<UMaterialInterface *> *>(this, "USkinnedMeshComponent.GetUsedMaterials", OutMaterials); }
	FColor * GetVertexColor(FColor * result, int VertexIndex) { return NativeCall<FColor *, FColor *, int>(this, "USkinnedMeshComponent.GetVertexColor", result, VertexIndex); }
	bool HasAnySockets() { return NativeCall<bool>(this, "USkinnedMeshComponent.HasAnySockets"); }
	void HideBone(int BoneIndex, EPhysBodyOp PhysBodyOption) { NativeCall<void, int, EPhysBodyOp>(this, "USkinnedMeshComponent.HideBone", BoneIndex, PhysBodyOption); }
	void HideBoneByName(FName BoneName, EPhysBodyOp PhysBodyOption) { NativeCall<void, FName, EPhysBodyOp>(this, "USkinnedMeshComponent.HideBoneByName", BoneName, PhysBodyOption); }
	void InitLODInfos() { NativeCall<void>(this, "USkinnedMeshComponent.InitLODInfos"); }
	void InvalidateCachedBounds() { NativeCall<void>(this, "USkinnedMeshComponent.InvalidateCachedBounds"); }
	bool IsBoneHidden(int BoneIndex) { return NativeCall<bool, int>(this, "USkinnedMeshComponent.IsBoneHidden", BoneIndex); }
	bool IsBoneHiddenByName(FName BoneName) { return NativeCall<bool, FName>(this, "USkinnedMeshComponent.IsBoneHiddenByName", BoneName); }
	void OnRegister() { NativeCall<void>(this, "USkinnedMeshComponent.OnRegister"); }
	void OnUnregister() { NativeCall<void>(this, "USkinnedMeshComponent.OnUnregister"); }
	void QuerySupportedSockets(TArray<FComponentSocketDescription> * OutSockets) { NativeCall<void, TArray<FComponentSocketDescription> *>(this, "USkinnedMeshComponent.QuerySupportedSockets", OutSockets); }
	void RefreshSlaveComponents() { NativeCall<void>(this, "USkinnedMeshComponent.RefreshSlaveComponents"); }
	void SendRenderDynamicData_Concurrent() { NativeCall<void>(this, "USkinnedMeshComponent.SendRenderDynamicData_Concurrent"); }
	void SetMasterPoseComponent(USkinnedMeshComponent * NewMasterBoneComponent) { NativeCall<void, USkinnedMeshComponent *>(this, "USkinnedMeshComponent.SetMasterPoseComponent", NewMasterBoneComponent); }
	void SetPhysicsAsset(UPhysicsAsset * InPhysicsAsset, bool bForceReInit) { NativeCall<void, UPhysicsAsset *, bool>(this, "USkinnedMeshComponent.SetPhysicsAsset", InPhysicsAsset, bForceReInit); }
	void SetSkeletalMesh(USkeletalMesh * InSkelMesh) { NativeCall<void, USkeletalMesh *>(this, "USkinnedMeshComponent.SetSkeletalMesh", InSkelMesh); }
	bool ShouldTickPose() { return NativeCall<bool>(this, "USkinnedMeshComponent.ShouldTickPose"); }
	bool ShouldUpdateBoneVisibility() { return NativeCall<bool>(this, "USkinnedMeshComponent.ShouldUpdateBoneVisibility"); }
	bool ShouldUpdateTransform(bool bLODHasChanged) { return NativeCall<bool, bool>(this, "USkinnedMeshComponent.ShouldUpdateTransform", bLODHasChanged); }
	void TickUpdateRate() { NativeCall<void>(this, "USkinnedMeshComponent.TickUpdateRate"); }
	void TransformFromBoneSpace(FName BoneName, FVector InPosition, FRotator InRotation, FVector * OutPosition, FRotator * OutRotation) { NativeCall<void, FName, FVector, FRotator, FVector *, FRotator *>(this, "USkinnedMeshComponent.TransformFromBoneSpace", BoneName, InPosition, InRotation, OutPosition, OutRotation); }
	void TransformToBoneSpace(FName BoneName, FVector InPosition, FRotator InRotation, FVector * OutPosition, FRotator * OutRotation) { NativeCall<void, FName, FVector, FRotator, FVector *, FRotator *>(this, "USkinnedMeshComponent.TransformToBoneSpace", BoneName, InPosition, InRotation, OutPosition, OutRotation); }
	void UnHideBone(int BoneIndex) { NativeCall<void, int>(this, "USkinnedMeshComponent.UnHideBone", BoneIndex); }
	void UnHideBoneByName(FName BoneName) { NativeCall<void, FName>(this, "USkinnedMeshComponent.UnHideBoneByName", BoneName); }
	static TArray<FActiveVertexAnim> * UpdateActiveVertexAnims(TArray<FActiveVertexAnim> * result, const USkeletalMesh * InSkeletalMesh, const TMap<FName,float,FDefaultSetAllocator,TDefaultMapKeyFuncs<FName,float,0> > * MorphCurveAnims, const TArray<FActiveVertexAnim> * ActiveAnims) { return NativeCall<TArray<FActiveVertexAnim> *, TArray<FActiveVertexAnim> *, const USkeletalMesh *, const TMap<FName,float,FDefaultSetAllocator,TDefaultMapKeyFuncs<FName,float,0> > *, const TArray<FActiveVertexAnim> *>(nullptr, "USkinnedMeshComponent.UpdateActiveVertexAnims", result, InSkeletalMesh, MorphCurveAnims, ActiveAnims); }
	bool UpdateLODStatus() { return NativeCall<bool>(this, "USkinnedMeshComponent.UpdateLODStatus"); }
	void UpdateMasterBoneMap() { NativeCall<void>(this, "USkinnedMeshComponent.UpdateMasterBoneMap"); }
	void UpdateOverlaps(const TArray<FOverlapInfo> * PendingOverlaps, bool bDoNotifies, const TArray<FOverlapInfo> * OverlapsAtEndLocation) { NativeCall<void, const TArray<FOverlapInfo> *, bool, const TArray<FOverlapInfo> *>(this, "USkinnedMeshComponent.UpdateOverlaps", PendingOverlaps, bDoNotifies, OverlapsAtEndLocation); }
	void UpdateSlaveComponent() { NativeCall<void>(this, "USkinnedMeshComponent.UpdateSlaveComponent"); }
};

