#pragma once

#include "BaseDeclarations.h"
#include "UStaticMeshComponent.h"
#include "UMeshComponent.h"
#include "UPrimitiveComponent.h"
#include "USceneComponent.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FGraphEvent.h"
#include "FExpandedUniqueOctreeBuilder.h"
#include "UDamageType.h"
#include "FLifetimeProperty.h"
#include "FMultiUseEntry.h"

struct UInstancedStaticMeshComponent : UStaticMeshComponent
{
	char __padding[0x120L];
	TArray<FInstancedStaticMeshInstanceData>& PerInstanceSMDataField() { return *GetNativePointerField<TArray<FInstancedStaticMeshInstanceData>*>(this, "UInstancedStaticMeshComponent.PerInstanceSMData"); }
	int& InstancingRandomSeedField() { return *GetNativePointerField<int*>(this, "UInstancedStaticMeshComponent.InstancingRandomSeed"); }
	int& InstanceStartCullDistanceField() { return *GetNativePointerField<int*>(this, "UInstancedStaticMeshComponent.InstanceStartCullDistance"); }
	int& InstanceEndCullDistanceField() { return *GetNativePointerField<int*>(this, "UInstancedStaticMeshComponent.InstanceEndCullDistance"); }
	TArray<int>& InstanceReorderTableField() { return *GetNativePointerField<TArray<int>*>(this, "UInstancedStaticMeshComponent.InstanceReorderTable"); }
	TArray<int>& InstanceReorderTableBulkField() { return *GetNativePointerField<TArray<int>*>(this, "UInstancedStaticMeshComponent.InstanceReorderTableBulk"); }
	TArray<int>& RemovedInstancesField() { return *GetNativePointerField<TArray<int>*>(this, "UInstancedStaticMeshComponent.RemovedInstances"); }
	float& LargestSingleBoundsField() { return *GetNativePointerField<float*>(this, "UInstancedStaticMeshComponent.LargestSingleBounds"); }
	UDestructibleMesh * DestroyedMeshField() { return GetNativePointerField<UDestructibleMesh *>(this, "UInstancedStaticMeshComponent.DestroyedMesh"); }
	float& OverrideWalkableFloorZField() { return *GetNativePointerField<float*>(this, "UInstancedStaticMeshComponent.OverrideWalkableFloorZ"); }
	float& PlayerOverrideWalkableFloorZField() { return *GetNativePointerField<float*>(this, "UInstancedStaticMeshComponent.PlayerOverrideWalkableFloorZ"); }
	float& ScaleMaxXField() { return *GetNativePointerField<float*>(this, "UInstancedStaticMeshComponent.ScaleMaxX"); }
	float& ScaleMinXField() { return *GetNativePointerField<float*>(this, "UInstancedStaticMeshComponent.ScaleMinX"); }
	float& AttachedComponentScaleFactorField() { return *GetNativePointerField<float*>(this, "UInstancedStaticMeshComponent.AttachedComponentScaleFactor"); }
	float& MaxScaleForAttachedComponentField() { return *GetNativePointerField<float*>(this, "UInstancedStaticMeshComponent.MaxScaleForAttachedComponent"); }
	float& MinScaleForAttachedComponentField() { return *GetNativePointerField<float*>(this, "UInstancedStaticMeshComponent.MinScaleForAttachedComponent"); }
	float& MeshUnscaledBoundsField() { return *GetNativePointerField<float*>(this, "UInstancedStaticMeshComponent.MeshUnscaledBounds"); }
	TArray<physx::PxAggregate *>& AggregatesField() { return *GetNativePointerField<TArray<physx::PxAggregate *>*>(this, "UInstancedStaticMeshComponent.Aggregates"); }
	TArray<FBodyInstance *>& InstanceBodiesField() { return *GetNativePointerField<TArray<FBodyInstance *>*>(this, "UInstancedStaticMeshComponent.InstanceBodies"); }
	int& CurrentAttachedIndexField() { return *GetNativePointerField<int*>(this, "UInstancedStaticMeshComponent.CurrentAttachedIndex"); }
	TArray<unsigned int>& InstancesVisibilityField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "UInstancedStaticMeshComponent.InstancesVisibility"); }

	// Functions

	int AddInstance(const FTransform * InstanceTransform) { return NativeCall<int, const FTransform *>(this, "UInstancedStaticMeshComponent.AddInstance", InstanceTransform); }
	int AddInstanceWorldSpace(const FTransform * WorldTransform) { return NativeCall<int, const FTransform *>(this, "UInstancedStaticMeshComponent.AddInstanceWorldSpace", WorldTransform); }
	void BeginDestroy() { NativeCall<void>(this, "UInstancedStaticMeshComponent.BeginDestroy"); }
	FBoxSphereBounds * CalcBounds(FBoxSphereBounds * result, const FTransform * BoundTransform) { return NativeCall<FBoxSphereBounds *, FBoxSphereBounds *, const FTransform *>(this, "UInstancedStaticMeshComponent.CalcBounds", result, BoundTransform); }
	float CalcLargestBounds() { return NativeCall<float>(this, "UInstancedStaticMeshComponent.CalcLargestBounds"); }
	void CleanUpInstanceAttachedComponents() { NativeCall<void>(this, "UInstancedStaticMeshComponent.CleanUpInstanceAttachedComponents"); }
	void ClearAllInstanceBodies() { NativeCall<void>(this, "UInstancedStaticMeshComponent.ClearAllInstanceBodies"); }
	void ClearInstances() { NativeCall<void>(this, "UInstancedStaticMeshComponent.ClearInstances"); }
	void ConstructAttachedComponent(int index) { NativeCall<void, int>(this, "UInstancedStaticMeshComponent.ConstructAttachedComponent", index); }
	void CreateAllInstanceBodies() { NativeCall<void>(this, "UInstancedStaticMeshComponent.CreateAllInstanceBodies"); }
	void CreatePhysicsState() { NativeCall<void>(this, "UInstancedStaticMeshComponent.CreatePhysicsState"); }
	void DealDirectDamage(APlayerController * ForPC, float DamageAmount, TSubclassOf<UDamageType> DamageTypeClass, int hitBodyIndex) { NativeCall<void, APlayerController *, float, TSubclassOf<UDamageType>, int>(this, "UInstancedStaticMeshComponent.DealDirectDamage", ForPC, DamageAmount, DamageTypeClass, hitBodyIndex); }
	void DestroyPhysicsState() { NativeCall<void>(this, "UInstancedStaticMeshComponent.DestroyPhysicsState"); }
	bool DoCustomNavigableGeometryExport(FNavigableGeometryExport * GeomExport) { return NativeCall<bool, FNavigableGeometryExport *>(this, "UInstancedStaticMeshComponent.DoCustomNavigableGeometryExport", GeomExport); }
	FName * GetComponentInstanceDataType(FName * result) { return NativeCall<FName *, FName *>(this, "UInstancedStaticMeshComponent.GetComponentInstanceDataType", result); }
	int GetInstanceCount() { return NativeCall<int>(this, "UInstancedStaticMeshComponent.GetInstanceCount"); }
	bool GetInstanceTransform(int InstanceIndex, FTransform * OutInstanceTransform, bool bWorldSpace) { return NativeCall<bool, int, FTransform *, bool>(this, "UInstancedStaticMeshComponent.GetInstanceTransform", InstanceIndex, OutInstanceTransform, bWorldSpace); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "UInstancedStaticMeshComponent.GetLifetimeReplicatedProps", OutLifetimeProps); }
	void GetLightAndShadowMapMemoryUsage(int * LightMapMemoryUsage, int * ShadowMapMemoryUsage) { NativeCall<void, int *, int *>(this, "UInstancedStaticMeshComponent.GetLightAndShadowMapMemoryUsage", LightMapMemoryUsage, ShadowMapMemoryUsage); }
	void GetMultiUseEntries(APlayerController * ForPC, TArray<FMultiUseEntry> * MultiUseEntries, int hitBodyIndex) { NativeCall<void, APlayerController *, TArray<FMultiUseEntry> *, int>(this, "UInstancedStaticMeshComponent.GetMultiUseEntries", ForPC, MultiUseEntries, hitBodyIndex); }
	void GetNavigationPerInstanceTransforms(const FBox * AreaBox, TArray<FTransform> * InstanceData) { NativeCall<void, const FBox *, TArray<FTransform> *>(this, "UInstancedStaticMeshComponent.GetNavigationPerInstanceTransforms", AreaBox, InstanceData); }
	float GetOverrideWalkableZ(AActor * ForActor) { return NativeCall<float, AActor *>(this, "UInstancedStaticMeshComponent.GetOverrideWalkableZ", ForActor); }
	FVector * GetPositionOfInstance(FVector * result, int index) { return NativeCall<FVector *, FVector *, int>(this, "UInstancedStaticMeshComponent.GetPositionOfInstance", result, index); }
	unsigned __int64 GetResourceSize(EResourceSizeMode::Type Mode) { return NativeCall<unsigned __int64, EResourceSizeMode::Type>(this, "UInstancedStaticMeshComponent.GetResourceSize", Mode); }
	void InitInstanceBody(int InstanceIdx, FBodyInstance * InstanceBodyInstance) { NativeCall<void, int, FBodyInstance *>(this, "UInstancedStaticMeshComponent.InitInstanceBody", InstanceIdx, InstanceBodyInstance); }
	void LoadedComponentFromSaveGame() { NativeCall<void>(this, "UInstancedStaticMeshComponent.LoadedComponentFromSaveGame"); }
	void MulticastHideInstance_Implementation(int originalIndex, FVector HitDirection) { NativeCall<void, int, FVector>(this, "UInstancedStaticMeshComponent.MulticastHideInstance_Implementation", originalIndex, HitDirection); }
	void MulticastShowInstance_Implementation(int originalIndex) { NativeCall<void, int>(this, "UInstancedStaticMeshComponent.MulticastShowInstance_Implementation", originalIndex); }
	void MulticastShowInstances_Implementation(const TArray<int> * Indices, bool bMarkRenderStateDirty) { NativeCall<void, const TArray<int> *, bool>(this, "UInstancedStaticMeshComponent.MulticastShowInstances_Implementation", Indices, bMarkRenderStateDirty); }
	void OnComponentDestroyed() { NativeCall<void>(this, "UInstancedStaticMeshComponent.OnComponentDestroyed"); }
	void OnRegister() { NativeCall<void>(this, "UInstancedStaticMeshComponent.OnRegister"); }
	void OnUnregister() { NativeCall<void>(this, "UInstancedStaticMeshComponent.OnUnregister"); }
	void PostLoad() { NativeCall<void>(this, "UInstancedStaticMeshComponent.PostLoad"); }
	void PostNetReceive() { NativeCall<void>(this, "UInstancedStaticMeshComponent.PostNetReceive"); }
	void PreSave() { NativeCall<void>(this, "UInstancedStaticMeshComponent.PreSave"); }
	void ReceiveComponentDamage(float DamageAmount, const FDamageEvent * DamageEvent, AController * EventInstigator, AActor * DamageCauser) { NativeCall<void, float, const FDamageEvent *, AController *, AActor *>(this, "UInstancedStaticMeshComponent.ReceiveComponentDamage", DamageAmount, DamageEvent, EventInstigator, DamageCauser); }
	void RegisterAddedInstance() { NativeCall<void>(this, "UInstancedStaticMeshComponent.RegisterAddedInstance"); }
	bool RemoveInstance(int InstanceIndex, const FVector * HitDirection) { return NativeCall<bool, int, const FVector *>(this, "UInstancedStaticMeshComponent.RemoveInstance", InstanceIndex, HitDirection); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UInstancedStaticMeshComponent.Serialize", Ar); }
	void SetCullDistances(int StartCullDistance, int EndCullDistance) { NativeCall<void, int, int>(this, "UInstancedStaticMeshComponent.SetCullDistances", StartCullDistance, EndCullDistance); }
	void SetupNewInstanceData(FInstancedStaticMeshInstanceData * InOutNewInstanceData, int InInstanceIndex, const FTransform * InInstanceTransform) { NativeCall<void, FInstancedStaticMeshInstanceData *, int, const FTransform *>(this, "UInstancedStaticMeshComponent.SetupNewInstanceData", InOutNewInstanceData, InInstanceIndex, InInstanceTransform); }
	bool ShouldCreatePhysicsState() { return NativeCall<bool>(this, "UInstancedStaticMeshComponent.ShouldCreatePhysicsState"); }
	void ShowInstance(int originalIndex) { NativeCall<void, int>(this, "UInstancedStaticMeshComponent.ShowInstance", originalIndex); }
	bool TryMultiUse(APlayerController * ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController *, int, int>(this, "UInstancedStaticMeshComponent.TryMultiUse", ForPC, UseIndex, hitBodyIndex); }
	bool UpdateInstanceTransform(int InstanceIndex, const FTransform * NewInstanceTransform, bool bWorldSpace) { return NativeCall<bool, int, const FTransform *, bool>(this, "UInstancedStaticMeshComponent.UpdateInstanceTransform", InstanceIndex, NewInstanceTransform, bWorldSpace); }
	void MulticastHideInstance(int originalIndex, FVector HitDirection) { NativeCall<void, int, FVector>(this, "UInstancedStaticMeshComponent.MulticastHideInstance", originalIndex, HitDirection); }
	void MulticastShowInstance(int originalIndex) { NativeCall<void, int>(this, "UInstancedStaticMeshComponent.MulticastShowInstance", originalIndex); }
	void MulticastShowInstances(const TArray<int> * Indices, bool bMarkRenderStateDirty) { NativeCall<void, const TArray<int> *, bool>(this, "UInstancedStaticMeshComponent.MulticastShowInstances", Indices, bMarkRenderStateDirty); }
};

