#pragma once

#include "BaseDeclarations.h"
#include "UPrimitiveComponent.h"
#include "USceneComponent.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleSystemComponent : UPrimitiveComponent
{
	enum EForceAsyncWorkCompletion
	{
		STALL = 0x0,
		ENSURE_AND_STALL = 0x1,
		SILENT = 0x2,
	};

	char __padding[0x1c0L];
	TArray<FParticleSysParam>& InstanceParametersField() { return *GetNativePointerField<TArray<FParticleSysParam>*>(this, "UParticleSystemComponent.InstanceParameters"); }
	FVector& OldPositionField() { return *GetNativePointerField<FVector*>(this, "UParticleSystemComponent.OldPosition"); }
	FVector& PartSysVelocityField() { return *GetNativePointerField<FVector*>(this, "UParticleSystemComponent.PartSysVelocity"); }
	float& WarmupTimeField() { return *GetNativePointerField<float*>(this, "UParticleSystemComponent.WarmupTime"); }
	float& WarmupTickRateField() { return *GetNativePointerField<float*>(this, "UParticleSystemComponent.WarmupTickRate"); }
	int& LODLevelField() { return *GetNativePointerField<int*>(this, "UParticleSystemComponent.LODLevel"); }
	float& SecondsBeforeInactiveField() { return *GetNativePointerField<float*>(this, "UParticleSystemComponent.SecondsBeforeInactive"); }
	float& TimeSinceLastForceUpdateTransformField() { return *GetNativePointerField<float*>(this, "UParticleSystemComponent.TimeSinceLastForceUpdateTransform"); }
	bool& bIsTransformDirtyField() { return *GetNativePointerField<bool*>(this, "UParticleSystemComponent.bIsTransformDirty"); }
	float& MaxTimeBeforeForceUpdateTransformField() { return *GetNativePointerField<float*>(this, "UParticleSystemComponent.MaxTimeBeforeForceUpdateTransform"); }
	float& AccumTickTimeField() { return *GetNativePointerField<float*>(this, "UParticleSystemComponent.AccumTickTime"); }
	TEnumAsByte<enum ParticleSystemLODMethod>& LODMethodField() { return *GetNativePointerField<TEnumAsByte<enum ParticleSystemLODMethod>*>(this, "UParticleSystemComponent.LODMethod"); }
	TArray<UParticleSystemReplay *>& ReplayClipsField() { return *GetNativePointerField<TArray<UParticleSystemReplay *>*>(this, "UParticleSystemComponent.ReplayClips"); }
	TEnumAsByte<enum ParticleReplayState>& ReplayStateField() { return *GetNativePointerField<TEnumAsByte<enum ParticleReplayState>*>(this, "UParticleSystemComponent.ReplayState"); }
	int& ReplayClipIDNumberField() { return *GetNativePointerField<int*>(this, "UParticleSystemComponent.ReplayClipIDNumber"); }
	int& ReplayFrameIndexField() { return *GetNativePointerField<int*>(this, "UParticleSystemComponent.ReplayFrameIndex"); }
	float& AccumLODDistanceCheckTimeField() { return *GetNativePointerField<float*>(this, "UParticleSystemComponent.AccumLODDistanceCheckTime"); }
	FBox& CachedBoundingBoxField() { return *GetNativePointerField<FBox*>(this, "UParticleSystemComponent.CachedBoundingBox"); }
	TArray<FParticleEventSpawnData>& SpawnEventsField() { return *GetNativePointerField<TArray<FParticleEventSpawnData>*>(this, "UParticleSystemComponent.SpawnEvents"); }
	TArray<FParticleEventDeathData>& DeathEventsField() { return *GetNativePointerField<TArray<FParticleEventDeathData>*>(this, "UParticleSystemComponent.DeathEvents"); }
	TArray<FParticleEventCollideData>& CollisionEventsField() { return *GetNativePointerField<TArray<FParticleEventCollideData>*>(this, "UParticleSystemComponent.CollisionEvents"); }
	TArray<FParticleEventBurstData>& BurstEventsField() { return *GetNativePointerField<TArray<FParticleEventBurstData>*>(this, "UParticleSystemComponent.BurstEvents"); }
	TArray<FParticleEventKismetData>& KismetEventsField() { return *GetNativePointerField<TArray<FParticleEventKismetData>*>(this, "UParticleSystemComponent.KismetEvents"); }
	float& CustomTimeDilationField() { return *GetNativePointerField<float*>(this, "UParticleSystemComponent.CustomTimeDilation"); }
	float& EmitterDelayField() { return *GetNativePointerField<float*>(this, "UParticleSystemComponent.EmitterDelay"); }
	FRenderCommandFence * ReleaseResourcesFenceField() { return GetNativePointerField<FRenderCommandFence *>(this, "UParticleSystemComponent.ReleaseResourcesFence"); }
	TRefCountPtr<FGraphEvent>& AsyncWorkField() { return *GetNativePointerField<TRefCountPtr<FGraphEvent>*>(this, "UParticleSystemComponent.AsyncWork"); }
	float& DeltaTimeTickField() { return *GetNativePointerField<float*>(this, "UParticleSystemComponent.DeltaTimeTick"); }
	int& TotalActiveParticlesField() { return *GetNativePointerField<int*>(this, "UParticleSystemComponent.TotalActiveParticles"); }
	bool& bNeedsFinalizeField() { return *GetNativePointerField<bool*>(this, "UParticleSystemComponent.bNeedsFinalize"); }

	// Functions

	void Activate(UObject * Object) { NativeCall<void, UObject *>(this, "UParticleSystemComponent.Activate", Object); }
	void ActivateSystem(bool bFlagAsJustAttached) { NativeCall<void, bool>(this, "UParticleSystemComponent.ActivateSystem", bFlagAsJustAttached); }
	bool AllowRegisterWithWorld(UWorld * InWorld) { return NativeCall<bool, UWorld *>(this, "UParticleSystemComponent.AllowRegisterWithWorld", InWorld); }
	void ApplyWorldOffset(const FVector * InOffset, bool bWorldShift) { NativeCall<void, const FVector *, bool>(this, "UParticleSystemComponent.ApplyWorldOffset", InOffset, bWorldShift); }
	void BeginDestroy() { NativeCall<void>(this, "UParticleSystemComponent.BeginDestroy"); }
	void BeginTrails(FName InFirstSocketName, FName InSecondSocketName, ETrailWidthMode InWidthMode, float InWidth) { NativeCall<void, FName, FName, ETrailWidthMode, float>(this, "UParticleSystemComponent.BeginTrails", InFirstSocketName, InSecondSocketName, InWidthMode, InWidth); }
	void CacheViewRelevanceFlags(UParticleSystem * TemplateToCache) { NativeCall<void, UParticleSystem *>(this, "UParticleSystemComponent.CacheViewRelevanceFlags", TemplateToCache); }
	FBoxSphereBounds * CalcBounds(FBoxSphereBounds * result, const FTransform * LocalToWorld) { return NativeCall<FBoxSphereBounds *, FBoxSphereBounds *, const FTransform *>(this, "UParticleSystemComponent.CalcBounds", result, LocalToWorld); }
	void ComputeCanTickInAnyThread() { NativeCall<void>(this, "UParticleSystemComponent.ComputeCanTickInAnyThread"); }
	void ComputeTickComponent_Concurrent() { NativeCall<void>(this, "UParticleSystemComponent.ComputeTickComponent_Concurrent"); }
	FParticleDynamicData * CreateDynamicData() { return NativeCall<FParticleDynamicData *>(this, "UParticleSystemComponent.CreateDynamicData"); }
	void CreateRenderState_Concurrent() { NativeCall<void>(this, "UParticleSystemComponent.CreateRenderState_Concurrent"); }
	void Deactivate() { NativeCall<void>(this, "UParticleSystemComponent.Deactivate"); }
	void DeactivateSystem() { NativeCall<void>(this, "UParticleSystemComponent.DeactivateSystem"); }
	void DestroyRenderState_Concurrent() { NativeCall<void>(this, "UParticleSystemComponent.DestroyRenderState_Concurrent"); }
	int DetermineLODLevelForLocation(const FVector * EffectLocation) { return NativeCall<int, const FVector *>(this, "UParticleSystemComponent.DetermineLODLevelForLocation", EffectLocation); }
	void EndTrails() { NativeCall<void>(this, "UParticleSystemComponent.EndTrails"); }
	void FailedToRegisterWithWorld(UWorld * InWorld) { NativeCall<void, UWorld *>(this, "UParticleSystemComponent.FailedToRegisterWithWorld", InWorld); }
	void FinalizeTickComponent() { NativeCall<void>(this, "UParticleSystemComponent.FinalizeTickComponent"); }
	void FinishDestroy() { NativeCall<void>(this, "UParticleSystemComponent.FinishDestroy"); }
	void GenerateParticleEvent(const FName InEventName, const float InEmitterTime, const FVector InLocation, const FVector InDirection, const FVector InVelocity) { NativeCall<void, const FName, const float, const FVector, const FVector, const FVector>(this, "UParticleSystemComponent.GenerateParticleEvent", InEventName, InEmitterTime, InLocation, InDirection, InVelocity); }
	bool GetActorParameter(const FName InName, AActor ** OutActor) { return NativeCall<bool, const FName, AActor **>(this, "UParticleSystemComponent.GetActorParameter", InName, OutActor); }
	bool GetColorParameter(const FName InName, FLinearColor * OutColor) { return NativeCall<bool, const FName, FLinearColor *>(this, "UParticleSystemComponent.GetColorParameter", InName, OutColor); }
	int GetCurrentDetailMode() { return NativeCall<int>(this, "UParticleSystemComponent.GetCurrentDetailMode"); }
	FString * GetDetailedInfoInternal(FString * result) { return NativeCall<FString *, FString *>(this, "UParticleSystemComponent.GetDetailedInfoInternal", result); }
	bool GetFloatParameter(const FName InName, float * OutFloat) { return NativeCall<bool, const FName, float *>(this, "UParticleSystemComponent.GetFloatParameter", InName, OutFloat); }
	int GetLODLevel() { return NativeCall<int>(this, "UParticleSystemComponent.GetLODLevel"); }
	bool GetMaterialParameter(const FName InName, UMaterialInterface ** OutMaterial) { return NativeCall<bool, const FName, UMaterialInterface **>(this, "UParticleSystemComponent.GetMaterialParameter", InName, OutMaterial); }
	int GetNamedMaterialIndex(FName Name) { return NativeCall<int, FName>(this, "UParticleSystemComponent.GetNamedMaterialIndex", Name); }
	int GetNumActiveParticles() { return NativeCall<int>(this, "UParticleSystemComponent.GetNumActiveParticles"); }
	int GetNumMaterials() { return NativeCall<int>(this, "UParticleSystemComponent.GetNumMaterials"); }
	void GetOwnedTrailEmitters(TArray<FParticleAnimTrailEmitterInstance *> * OutTrailEmitters, const void * InOwner, bool bSetOwner) { NativeCall<void, TArray<FParticleAnimTrailEmitterInstance *> *, const void *, bool>(this, "UParticleSystemComponent.GetOwnedTrailEmitters", OutTrailEmitters, InOwner, bSetOwner); }
	unsigned __int64 GetResourceSize(EResourceSizeMode::Type Mode) { return NativeCall<unsigned __int64, EResourceSizeMode::Type>(this, "UParticleSystemComponent.GetResourceSize", Mode); }
	void GetUsedMaterials(TArray<UMaterialInterface *> * OutMaterials) { NativeCall<void, TArray<UMaterialInterface *> *>(this, "UParticleSystemComponent.GetUsedMaterials", OutMaterials); }
	bool GetVectorParameter(const FName InName, FVector * OutVector) { return NativeCall<bool, const FName, FVector *>(this, "UParticleSystemComponent.GetVectorParameter", InName, OutVector); }
	bool HasCompleted() { return NativeCall<bool>(this, "UParticleSystemComponent.HasCompleted"); }
	void InitParticles() { NativeCall<void>(this, "UParticleSystemComponent.InitParticles"); }
	void InitializeSystem() { NativeCall<void>(this, "UParticleSystemComponent.InitializeSystem"); }
	void KillParticlesForced() { NativeCall<void>(this, "UParticleSystemComponent.KillParticlesForced"); }
	void OnRegister() { NativeCall<void>(this, "UParticleSystemComponent.OnRegister"); }
	void OnUnregister() { NativeCall<void>(this, "UParticleSystemComponent.OnUnregister"); }
	void OrientZAxisTowardCamera() { NativeCall<void>(this, "UParticleSystemComponent.OrientZAxisTowardCamera"); }
	bool ParticleLineCheck(FHitResult * Hit, AActor * SourceActor, const FVector * End, const FVector * Start, const FVector * HalfExtent, const FCollisionObjectQueryParams * ObjectParams) { return NativeCall<bool, FHitResult *, AActor *, const FVector *, const FVector *, const FVector *, const FCollisionObjectQueryParams *>(this, "UParticleSystemComponent.ParticleLineCheck", Hit, SourceActor, End, Start, HalfExtent, ObjectParams); }
	void PostLoad() { NativeCall<void>(this, "UParticleSystemComponent.PostLoad"); }
	void ReportEventBurst(const FName InEventName, const float InEmitterTime, const int InParticleCount, const FVector InLocation, const TArray<UParticleModuleEventSendToGame *> * InEventData) { NativeCall<void, const FName, const float, const int, const FVector, const TArray<UParticleModuleEventSendToGame *> *>(this, "UParticleSystemComponent.ReportEventBurst", InEventName, InEmitterTime, InParticleCount, InLocation, InEventData); }
	void ReportEventCollision(const FName InEventName, const float InEmitterTime, const FVector InLocation, const FVector InDirection, const FVector InVelocity, const TArray<UParticleModuleEventSendToGame *> * InEventData, const float InParticleTime, const FVector InNormal, const float InTime, const int InItem, const FName InBoneName) { NativeCall<void, const FName, const float, const FVector, const FVector, const FVector, const TArray<UParticleModuleEventSendToGame *> *, const float, const FVector, const float, const int, const FName>(this, "UParticleSystemComponent.ReportEventCollision", InEventName, InEmitterTime, InLocation, InDirection, InVelocity, InEventData, InParticleTime, InNormal, InTime, InItem, InBoneName); }
	void ReportEventDeath(const FName InEventName, const float InEmitterTime, const FVector InLocation, const FVector InVelocity, const TArray<UParticleModuleEventSendToGame *> * InEventData, const float InParticleTime) { NativeCall<void, const FName, const float, const FVector, const FVector, const TArray<UParticleModuleEventSendToGame *> *, const float>(this, "UParticleSystemComponent.ReportEventDeath", InEventName, InEmitterTime, InLocation, InVelocity, InEventData, InParticleTime); }
	void ReportEventSpawn(const FName InEventName, const float InEmitterTime, const FVector InLocation, const FVector InVelocity, const TArray<UParticleModuleEventSendToGame *> * InEventData) { NativeCall<void, const FName, const float, const FVector, const FVector, const TArray<UParticleModuleEventSendToGame *> *>(this, "UParticleSystemComponent.ReportEventSpawn", InEventName, InEmitterTime, InLocation, InVelocity, InEventData); }
	void ResetParticles(bool bEmptyInstances) { NativeCall<void, bool>(this, "UParticleSystemComponent.ResetParticles", bEmptyInstances); }
	void RewindEmitterInstances() { NativeCall<void>(this, "UParticleSystemComponent.RewindEmitterInstances"); }
	void SendRenderDynamicData_Concurrent() { NativeCall<void>(this, "UParticleSystemComponent.SendRenderDynamicData_Concurrent"); }
	void SendRenderTransform_Concurrent() { NativeCall<void>(this, "UParticleSystemComponent.SendRenderTransform_Concurrent"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UParticleSystemComponent.Serialize", Ar); }
	void SetActorParameter(FName Name, AActor * Param) { NativeCall<void, FName, AActor *>(this, "UParticleSystemComponent.SetActorParameter", Name, Param); }
	void SetBeamEndPoint(int EmitterIndex, FVector NewEndPoint) { NativeCall<void, int, FVector>(this, "UParticleSystemComponent.SetBeamEndPoint", EmitterIndex, NewEndPoint); }
	void SetBeamSourcePoint(int EmitterIndex, FVector NewSourcePoint, int SourceIndex) { NativeCall<void, int, FVector, int>(this, "UParticleSystemComponent.SetBeamSourcePoint", EmitterIndex, NewSourcePoint, SourceIndex); }
	void SetBeamSourceStrength(int EmitterIndex, float NewSourceStrength, int SourceIndex) { NativeCall<void, int, float, int>(this, "UParticleSystemComponent.SetBeamSourceStrength", EmitterIndex, NewSourceStrength, SourceIndex); }
	void SetBeamSourceTangent(int EmitterIndex, FVector NewTangentPoint, int SourceIndex) { NativeCall<void, int, FVector, int>(this, "UParticleSystemComponent.SetBeamSourceTangent", EmitterIndex, NewTangentPoint, SourceIndex); }
	void SetBeamTargetPoint(int EmitterIndex, FVector NewTargetPoint, int TargetIndex) { NativeCall<void, int, FVector, int>(this, "UParticleSystemComponent.SetBeamTargetPoint", EmitterIndex, NewTargetPoint, TargetIndex); }
	void SetBeamTargetStrength(int EmitterIndex, float NewTargetStrength, int TargetIndex) { NativeCall<void, int, float, int>(this, "UParticleSystemComponent.SetBeamTargetStrength", EmitterIndex, NewTargetStrength, TargetIndex); }
	void SetBeamTargetTangent(int EmitterIndex, FVector NewTangentPoint, int TargetIndex) { NativeCall<void, int, FVector, int>(this, "UParticleSystemComponent.SetBeamTargetTangent", EmitterIndex, NewTangentPoint, TargetIndex); }
	void SetColorParameter(FName Name, FLinearColor Param) { NativeCall<void, FName, FLinearColor>(this, "UParticleSystemComponent.SetColorParameter", Name, Param); }
	void SetEmitterEnable(FName EmitterName, bool bNewEnableState) { NativeCall<void, FName, bool>(this, "UParticleSystemComponent.SetEmitterEnable", EmitterName, bNewEnableState); }
	void SetFloatParameter(FName Name, float Param) { NativeCall<void, FName, float>(this, "UParticleSystemComponent.SetFloatParameter", Name, Param); }
	void SetLODLevel(int InLODLevel) { NativeCall<void, int>(this, "UParticleSystemComponent.SetLODLevel", InLODLevel); }
	void SetMaterial(int ElementIndex, UMaterialInterface * Material) { NativeCall<void, int, UMaterialInterface *>(this, "UParticleSystemComponent.SetMaterial", ElementIndex, Material); }
	void SetMaterialParameter(FName Name, UMaterialInterface * Param) { NativeCall<void, FName, UMaterialInterface *>(this, "UParticleSystemComponent.SetMaterialParameter", Name, Param); }
	void SetTemplate(UParticleSystem * NewTemplate) { NativeCall<void, UParticleSystem *>(this, "UParticleSystemComponent.SetTemplate", NewTemplate); }
	void SetTrailSourceData(FName InFirstSocketName, FName InSecondSocketName, ETrailWidthMode InWidthMode, float InWidth) { NativeCall<void, FName, FName, ETrailWidthMode, float>(this, "UParticleSystemComponent.SetTrailSourceData", InFirstSocketName, InSecondSocketName, InWidthMode, InWidth); }
	void SetVectorParameter(FName Name, FVector Param) { NativeCall<void, FName, FVector>(this, "UParticleSystemComponent.SetVectorParameter", Name, Param); }
	bool ShouldActivate() { return NativeCall<bool>(this, "UParticleSystemComponent.ShouldActivate"); }
	bool ShouldComputeLODFromGameThread() { return NativeCall<bool>(this, "UParticleSystemComponent.ShouldComputeLODFromGameThread"); }
	void UpdateDynamicData(FParticleSystemSceneProxy * Proxy) { NativeCall<void, FParticleSystemSceneProxy *>(this, "UParticleSystemComponent.UpdateDynamicData", Proxy); }
	void UpdateLODInformation() { NativeCall<void>(this, "UParticleSystemComponent.UpdateLODInformation"); }
	void WaitForAsyncAndFinalize(UParticleSystemComponent::EForceAsyncWorkCompletion Behavior) { NativeCall<void, UParticleSystemComponent::EForceAsyncWorkCompletion>(this, "UParticleSystemComponent.WaitForAsyncAndFinalize", Behavior); }
};

struct UShooterLaserBeamComponent : UParticleSystemComponent
{
	char __padding[0x10L];
	bool& bIsOwnerWeaponField() { return *GetNativePointerField<bool*>(this, "UShooterLaserBeamComponent.bIsOwnerWeapon"); }
	float& LaserBeamRangeField() { return *GetNativePointerField<float*>(this, "UShooterLaserBeamComponent.LaserBeamRange"); }
	long double& LastHiddenTimeField() { return *GetNativePointerField<long double*>(this, "UShooterLaserBeamComponent.LastHiddenTime"); }

	// Functions

};

