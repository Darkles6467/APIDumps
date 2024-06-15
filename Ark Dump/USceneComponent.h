#pragma once

#include "BaseDeclarations.h"
#include "UActorComponent.h"
#include "FLifetimeProperty.h"
#include "FOverlapInfo.h"

struct USceneComponent : UActorComponent
{
	char __padding[0x108L];
	FTransform& ComponentToWorldField() { return *GetNativePointerField<FTransform*>(this, "USceneComponent.ComponentToWorld"); }
	TEnumAsByte<enum EComponentMobility::Type>& MobilityField() { return *GetNativePointerField<TEnumAsByte<enum EComponentMobility::Type>*>(this, "USceneComponent.Mobility"); }
	FBoxSphereBounds& BoundsField() { return *GetNativePointerField<FBoxSphereBounds*>(this, "USceneComponent.Bounds"); }
	FName& AttachSocketNameField() { return *GetNativePointerField<FName*>(this, "USceneComponent.AttachSocketName"); }
	FVector& RelativeLocationField() { return *GetNativePointerField<FVector*>(this, "USceneComponent.RelativeLocation"); }
	FRotator& RelativeRotationField() { return *GetNativePointerField<FRotator*>(this, "USceneComponent.RelativeRotation"); }
	FVector& RelativeTranslation_DEPRECATEDField() { return *GetNativePointerField<FVector*>(this, "USceneComponent.RelativeTranslation_DEPRECATED"); }
	TEnumAsByte<enum EDetailMode>& DetailModeField() { return *GetNativePointerField<TEnumAsByte<enum EDetailMode>*>(this, "USceneComponent.DetailMode"); }
	int& AttachmentChangedIncrementerField() { return *GetNativePointerField<int*>(this, "USceneComponent.AttachmentChangedIncrementer"); }
	bool& NetUpdateTransformField() { return *GetNativePointerField<bool*>(this, "USceneComponent.NetUpdateTransform"); }
	FName& NetOldAttachSocketNameField() { return *GetNativePointerField<FName*>(this, "USceneComponent.NetOldAttachSocketName"); }
	FVector& RelativeScale3DField() { return *GetNativePointerField<FVector*>(this, "USceneComponent.RelativeScale3D"); }
	FVector& ComponentVelocityField() { return *GetNativePointerField<FVector*>(this, "USceneComponent.ComponentVelocity"); }

	// Functions