struct UHierarchicalInstancedStaticMeshComponent : UInstancedStaticMeshComponent
{
	char __padding[0x80L];
	FieldArray<_BYTE, 8> ClusterTreePtrField() { return {this, "UHierarchicalInstancedStaticMeshComponent.ClusterTreePtr"}; }
	TArray<int>& SortedInstancesField() { return *GetNativePointerField<TArray<int>*>(this, "UHierarchicalInstancedStaticMeshComponent.SortedInstances"); }
	TArray<int>& SortedInstancesBulkField() { return *GetNativePointerField<TArray<int>*>(this, "UHierarchicalInstancedStaticMeshComponent.SortedInstancesBulk"); }
	int& NumBuiltInstancesField() { return *GetNativePointerField<int*>(this, "UHierarchicalInstancedStaticMeshComponent.NumBuiltInstances"); }
	FBox& UnbuiltInstanceBoundsField() { return *GetNativePointerField<FBox*>(this, "UHierarchicalInstancedStaticMeshComponent.UnbuiltInstanceBounds"); }
	int& OcclusionLayerNumNodesField() { return *GetNativePointerField<int*>(this, "UHierarchicalInstancedStaticMeshComponent.OcclusionLayerNumNodes"); }
	FBox& AccumulatedNavigationDirtyAreaField() { return *GetNativePointerField<FBox*>(this, "UHierarchicalInstancedStaticMeshComponent.AccumulatedNavigationDirtyArea"); }

