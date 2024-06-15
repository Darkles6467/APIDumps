#pragma once

#include "BaseDeclarations.h"
#include "USceneComponent.h"
#include "FOverlapResult.h"
#include "FQuat.h"
#include "FOverlapInfo.h"

struct UPrimitiveComponent : USceneComponent
{
	char __padding[0x490L];
	float& MinDrawDistanceField() { return *GetNativePointerField<float*>(this, "UPrimitiveComponent.MinDrawDistance"); }
	float& MassiveLODSizeOnScreenField() { return *GetNativePointerField<float*>(this, "UPrimitiveComponent.MassiveLODSizeOnScreen"); }
	float& LDMaxDrawDistanceField() { return *GetNativePointerField<float*>(this, "UPrimitiveComponent.LDMaxDrawDistance"); }
	float& CachedMaxDrawDistanceField() { return *GetNativePointerField<float*>(this, "UPrimitiveComponent.CachedMaxDrawDistance"); }
	TEnumAsByte<enum ESceneDepthPriorityGroup>& DepthPriorityGroupField() { return *GetNativePointerField<TEnumAsByte<enum ESceneDepthPriorityGroup>*>(this, "UPrimitiveComponent.DepthPriorityGroup"); }
	TEnumAsByte<enum ESceneDepthPriorityGroup>& ViewOwnerDepthPriorityGroupField() { return *GetNativePointerField<TEnumAsByte<enum ESceneDepthPriorityGroup>*>(this, "UPrimitiveComponent.ViewOwnerDepthPriorityGroup"); }
	int& CustomDepthStencilValueField() { return *GetNativePointerField<int*>(this, "UPrimitiveComponent.CustomDepthStencilValue"); }
	int& ObjectLayerField() { return *GetNativePointerField<int*>(this, "UPrimitiveComponent.ObjectLayer"); }
	TEnumAsByte<enum EIndirectLightingCacheQuality>& IndirectLightingCacheQualityField() { return *GetNativePointerField<TEnumAsByte<enum EIndirectLightingCacheQuality>*>(this, "UPrimitiveComponent.IndirectLightingCacheQuality"); }
	bool& bHasCachedStaticLightingField() { return *GetNativePointerField<bool*>(this, "UPrimitiveComponent.bHasCachedStaticLighting"); }
	bool& bStaticLightingBuildEnqueuedField() { return *GetNativePointerField<bool*>(this, "UPrimitiveComponent.bStaticLightingBuildEnqueued"); }
	int& TranslucencySortPriorityField() { return *GetNativePointerField<int*>(this, "UPrimitiveComponent.TranslucencySortPriority"); }
	int& VisibilityIdField() { return *GetNativePointerField<int*>(this, "UPrimitiveComponent.VisibilityId"); }
	float& LastPhysxSleepTimeField() { return *GetNativePointerField<float*>(this, "UPrimitiveComponent.LastPhysxSleepTime"); }
	unsigned int& GameThread_OverlapIncrementorField() { return *GetNativePointerField<unsigned int*>(this, "UPrimitiveComponent.GameThread_OverlapIncrementor"); }
	unsigned int& GameThread_OverlapIndexMaskField() { return *GetNativePointerField<unsigned int*>(this, "UPrimitiveComponent.GameThread_OverlapIndexMask"); }
	FPrimitiveComponentId& ComponentIdField() { return *GetNativePointerField<FPrimitiveComponentId*>(this, "UPrimitiveComponent.ComponentId"); }
	FOctreeElementId& InternalOctreeIdField() { return *GetNativePointerField<FOctreeElementId*>(this, "UPrimitiveComponent.InternalOctreeId"); }
	FieldArray<FOctreeElementId, 18> SpecializedInternalOctreeIdField() { return {this, "UPrimitiveComponent.SpecializedInternalOctreeId"}; }
	int& InternalOctreeMaskField() { return *GetNativePointerField<int*>(this, "UPrimitiveComponent.InternalOctreeMask"); }
	float& LpvBiasMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimitiveComponent.LpvBiasMultiplier"); }
	float& OverrideStepHeightField() { return *GetNativePointerField<float*>(this, "UPrimitiveComponent.OverrideStepHeight"); }
	FBodyInstance& BodyInstanceField() { return *GetNativePointerField<FBodyInstance*>(this, "UPrimitiveComponent.BodyInstance"); }
	float& LastCheckedAllCollideableDescendantsTimeField() { return *GetNativePointerField<float*>(this, "UPrimitiveComponent.LastCheckedAllCollideableDescendantsTime"); }
	TEnumAsByte<enum EHasCustomNavigableGeometry::Type>& bHasCustomNavigableGeometryField() { return *GetNativePointerField<TEnumAsByte<enum EHasCustomNavigableGeometry::Type>*>(this, "UPrimitiveComponent.bHasCustomNavigableGeometry"); }
	float& BoundsScaleField() { return *GetNativePointerField<float*>(this, "UPrimitiveComponent.BoundsScale"); }
	long double& LastSubmitTimeField() { return *GetNativePointerField<long double*>(this, "UPrimitiveComponent.LastSubmitTime"); }
	long double& LastRenderTimeField() { return *GetNativePointerField<long double*>(this, "UPrimitiveComponent.LastRenderTime"); }
	long double& LastRenderTimeIgnoreShadowField() { return *GetNativePointerField<long double*>(this, "UPrimitiveComponent.LastRenderTimeIgnoreShadow"); }
	TEnumAsByte<enum ECanBeCharacterBase>& CanBeCharacterBase_DEPRECATEDField() { return *GetNativePointerField<TEnumAsByte<enum ECanBeCharacterBase>*>(this, "UPrimitiveComponent.CanBeCharacterBase_DEPRECATED"); }
	TEnumAsByte<enum ECanBeCharacterBase>& CanCharacterStepUpOnField() { return *GetNativePointerField<TEnumAsByte<enum ECanBeCharacterBase>*>(this, "UPrimitiveComponent.CanCharacterStepUpOn"); }
	TArray<FOverlapInfo>& OverlappingComponentsField() { return *GetNativePointerField<TArray<FOverlapInfo>*>(this, "UPrimitiveComponent.OverlappingComponents"); }
	FRenderCommandFence& DetachFenceField() { return *GetNativePointerField<FRenderCommandFence*>(this, "UPrimitiveComponent.DetachFence"); }
	FThreadSafeCounter& AttachmentCounterField() { return *GetNativePointerField<FThreadSafeCounter*>(this, "UPrimitiveComponent.AttachmentCounter"); }
	unsigned int& ProxyMeshIDField() { return *GetNativePointerField<unsigned int*>(this, "UPrimitiveComponent.ProxyMeshID"); }
	bool& bIsProxyMeshParentField() { return *GetNativePointerField<bool*>(this, "UPrimitiveComponent.bIsProxyMeshParent"); }
	bool& bHasActiveProxyMeshChildrenField() { return *GetNativePointerField<bool*>(this, "UPrimitiveComponent.bHasActiveProxyMeshChildren"); }