	FVector * GetCustomLocation(FVector * result) { return NativeCall<FVector *, FVector *>(this, "USceneComponent.GetCustomLocation", result); }
	void OnChildAttached(USceneComponent * ChildComponent) { NativeCall<void, USceneComponent *>(this, "USceneComponent.OnChildAttached", ChildComponent); }
	bool IsCollisionEnabled() { return NativeCall<bool>(this, "USceneComponent.IsCollisionEnabled"); }
	int GetNumChildrenComponents() { return NativeCall<int>(this, "USceneComponent.GetNumChildrenComponents"); }
	void AddLocalOffset(FVector DeltaLocation, bool bSweep) { NativeCall<void, FVector, bool>(this, "USceneComponent.AddLocalOffset", DeltaLocation, bSweep); }
	void AddLocalRotation(FRotator DeltaRotation, bool bSweep) { NativeCall<void, FRotator, bool>(this, "USceneComponent.AddLocalRotation", DeltaRotation, bSweep); }
	void AddLocalTransform(const FTransform * DeltaTransform, bool bSweep) { NativeCall<void, const FTransform *, bool>(this, "USceneComponent.AddLocalTransform", DeltaTransform, bSweep); }
	void AddWorldOffset(FVector DeltaLocation, bool bSweep) { NativeCall<void, FVector, bool>(this, "USceneComponent.AddWorldOffset", DeltaLocation, bSweep); }
	void AddWorldRotation(FRotator DeltaRotation, bool bSweep) { NativeCall<void, FRotator, bool>(this, "USceneComponent.AddWorldRotation", DeltaRotation, bSweep); }
	void AddWorldTransform(const FTransform * DeltaTransform, bool bSweep) { NativeCall<void, const FTransform *, bool>(this, "USceneComponent.AddWorldTransform", DeltaTransform, bSweep); }
	void AppendDescendants(TArray<USceneComponent *> * Children) { NativeCall<void, TArray<USceneComponent *> *>(this, "USceneComponent.AppendDescendants", Children); }
	void ApplyWorldOffset(const FVector * InOffset, bool bWorldShift) { NativeCall<void, const FVector *, bool>(this, "USceneComponent.ApplyWorldOffset", InOffset, bWorldShift); }
	void AttachTo(USceneComponent * Parent, FName InSocketName, EAttachLocation::Type AttachType, bool bWeldSimulatedBodies) { NativeCall<void, USceneComponent *, FName, EAttachLocation::Type, bool>(this, "USceneComponent.AttachTo", Parent, InSocketName, AttachType, bWeldSimulatedBodies); }
	TEnumAsByte<enum ECollisionEnabled::Type> * BP_GetCollisionEnabled(TEnumAsByte<enum ECollisionEnabled::Type> * result) { return NativeCall<TEnumAsByte<enum ECollisionEnabled::Type> *, TEnumAsByte<enum ECollisionEnabled::Type> *>(this, "USceneComponent.BP_GetCollisionEnabled", result); }
	void BeginDestroy() { NativeCall<void>(this, "USceneComponent.BeginDestroy"); }
	void BeginScopedMovementUpdate(FScopedMovementUpdate * ScopedUpdate) { NativeCall<void, FScopedMovementUpdate *>(this, "USceneComponent.BeginScopedMovementUpdate", ScopedUpdate); }
	void CalcBoundingCylinder(float * CylinderRadius, float * CylinderHalfHeight) { NativeCall<void, float *, float *>(this, "USceneComponent.CalcBoundingCylinder", CylinderRadius, CylinderHalfHeight); }
	FBoxSphereBounds * CalcBounds(FBoxSphereBounds * result, const FTransform * LocalToWorld) { return NativeCall<FBoxSphereBounds *, FBoxSphereBounds *, const FTransform *>(this, "USceneComponent.CalcBounds", result, LocalToWorld); }
	FTransform * CalcNewComponentToWorld(FTransform * result, const FTransform * NewRelativeTransform, const USceneComponent * Parent) { return NativeCall<FTransform *, FTransform *, const FTransform *, const USceneComponent *>(this, "USceneComponent.CalcNewComponentToWorld", result, NewRelativeTransform, Parent); }
	bool CanEverRender() { return NativeCall<bool>(this, "USceneComponent.CanEverRender"); }
	void DestroyComponent() { NativeCall<void>(this, "USceneComponent.DestroyComponent"); }
	void DetachFromParent(bool bMaintainWorldPosition) { NativeCall<void, bool>(this, "USceneComponent.DetachFromParent", bMaintainWorldPosition); }
	void EndScopedMovementUpdate(FScopedMovementUpdate * CompletedScope) { NativeCall<void, FScopedMovementUpdate *>(this, "USceneComponent.EndScopedMovementUpdate", CompletedScope); }
	FTransform * GetBaseToWorldTransform(FTransform * result) { return NativeCall<FTransform *, FTransform *>(this, "USceneComponent.GetBaseToWorldTransform", result); }
	void GetChildrenComponents(bool bIncludeAllDescendants, TArray<USceneComponent *> * Children) { NativeCall<void, bool, TArray<USceneComponent *> *>(this, "USceneComponent.GetChildrenComponents", bIncludeAllDescendants, Children); }
	const FCollisionResponseContainer * GetCollisionResponseToChannels() { return NativeCall<const FCollisionResponseContainer *>(this, "USceneComponent.GetCollisionResponseToChannels"); }
	FVector * GetComponentVelocity(FVector * result) { return NativeCall<FVector *, FVector *>(this, "USceneComponent.GetComponentVelocity", result); }
	FVector * GetForwardVector(FVector * result) { return NativeCall<FVector *, FVector *>(this, "USceneComponent.GetForwardVector", result); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "USceneComponent.GetLifetimeReplicatedProps", OutLifetimeProps); }
	FVector * GetMeshScaleMultiplier(FVector * result) { return NativeCall<FVector *, FVector *>(this, "USceneComponent.GetMeshScaleMultiplier", result); }
	void GetParentComponents(TArray<USceneComponent *> * Parents) { NativeCall<void, TArray<USceneComponent *> *>(this, "USceneComponent.GetParentComponents", Parents); }
	FBoxSphereBounds * GetPlacementExtent(FBoxSphereBounds * result) { return NativeCall<FBoxSphereBounds *, FBoxSphereBounds *>(this, "USceneComponent.GetPlacementExtent", result); }
	FTransform * GetRelativeTransform(FTransform * result) { return NativeCall<FTransform *, FTransform *>(this, "USceneComponent.GetRelativeTransform", result); }
	FVector * GetRightVector(FVector * result) { return NativeCall<FVector *, FVector *>(this, "USceneComponent.GetRightVector", result); }
	FVector * GetSocketLocation(FVector * result, FName SocketName) { return NativeCall<FVector *, FVector *, FName>(this, "USceneComponent.GetSocketLocation", result, SocketName); }
	FQuat * GetSocketQuaternion(FQuat * result, FName SocketName) { return NativeCall<FQuat *, FQuat *, FName>(this, "USceneComponent.GetSocketQuaternion", result, SocketName); }
	FRotator * GetSocketRotation(FRotator * result, FName SocketName) { return NativeCall<FRotator *, FRotator *, FName>(this, "USceneComponent.GetSocketRotation", result, SocketName); }
	FTransform * GetSocketTransform(FTransform * result, FName SocketName, ERelativeTransformSpace TransformSpace) { return NativeCall<FTransform *, FTransform *, FName, ERelativeTransformSpace>(this, "USceneComponent.GetSocketTransform", result, SocketName, TransformSpace); }
	void GetSocketWorldLocationAndRotation(FName InSocketName, FVector * OutLocation, FRotator * OutRotation) { NativeCall<void, FName, FVector *, FRotator *>(this, "USceneComponent.GetSocketWorldLocationAndRotation", InSocketName, OutLocation, OutRotation); }
	FVector * GetUpVector(FVector * result) { return NativeCall<FVector *, FVector *>(this, "USceneComponent.GetUpVector", result); }
	FVector * GetWorldLocation(FVector * result) { return NativeCall<FVector *, FVector *>(this, "USceneComponent.GetWorldLocation", result); }
	bool InternalSetWorldLocationAndRotation(FVector NewLocation, const FQuat * RotationQuat, bool bNoPhysics) { return NativeCall<bool, FVector, const FQuat *, bool>(this, "USceneComponent.InternalSetWorldLocationAndRotation", NewLocation, RotationQuat, bNoPhysics); }
	bool IsAnySimulatingPhysics() { return NativeCall<bool>(this, "USceneComponent.IsAnySimulatingPhysics"); }
	bool IsAttachedTo(USceneComponent * TestComp) { return NativeCall<bool, USceneComponent *>(this, "USceneComponent.IsAttachedTo", TestComp); }
	bool IsDeferringMovementUpdates() { return NativeCall<bool>(this, "USceneComponent.IsDeferringMovementUpdates"); }
	bool IsVisible() { return NativeCall<bool>(this, "USceneComponent.IsVisible"); }
	bool IsVisibleInEditor() { return NativeCall<bool>(this, "USceneComponent.IsVisibleInEditor"); }
	void K2_AttachTo(USceneComponent * InParent, FName InSocketName, EAttachLocation::Type AttachLocationType, bool bWeldSimulatedBodies) { NativeCall<void, USceneComponent *, FName, EAttachLocation::Type, bool>(this, "USceneComponent.K2_AttachTo", InParent, InSocketName, AttachLocationType, bWeldSimulatedBodies); }
	FRotator * K2_GetComponentRotation(FRotator * result) { return NativeCall<FRotator *, FRotator *>(this, "USceneComponent.K2_GetComponentRotation", result); }
	FVector * K2_GetComponentScale(FVector * result) { return NativeCall<FVector *, FVector *>(this, "USceneComponent.K2_GetComponentScale", result); }
	FTransform * K2_GetComponentToWorld(FTransform * result) { return NativeCall<FTransform *, FTransform *>(this, "USceneComponent.K2_GetComponentToWorld", result); }
	bool MoveComponentImpl(const FVector * Delta, const FQuat * NewRotation, bool bSweep, FHitResult * OutHit, EMoveComponentFlags MoveFlags, bool bUpdateOverlaps) { return NativeCall<bool, const FVector *, const FQuat *, bool, FHitResult *, EMoveComponentFlags, bool>(this, "USceneComponent.MoveComponentImpl", Delta, NewRotation, bSweep, OutHit, MoveFlags, bUpdateOverlaps); }
	void OnRegister() { NativeCall<void>(this, "USceneComponent.OnRegister"); }
	void OnRep_Transform() { NativeCall<void>(this, "USceneComponent.OnRep_Transform"); }
	void OnRep_Visibility(bool OldValue) { NativeCall<void, bool>(this, "USceneComponent.OnRep_Visibility", OldValue); }
	void PostInterpChange(UProperty * PropertyThatChanged) { NativeCall<void, UProperty *>(this, "USceneComponent.PostInterpChange", PropertyThatChanged); }
	void PostNetReceive() { NativeCall<void>(this, "USceneComponent.PostNetReceive"); }
	void PreNetReceive() { NativeCall<void>(this, "USceneComponent.PreNetReceive"); }
	void ResetRelativeTransform() { NativeCall<void>(this, "USceneComponent.ResetRelativeTransform"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "USceneComponent.Serialize", Ar); }
	void SetAbsolute(bool bNewAbsoluteLocation, bool bNewAbsoluteRotation, bool bNewAbsoluteScale) { NativeCall<void, bool, bool, bool>(this, "USceneComponent.SetAbsolute", bNewAbsoluteLocation, bNewAbsoluteRotation, bNewAbsoluteScale); }
	void SetHiddenInGame(bool NewHiddenGame, bool bPropagateToChildren) { NativeCall<void, bool, bool>(this, "USceneComponent.SetHiddenInGame", NewHiddenGame, bPropagateToChildren); }
	void SetMobility(EComponentMobility::Type NewMobility) { NativeCall<void, EComponentMobility::Type>(this, "USceneComponent.SetMobility", NewMobility); }
	void SetPhysicsVolume(APhysicsVolume * NewVolume, bool bTriggerNotifiers) { NativeCall<void, APhysicsVolume *, bool>(this, "USceneComponent.SetPhysicsVolume", NewVolume, bTriggerNotifiers); }
	void SetRelativeLocationAndRotation(FVector NewLocation, const FQuat * NewRotation, bool bSweep) { NativeCall<void, FVector, const FQuat *, bool>(this, "USceneComponent.SetRelativeLocationAndRotation", NewLocation, NewRotation, bSweep); }
	void SetRelativeScale3D(FVector NewScale3D) { NativeCall<void, FVector>(this, "USceneComponent.SetRelativeScale3D", NewScale3D); }
	void SetRelativeTransform(const FTransform * NewTransform, bool bSweep) { NativeCall<void, const FTransform *, bool>(this, "USceneComponent.SetRelativeTransform", NewTransform, bSweep); }
	void SetVisibility(bool bNewVisibility, bool bPropagateToChildren) { NativeCall<void, bool, bool>(this, "USceneComponent.SetVisibility", bNewVisibility, bPropagateToChildren); }
	void SetWorldLocation(FVector NewLocation, bool bSweep) { NativeCall<void, FVector, bool>(this, "USceneComponent.SetWorldLocation", NewLocation, bSweep); }
	void SetWorldLocationAndRotation(FVector NewLocation, const FQuat * NewRotation, bool bSweep) { NativeCall<void, FVector, const FQuat *, bool>(this, "USceneComponent.SetWorldLocationAndRotation", NewLocation, NewRotation, bSweep); }
	void SetWorldLocationAndRotation(FVector NewLocation, FRotator NewRotation, bool bSweep) { NativeCall<void, FVector, FRotator, bool>(this, "USceneComponent.SetWorldLocationAndRotation", NewLocation, NewRotation, bSweep); }
	void SetWorldLocationAndRotationNoPhysics(const FVector * NewLocation, const FRotator * NewRotation) { NativeCall<void, const FVector *, const FRotator *>(this, "USceneComponent.SetWorldLocationAndRotationNoPhysics", NewLocation, NewRotation); }
	void SetWorldRotation(const FQuat * NewRotation, bool bSweep) { NativeCall<void, const FQuat *, bool>(this, "USceneComponent.SetWorldRotation", NewRotation, bSweep); }
	void SetWorldScale3D(FVector NewScale) { NativeCall<void, FVector>(this, "USceneComponent.SetWorldScale3D", NewScale); }
	void SetWorldTransform(const FTransform * NewTransform, bool bSweep) { NativeCall<void, const FTransform *, bool>(this, "USceneComponent.SetWorldTransform", NewTransform, bSweep); }
	bool ShouldComponentAddToScene() { return NativeCall<bool>(this, "USceneComponent.ShouldComponentAddToScene"); }
	bool ShouldRender() { return NativeCall<bool>(this, "USceneComponent.ShouldRender"); }
	void SnapTo(USceneComponent * Parent, FName InSocketName) { NativeCall<void, USceneComponent *, FName>(this, "USceneComponent.SnapTo", Parent, InSocketName); }
	void StopSound(USoundBase * SoundToStop, float FadeOutTime) { NativeCall<void, USoundBase *, float>(this, "USceneComponent.StopSound", SoundToStop, FadeOutTime); }
	void ToggleVisibility(bool bPropagateToChildren) { NativeCall<void, bool>(this, "USceneComponent.ToggleVisibility", bPropagateToChildren); }
	void UpdateBounds() { NativeCall<void>(this, "USceneComponent.UpdateBounds"); }
	void UpdateChildTransforms() { NativeCall<void>(this, "USceneComponent.UpdateChildTransforms"); }
	void UpdateComponentToWorld(bool bSkipPhysicsMove) { NativeCall<void, bool>(this, "USceneComponent.UpdateComponentToWorld", bSkipPhysicsMove); }
	void UpdateComponentToWorldWithParent(USceneComponent * Parent, bool bSkipPhysicsMove, const FQuat * RelativeRotationQuat) { NativeCall<void, USceneComponent *, bool, const FQuat *>(this, "USceneComponent.UpdateComponentToWorldWithParent", Parent, bSkipPhysicsMove, RelativeRotationQuat); }
	void UpdateNavigationData() { NativeCall<void>(this, "USceneComponent.UpdateNavigationData"); }
	void UpdateOverlaps(const TArray<FOverlapInfo> * PendingOverlaps, bool bDoNotifies, const TArray<FOverlapInfo> * OverlapsAtEndLocation) { NativeCall<void, const TArray<FOverlapInfo> *, bool, const TArray<FOverlapInfo> *>(this, "USceneComponent.UpdateOverlaps", PendingOverlaps, bDoNotifies, OverlapsAtEndLocation); }
	void UpdatePhysicsVolume(bool bTriggerNotifiers) { NativeCall<void, bool>(this, "USceneComponent.UpdatePhysicsVolume", bTriggerNotifiers); }
};