	// Functions

	int AddInstance(const FTransform * InstanceTransform) { return NativeCall<int, const FTransform *>(this, "UHierarchicalInstancedStaticMeshComponent.AddInstance", InstanceTransform); }
	void ApplyBuildOctreeAsync(ENamedThreads::Type CurrentThread, const TRefCountPtr<FGraphEvent> * MyCompletionGraphEvent, TSharedRef<FExpandedUniqueOctreeBuilder,1> OctreeBuilder, long double StartTime) { NativeCall<void, ENamedThreads::Type, const TRefCountPtr<FGraphEvent> *, TSharedRef<FExpandedUniqueOctreeBuilder,1>, long double>(this, "UHierarchicalInstancedStaticMeshComponent.ApplyBuildOctreeAsync", CurrentThread, MyCompletionGraphEvent, OctreeBuilder, StartTime); }
	void BuildTree() { NativeCall<void>(this, "UHierarchicalInstancedStaticMeshComponent.BuildTree"); }
	void BuildTreeAsync() { NativeCall<void>(this, "UHierarchicalInstancedStaticMeshComponent.BuildTreeAsync"); }
	FBoxSphereBounds * CalcBounds(FBoxSphereBounds * result, const FTransform * BoundTransform) { return NativeCall<FBoxSphereBounds *, FBoxSphereBounds *, const FTransform *>(this, "UHierarchicalInstancedStaticMeshComponent.CalcBounds", result, BoundTransform); }
	void ClearInstances() { NativeCall<void>(this, "UHierarchicalInstancedStaticMeshComponent.ClearInstances"); }
	int DesiredInstancesPerLeaf() { return NativeCall<int>(this, "UHierarchicalInstancedStaticMeshComponent.DesiredInstancesPerLeaf"); }
	void FlushAccumulatedNavigationUpdates() { NativeCall<void>(this, "UHierarchicalInstancedStaticMeshComponent.FlushAccumulatedNavigationUpdates"); }
	FBox * GetNavigationBounds(FBox * result) { return NativeCall<FBox *, FBox *>(this, "UHierarchicalInstancedStaticMeshComponent.GetNavigationBounds", result); }
	void GetNavigationPerInstanceTransforms(const FBox * AreaBox, TArray<FTransform> * InstanceData) { NativeCall<void, const FBox *, TArray<FTransform> *>(this, "UHierarchicalInstancedStaticMeshComponent.GetNavigationPerInstanceTransforms", AreaBox, InstanceData); }
	void PartialNavigationUpdate(int InstanceIdx) { NativeCall<void, int>(this, "UHierarchicalInstancedStaticMeshComponent.PartialNavigationUpdate", InstanceIdx); }
	void PostLoad() { NativeCall<void>(this, "UHierarchicalInstancedStaticMeshComponent.PostLoad"); }
	void RegisterAddedInstance() { NativeCall<void>(this, "UHierarchicalInstancedStaticMeshComponent.RegisterAddedInstance"); }
	bool RemoveInstance(int InstanceIndex, const FVector * HitDirection) { return NativeCall<bool, int, const FVector *>(this, "UHierarchicalInstancedStaticMeshComponent.RemoveInstance", InstanceIndex, HitDirection); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UHierarchicalInstancedStaticMeshComponent.Serialize", Ar); }
	void SerializeTree(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UHierarchicalInstancedStaticMeshComponent.SerializeTree", Ar); }
	void ShowInstance(int originalIndex) { NativeCall<void, int>(this, "UHierarchicalInstancedStaticMeshComponent.ShowInstance", originalIndex); }
	void UninitializeComponent() { NativeCall<void>(this, "UHierarchicalInstancedStaticMeshComponent.UninitializeComponent"); }
	bool UpdateInstanceTransform(int InstanceIndex, const FTransform * NewInstanceTransform, bool bWorldSpace) { return NativeCall<bool, int, const FTransform *, bool>(this, "UHierarchicalInstancedStaticMeshComponent.UpdateInstanceTransform", InstanceIndex, NewInstanceTransform, bWorldSpace); }
};