	// Functions

	bool AreSymmetricRotations(const FQuat * A, const FQuat * B, const FVector * Scale3D) { return NativeCall<bool, const FQuat *, const FQuat *, const FVector *>(this, "UPrimitiveComponent.AreSymmetricRotations", A, B, Scale3D); }
	bool CanBeBaseForCharacter(APawn * Pawn) { return NativeCall<bool, APawn *>(this, "UPrimitiveComponent.CanBeBaseForCharacter", Pawn); }
	char GetStaticDepthPriorityGroup() { return NativeCall<char>(this, "UPrimitiveComponent.GetStaticDepthPriorityGroup"); }
	bool HasValidSettingsForStaticLighting() { return NativeCall<bool>(this, "UPrimitiveComponent.HasValidSettingsForStaticLighting"); }
	void GetLightAndShadowMapMemoryUsage(int * NumInstances, float * BoundsSurfaceArea) { NativeCall<void, int *, float *>(this, "UPrimitiveComponent.GetLightAndShadowMapMemoryUsage", NumInstances, BoundsSurfaceArea); }
	void FinishDestroy() { NativeCall<void>(this, "UPrimitiveComponent.FinishDestroy"); }
	bool AreAllCollideableDescendantsRelative(bool bAllowCachedValue) { return NativeCall<bool, bool>(this, "UPrimitiveComponent.AreAllCollideableDescendantsRelative", bAllowCachedValue); }
	void BeginComponentOverlap(const FOverlapInfo * OtherOverlap, bool bDoNotifies) { NativeCall<void, const FOverlapInfo *, bool>(this, "UPrimitiveComponent.BeginComponentOverlap", OtherOverlap, bDoNotifies); }
	void BeginDestroy() { NativeCall<void>(this, "UPrimitiveComponent.BeginDestroy"); }
	bool CanCharacterStepUp(APawn * Pawn) { return NativeCall<bool, APawn *>(this, "UPrimitiveComponent.CanCharacterStepUp", Pawn); }
	bool CanEditSimulatePhysics() { return NativeCall<bool>(this, "UPrimitiveComponent.CanEditSimulatePhysics"); }
	void ClearMoveIgnoreActors() { NativeCall<void>(this, "UPrimitiveComponent.ClearMoveIgnoreActors"); }
	bool ComponentOverlapComponentImpl(UPrimitiveComponent * PrimComp, const FVector Pos, const FQuat * Quat, const FCollisionQueryParams * Params) { return NativeCall<bool, UPrimitiveComponent *, const FVector, const FQuat *, const FCollisionQueryParams *>(this, "UPrimitiveComponent.ComponentOverlapComponentImpl", PrimComp, Pos, Quat, Params); }
	bool ComponentOverlapMultiImpl(TArray<FOverlapResult> * OutOverlaps, const UWorld * World, const FVector * Pos, const FQuat * Quat, ECollisionChannel TestChannel, const FComponentQueryParams * Params, const FCollisionObjectQueryParams * ObjectQueryParams) { return NativeCall<bool, TArray<FOverlapResult> *, const UWorld *, const FVector *, const FQuat *, ECollisionChannel, const FComponentQueryParams *, const FCollisionObjectQueryParams *>(this, "UPrimitiveComponent.ComponentOverlapMultiImpl", OutOverlaps, World, Pos, Quat, TestChannel, Params, ObjectQueryParams); }
	bool ComputePenetration(FMTDResult * OutMTD, const FCollisionShape * CollisionShape, const FVector * Pos, const FQuat * Rot) { return NativeCall<bool, FMTDResult *, const FCollisionShape *, const FVector *, const FQuat *>(this, "UPrimitiveComponent.ComputePenetration", OutMTD, CollisionShape, Pos, Rot); }
	static bool ComputePenetrationGeneric(FMTDResult * OutMTD, FBodyInstance * BodyInstance0, FTransform * WorldToComponent, FBodyInstance * BodyInstance1, FVector TestLocation, FQuat TestRotation) { return NativeCall<bool, FMTDResult *, FBodyInstance *, FTransform *, FBodyInstance *, FVector, FQuat>(nullptr, "UPrimitiveComponent.ComputePenetrationGeneric", OutMTD, BodyInstance0, WorldToComponent, BodyInstance1, TestLocation, TestRotation); }
	void CreatePhysicsState() { NativeCall<void>(this, "UPrimitiveComponent.CreatePhysicsState"); }
	void CreateRenderState_Concurrent() { NativeCall<void>(this, "UPrimitiveComponent.CreateRenderState_Concurrent"); }
	void DestroyPhysicsState() { NativeCall<void>(this, "UPrimitiveComponent.DestroyPhysicsState"); }
	void DestroyRenderState_Concurrent() { NativeCall<void>(this, "UPrimitiveComponent.DestroyRenderState_Concurrent"); }
	void DispatchBlockingHit(AActor * Owner, const FHitResult * BlockingHit) { NativeCall<void, AActor *, const FHitResult *>(this, "UPrimitiveComponent.DispatchBlockingHit", Owner, BlockingHit); }
	static void DispatchMouseOverEvents(UPrimitiveComponent * CurrentComponent, UPrimitiveComponent * NewComponent) { NativeCall<void, UPrimitiveComponent *, UPrimitiveComponent *>(nullptr, "UPrimitiveComponent.DispatchMouseOverEvents", CurrentComponent, NewComponent); }
	void DispatchOnClicked() { NativeCall<void>(this, "UPrimitiveComponent.DispatchOnClicked"); }
	void DispatchOnInputTouchBegin(const ETouchIndex::Type FingerIndex) { NativeCall<void, const ETouchIndex::Type>(this, "UPrimitiveComponent.DispatchOnInputTouchBegin", FingerIndex); }
	void DispatchOnInputTouchEnd(const ETouchIndex::Type FingerIndex) { NativeCall<void, const ETouchIndex::Type>(this, "UPrimitiveComponent.DispatchOnInputTouchEnd", FingerIndex); }
	void DispatchOnReleased() { NativeCall<void>(this, "UPrimitiveComponent.DispatchOnReleased"); }
	static void DispatchTouchOverEvents(ETouchIndex::Type FingerIndex, UPrimitiveComponent * CurrentComponent, UPrimitiveComponent * NewComponent) { NativeCall<void, ETouchIndex::Type, UPrimitiveComponent *, UPrimitiveComponent *>(nullptr, "UPrimitiveComponent.DispatchTouchOverEvents", FingerIndex, CurrentComponent, NewComponent); }
	void EndComponentOverlap(const FOverlapInfo * OtherOverlap, bool bDoNotifies, bool bNoNotifySelf) { NativeCall<void, const FOverlapInfo *, bool, bool>(this, "UPrimitiveComponent.EndComponentOverlap", OtherOverlap, bDoNotifies, bNoNotifySelf); }
	void EnsurePhysicsStateCreated() { NativeCall<void>(this, "UPrimitiveComponent.EnsurePhysicsStateCreated"); }
	ECollisionChannel GetCollisionObjectType() { return NativeCall<ECollisionChannel>(this, "UPrimitiveComponent.GetCollisionObjectType"); }
	void GetCollisionResponseSet(FCollisionResponseSet * OutCollision) { NativeCall<void, FCollisionResponseSet *>(this, "UPrimitiveComponent.GetCollisionResponseSet", OutCollision); }
	FCollisionShape * GetCollisionShape(FCollisionShape * result, float Inflation) { return NativeCall<FCollisionShape *, FCollisionShape *, float>(this, "UPrimitiveComponent.GetCollisionShape", result, Inflation); }
	FBox * GetNavigationBounds(FBox * result) { return NativeCall<FBox *, FBox *>(this, "UPrimitiveComponent.GetNavigationBounds", result); }
	const TArray<FOverlapInfo> * GetOverlapInfos() { return NativeCall<const TArray<FOverlapInfo> *>(this, "UPrimitiveComponent.GetOverlapInfos"); }
	void GetOverlappingActors(TArray<AActor *> * OutOverlappingActors, UClass * ClassFilter) { NativeCall<void, TArray<AActor *> *, UClass *>(this, "UPrimitiveComponent.GetOverlappingActors", OutOverlappingActors, ClassFilter); }
	void GetOverlappingComponents(TArray<UPrimitiveComponent *> * OutOverlappingComponents) { NativeCall<void, TArray<UPrimitiveComponent *> *>(this, "UPrimitiveComponent.GetOverlappingComponents", OutOverlappingComponents); }
	bool GetOverlapsWithActor(AActor * Actor, TArray<FOverlapInfo> * OutOverlaps) { return NativeCall<bool, AActor *, TArray<FOverlapInfo> *>(this, "UPrimitiveComponent.GetOverlapsWithActor", Actor, OutOverlaps); }
	FMatrix * GetRenderMatrix(FMatrix * result) { return NativeCall<FMatrix *, FMatrix *>(this, "UPrimitiveComponent.GetRenderMatrix", result); }
	unsigned __int64 GetResourceSize(EResourceSizeMode::Type Mode) { return NativeCall<unsigned __int64, EResourceSizeMode::Type>(this, "UPrimitiveComponent.GetResourceSize", Mode); }
	void GetUsedTextures(TArray<UTexture *> * OutTextures, EMaterialQualityLevel::Type QualityLevel) { NativeCall<void, TArray<UTexture *> *, EMaterialQualityLevel::Type>(this, "UPrimitiveComponent.GetUsedTextures", OutTextures, QualityLevel); }
	bool HasStaticLighting() { return NativeCall<bool>(this, "UPrimitiveComponent.HasStaticLighting"); }
	bool HasValidPhysicsState() { return NativeCall<bool>(this, "UPrimitiveComponent.HasValidPhysicsState"); }
	void IgnoreActorWhenMoving(AActor * Actor, bool bShouldIgnore) { NativeCall<void, AActor *, bool>(this, "UPrimitiveComponent.IgnoreActorWhenMoving", Actor, bShouldIgnore); }
	void InitSweepCollisionParams(FCollisionQueryParams * OutParams, FCollisionResponseParams * OutResponseParam) { NativeCall<void, FCollisionQueryParams *, FCollisionResponseParams *>(this, "UPrimitiveComponent.InitSweepCollisionParams", OutParams, OutResponseParam); }
	void InvalidateLightingCacheDetailed(bool bInvalidateBuildEnqueuedLighting, bool bTranslationOnly) { NativeCall<void, bool, bool>(this, "UPrimitiveComponent.InvalidateLightingCacheDetailed", bInvalidateBuildEnqueuedLighting, bTranslationOnly); }
	bool IsEditorOnly() { return NativeCall<bool>(this, "UPrimitiveComponent.IsEditorOnly"); }
	bool IsNavigationRelevant() { return NativeCall<bool>(this, "UPrimitiveComponent.IsNavigationRelevant"); }
	bool IsOverlappingActor(AActor * Other) { return NativeCall<bool, AActor *>(this, "UPrimitiveComponent.IsOverlappingActor", Other); }
	bool IsOverlappingComponent(const FOverlapInfo * Overlap) { return NativeCall<bool, const FOverlapInfo *>(this, "UPrimitiveComponent.IsOverlappingComponent", Overlap); }
	bool IsReadyForFinishDestroy() { return NativeCall<bool>(this, "UPrimitiveComponent.IsReadyForFinishDestroy"); }
	bool IsWorldGeometry() { return NativeCall<bool>(this, "UPrimitiveComponent.IsWorldGeometry"); }
	bool LineTraceComponent(FHitResult * OutHit, const FVector Start, const FVector End, const FCollisionQueryParams * Params) { return NativeCall<bool, FHitResult *, const FVector, const FVector, const FCollisionQueryParams *>(this, "UPrimitiveComponent.LineTraceComponent", OutHit, Start, End, Params); }
	bool MoveComponentImpl(const FVector * Delta, const FQuat * NewRotationQuat, bool bSweep, FHitResult * OutHit, EMoveComponentFlags MoveFlags, bool bUpdateOverlaps) { return NativeCall<bool, const FVector *, const FQuat *, bool, FHitResult *, EMoveComponentFlags, bool>(this, "UPrimitiveComponent.MoveComponentImpl", Delta, NewRotationQuat, bSweep, OutHit, MoveFlags, bUpdateOverlaps); }
	bool NeedsLoadForClient() { return NativeCall<bool>(this, "UPrimitiveComponent.NeedsLoadForClient"); }
	bool NeedsLoadForServer() { return NativeCall<bool>(this, "UPrimitiveComponent.NeedsLoadForServer"); }
	void OnAttachmentChanged() { NativeCall<void>(this, "UPrimitiveComponent.OnAttachmentChanged"); }
	void OnRegister() { NativeCall<void>(this, "UPrimitiveComponent.OnRegister"); }
	void OnUnregister() { NativeCall<void>(this, "UPrimitiveComponent.OnUnregister"); }
	void OnUpdateTransform(bool bSkipPhysicsMove) { NativeCall<void, bool>(this, "UPrimitiveComponent.OnUpdateTransform", bSkipPhysicsMove); }
	bool OverlapComponent(const FVector * Pos, const FQuat * Rot, const FCollisionShape * CollisionShape) { return NativeCall<bool, const FVector *, const FQuat *, const FCollisionShape *>(this, "UPrimitiveComponent.OverlapComponent", Pos, Rot, CollisionShape); }
	void PostDuplicate(bool bDuplicateForPIE) { NativeCall<void, bool>(this, "UPrimitiveComponent.PostDuplicate", bDuplicateForPIE); }
	void PostLoad() { NativeCall<void>(this, "UPrimitiveComponent.PostLoad"); }
	void SendPhysicsTransform(bool bTeleport) { NativeCall<void, bool>(this, "UPrimitiveComponent.SendPhysicsTransform", bTeleport); }
	void SendRenderTransform_Concurrent() { NativeCall<void>(this, "UPrimitiveComponent.SendRenderTransform_Concurrent"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UPrimitiveComponent.Serialize", Ar); }
	void SetAbsoluteMaxDrawScale(bool bInValue) { NativeCall<void, bool>(this, "UPrimitiveComponent.SetAbsoluteMaxDrawScale", bInValue); }
	void SetCanEverAffectNavigation(bool bRelevant) { NativeCall<void, bool>(this, "UPrimitiveComponent.SetCanEverAffectNavigation", bRelevant); }
	void SetCastShadow(bool NewCastShadow) { NativeCall<void, bool>(this, "UPrimitiveComponent.SetCastShadow", NewCastShadow); }
	void SetCollisionResponseSet(const FCollisionResponseSet * Col) { NativeCall<void, const FCollisionResponseSet *>(this, "UPrimitiveComponent.SetCollisionResponseSet", Col); }
	void SetCustomDepthStencilValue(int Value) { NativeCall<void, int>(this, "UPrimitiveComponent.SetCustomDepthStencilValue", Value); }
	void SetDepthPriorityGroup(ESceneDepthPriorityGroup NewDepthPriorityGroup) { NativeCall<void, ESceneDepthPriorityGroup>(this, "UPrimitiveComponent.SetDepthPriorityGroup", NewDepthPriorityGroup); }
	void SetOnlyOwnerSee(bool bNewOnlyOwnerSee) { NativeCall<void, bool>(this, "UPrimitiveComponent.SetOnlyOwnerSee", bNewOnlyOwnerSee); }
	void SetOwnerNoSee(bool bNewOwnerNoSee) { NativeCall<void, bool>(this, "UPrimitiveComponent.SetOwnerNoSee", bNewOwnerNoSee); }
	void SetRenderCustomDepth(bool bValue) { NativeCall<void, bool>(this, "UPrimitiveComponent.SetRenderCustomDepth", bValue); }
	void SetTranslucentSortPriority(int NewTranslucentSortPriority) { NativeCall<void, int>(this, "UPrimitiveComponent.SetTranslucentSortPriority", NewTranslucentSortPriority); }
	bool ShouldComponentAddToScene() { return NativeCall<bool>(this, "UPrimitiveComponent.ShouldComponentAddToScene"); }
	bool ShouldCreatePhysicsState() { return NativeCall<bool>(this, "UPrimitiveComponent.ShouldCreatePhysicsState"); }
	bool ShouldRenderSelected() { return NativeCall<bool>(this, "UPrimitiveComponent.ShouldRenderSelected"); }
	bool SweepComponent(FHitResult * OutHit, const FVector Start, const FVector End, const FCollisionShape * CollisionShape, bool bTraceComplex) { return NativeCall<bool, FHitResult *, const FVector, const FVector, const FCollisionShape *, bool>(this, "UPrimitiveComponent.SweepComponent", OutHit, Start, End, CollisionShape, bTraceComplex); }
	void UpdateOverlaps(const TArray<FOverlapInfo> * PendingOverlaps, bool bDoNotifies, const TArray<FOverlapInfo> * OverlapsAtEndLocation) { NativeCall<void, const TArray<FOverlapInfo> *, bool, const TArray<FOverlapInfo> *>(this, "UPrimitiveComponent.UpdateOverlaps", PendingOverlaps, bDoNotifies, OverlapsAtEndLocation); }
	void UpdatePhysicsVolume(bool bTriggerNotifiers) { NativeCall<void, bool>(this, "UPrimitiveComponent.UpdatePhysicsVolume", bTriggerNotifiers); }
	bool WasRecentlyVisible() { return NativeCall<bool>(this, "UPrimitiveComponent.WasRecentlyVisible"); }
	void AddForce(FVector Force, FName BoneName) { NativeCall<void, FVector, FName>(this, "UPrimitiveComponent.AddForce", Force, BoneName); }
	void AddForceAtLocation(FVector Force, FVector Location, FName BoneName) { NativeCall<void, FVector, FVector, FName>(this, "UPrimitiveComponent.AddForceAtLocation", Force, Location, BoneName); }
	void AddImpulse(FVector Impulse, FName BoneName, bool bVelChange) { NativeCall<void, FVector, FName, bool>(this, "UPrimitiveComponent.AddImpulse", Impulse, BoneName, bVelChange); }
	void AddImpulseAtLocation(FVector Impulse, FVector Location, FName BoneName) { NativeCall<void, FVector, FVector, FName>(this, "UPrimitiveComponent.AddImpulseAtLocation", Impulse, Location, BoneName); }
	void AddRadialForce(FVector Origin, float Radius, float Strength, ERadialImpulseFalloff Falloff) { NativeCall<void, FVector, float, float, ERadialImpulseFalloff>(this, "UPrimitiveComponent.AddRadialForce", Origin, Radius, Strength, Falloff); }
	void AddRadialImpulse(FVector Origin, float Radius, float Strength, ERadialImpulseFalloff Falloff, bool bVelChange) { NativeCall<void, FVector, float, float, ERadialImpulseFalloff, bool>(this, "UPrimitiveComponent.AddRadialImpulse", Origin, Radius, Strength, Falloff, bVelChange); }
	void AddTorque(FVector Torque, FName BoneName) { NativeCall<void, FVector, FName>(this, "UPrimitiveComponent.AddTorque", Torque, BoneName); }
	bool ApplyRigidBodyState(const FRigidBodyState * NewState, const FRigidBodyErrorCorrection * ErrorCorrection, FVector * OutDeltaPos, FName BoneName) { return NativeCall<bool, const FRigidBodyState *, const FRigidBodyErrorCorrection *, FVector *, FName>(this, "UPrimitiveComponent.ApplyRigidBodyState", NewState, ErrorCorrection, OutDeltaPos, BoneName); }
	float CalculateMass(FName __formal) { return NativeCall<float, FName>(this, "UPrimitiveComponent.CalculateMass", __formal); }
	bool ConditionalApplyRigidBodyState(FRigidBodyState * UpdatedState, const FRigidBodyErrorCorrection * ErrorCorrection, FVector * OutDeltaPos, FName BoneName) { return NativeCall<bool, FRigidBodyState *, const FRigidBodyErrorCorrection *, FVector *, FName>(this, "UPrimitiveComponent.ConditionalApplyRigidBodyState", UpdatedState, ErrorCorrection, OutDeltaPos, BoneName); }
	float GetAngularDamping() { return NativeCall<float>(this, "UPrimitiveComponent.GetAngularDamping"); }
	FBodyInstance * GetBodyInstance(FName BoneName, bool bGetWelded) { return NativeCall<FBodyInstance *, FName, bool>(this, "UPrimitiveComponent.GetBodyInstance", BoneName, bGetWelded); }
	ECollisionEnabled::Type GetCollisionEnabled() { return NativeCall<ECollisionEnabled::Type>(this, "UPrimitiveComponent.GetCollisionEnabled"); }
	FName * GetCollisionProfileName(FName * result) { return NativeCall<FName *, FName *>(this, "UPrimitiveComponent.GetCollisionProfileName", result); }
	ECollisionResponse GetCollisionResponseToChannel(ECollisionChannel Channel) { return NativeCall<ECollisionResponse, ECollisionChannel>(this, "UPrimitiveComponent.GetCollisionResponseToChannel", Channel); }
	const FCollisionResponseContainer * GetCollisionResponseToChannels() { return NativeCall<const FCollisionResponseContainer *>(this, "UPrimitiveComponent.GetCollisionResponseToChannels"); }
	FVector * GetComponentVelocity(FVector * result) { return NativeCall<FVector *, FVector *>(this, "UPrimitiveComponent.GetComponentVelocity", result); }
	float GetDistanceToCollision(const FVector * Point, FVector * ClosestPointOnCollision) { return NativeCall<float, const FVector *, FVector *>(this, "UPrimitiveComponent.GetDistanceToCollision", Point, ClosestPointOnCollision); }
	float GetLinearDamping() { return NativeCall<float>(this, "UPrimitiveComponent.GetLinearDamping"); }
	float GetMass() { return NativeCall<float>(this, "UPrimitiveComponent.GetMass"); }
	FVector * GetPhysicsAngularVelocity(FVector * result, FName BoneName) { return NativeCall<FVector *, FVector *, FName>(this, "UPrimitiveComponent.GetPhysicsAngularVelocity", result, BoneName); }
	FVector * GetPhysicsLinearVelocity(FVector * result, FName BoneName) { return NativeCall<FVector *, FVector *, FName>(this, "UPrimitiveComponent.GetPhysicsLinearVelocity", result, BoneName); }
	bool GetRigidBodyState(FRigidBodyState * OutState, FName BoneName) { return NativeCall<bool, FRigidBodyState *, FName>(this, "UPrimitiveComponent.GetRigidBodyState", OutState, BoneName); }
	const FWalkableSlopeOverride * GetWalkableSlopeOverride() { return NativeCall<const FWalkableSlopeOverride *>(this, "UPrimitiveComponent.GetWalkableSlopeOverride"); }
	void GetWeldedBodies(TArray<FBodyInstance *> * OutWeldedBodies, TArray<FName> * OutLabels) { NativeCall<void, TArray<FBodyInstance *> *, TArray<FName> *>(this, "UPrimitiveComponent.GetWeldedBodies", OutWeldedBodies, OutLabels); }
	bool IsAnyRigidBodyAwake() { return NativeCall<bool>(this, "UPrimitiveComponent.IsAnyRigidBodyAwake"); }
	bool IsGravityEnabled() { return NativeCall<bool>(this, "UPrimitiveComponent.IsGravityEnabled"); }
	bool IsSimulatingPhysics(FName BoneName) { return NativeCall<bool, FName>(this, "UPrimitiveComponent.IsSimulatingPhysics", BoneName); }
	bool K2_LineTraceComponent(FVector TraceStart, FVector TraceEnd, bool bTraceComplex, bool bShowTrace, FVector * HitLocation, FVector * HitNormal, FName * BoneName) { return NativeCall<bool, FVector, FVector, bool, bool, FVector *, FVector *, FName *>(this, "UPrimitiveComponent.K2_LineTraceComponent", TraceStart, TraceEnd, bTraceComplex, bShowTrace, HitLocation, HitNormal, BoneName); }
	void OnActorEnableCollisionChanged() { NativeCall<void>(this, "UPrimitiveComponent.OnActorEnableCollisionChanged"); }
	void OnComponentCollisionSettingsChanged() { NativeCall<void>(this, "UPrimitiveComponent.OnComponentCollisionSettingsChanged"); }
	void PutAllRigidBodiesToSleep() { NativeCall<void>(this, "UPrimitiveComponent.PutAllRigidBodiesToSleep"); }
	void PutRigidBodyToSleep(FName BoneName) { NativeCall<void, FName>(this, "UPrimitiveComponent.PutRigidBodyToSleep", BoneName); }
	bool RigidBodyIsAwake(FName BoneName) { return NativeCall<bool, FName>(this, "UPrimitiveComponent.RigidBodyIsAwake", BoneName); }
	void SetAllPhysicsAngularVelocity(const FVector * NewAngVel, bool bAddToCurrent) { NativeCall<void, const FVector *, bool>(this, "UPrimitiveComponent.SetAllPhysicsAngularVelocity", NewAngVel, bAddToCurrent); }
	void SetAllPhysicsLinearVelocity(FVector NewVel, bool bAddToCurrent) { NativeCall<void, FVector, bool>(this, "UPrimitiveComponent.SetAllPhysicsLinearVelocity", NewVel, bAddToCurrent); }
	void SetAllPhysicsPosition(FVector NewPos) { NativeCall<void, FVector>(this, "UPrimitiveComponent.SetAllPhysicsPosition", NewPos); }
	void SetAllPhysicsRotation(FRotator NewRot) { NativeCall<void, FRotator>(this, "UPrimitiveComponent.SetAllPhysicsRotation", NewRot); }
	void SetAngularDamping(float InDamping) { NativeCall<void, float>(this, "UPrimitiveComponent.SetAngularDamping", InDamping); }
	void SetCollisionEnabled(ECollisionEnabled::Type NewType) { NativeCall<void, ECollisionEnabled::Type>(this, "UPrimitiveComponent.SetCollisionEnabled", NewType); }
	void SetCollisionObjectType(ECollisionChannel Channel) { NativeCall<void, ECollisionChannel>(this, "UPrimitiveComponent.SetCollisionObjectType", Channel); }
	void SetCollisionProfileName(FName InCollisionProfileName) { NativeCall<void, FName>(this, "UPrimitiveComponent.SetCollisionProfileName", InCollisionProfileName); }
	void SetCollisionResponseToAllChannels(ECollisionResponse NewResponse) { NativeCall<void, ECollisionResponse>(this, "UPrimitiveComponent.SetCollisionResponseToAllChannels", NewResponse); }
	void SetCollisionResponseToChannel(ECollisionChannel Channel, ECollisionResponse NewResponse) { NativeCall<void, ECollisionChannel, ECollisionResponse>(this, "UPrimitiveComponent.SetCollisionResponseToChannel", Channel, NewResponse); }
	void SetCollisionResponseToChannels(const FCollisionResponseContainer * NewReponses) { NativeCall<void, const FCollisionResponseContainer *>(this, "UPrimitiveComponent.SetCollisionResponseToChannels", NewReponses); }
	void SetEnableGravity(bool bGravityEnabled) { NativeCall<void, bool>(this, "UPrimitiveComponent.SetEnableGravity", bGravityEnabled); }
	void SetLinearDamping(float InDamping) { NativeCall<void, float>(this, "UPrimitiveComponent.SetLinearDamping", InDamping); }
	void SetNotifyRigidBodyCollision(bool bNewNotifyRigidBodyCollision) { NativeCall<void, bool>(this, "UPrimitiveComponent.SetNotifyRigidBodyCollision", bNewNotifyRigidBodyCollision); }
	void SetPhysMaterialOverride(UPhysicalMaterial * NewPhysMaterial) { NativeCall<void, UPhysicalMaterial *>(this, "UPrimitiveComponent.SetPhysMaterialOverride", NewPhysMaterial); }
	void SetPhysicsAngularVelocity(FVector NewAngVel, bool bAddToCurrent, FName BoneName) { NativeCall<void, FVector, bool, FName>(this, "UPrimitiveComponent.SetPhysicsAngularVelocity", NewAngVel, bAddToCurrent, BoneName); }
	void SetPhysicsLinearVelocity(FVector NewVel, bool bAddToCurrent, FName BoneName) { NativeCall<void, FVector, bool, FName>(this, "UPrimitiveComponent.SetPhysicsLinearVelocity", NewVel, bAddToCurrent, BoneName); }
	void SetPhysicsMaxAngularVelocity(float NewMaxAngVel, bool bAddToCurrent, FName BoneName) { NativeCall<void, float, bool, FName>(this, "UPrimitiveComponent.SetPhysicsMaxAngularVelocity", NewMaxAngVel, bAddToCurrent, BoneName); }
	void SetSimulatePhysics(bool bSimulate) { NativeCall<void, bool>(this, "UPrimitiveComponent.SetSimulatePhysics", bSimulate); }
	void SyncComponentToRBPhysics() { NativeCall<void>(this, "UPrimitiveComponent.SyncComponentToRBPhysics"); }
	void UnWeldFromParent() { NativeCall<void>(this, "UPrimitiveComponent.UnWeldFromParent"); }
	void UpdatePhysicsToRBChannels() { NativeCall<void>(this, "UPrimitiveComponent.UpdatePhysicsToRBChannels"); }
	void WakeAllRigidBodies() { NativeCall<void>(this, "UPrimitiveComponent.WakeAllRigidBodies"); }
	void WakeRigidBody(FName BoneName) { NativeCall<void, FName>(this, "UPrimitiveComponent.WakeRigidBody", BoneName); }
	void WeldTo(USceneComponent * InParent, FName InSocketName) { NativeCall<void, USceneComponent *, FName>(this, "UPrimitiveComponent.WeldTo", InParent, InSocketName); }
	void SetInternalOctreeMask(int InOctreeMask, bool bReregisterWithTree) { NativeCall<void, int, bool>(this, "UPrimitiveComponent.SetInternalOctreeMask", InOctreeMask, bReregisterWithTree); }
	void SetCullDistance(float NewCullDistance) { NativeCall<void, float>(this, "UPrimitiveComponent.SetCullDistance", NewCullDistance); }
};

