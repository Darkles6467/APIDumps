#pragma once

#include "BaseDeclarations.h"
#include "FRigidBodyIndexPair.h"
#include "FGraphEvent.h"

struct FPhysScene
{
	char __padding[0x188L];
	bool& bAsyncSceneEnabledField() { return *GetNativePointerField<bool*>(this, "FPhysScene.bAsyncSceneEnabled"); }
	bool& bSubsteppingField() { return *GetNativePointerField<bool*>(this, "FPhysScene.bSubstepping"); }
	unsigned int& NumPhysScenesField() { return *GetNativePointerField<unsigned int*>(this, "FPhysScene.NumPhysScenes"); }
	TArray<FCollisionNotifyInfo>& PendingCollisionNotifiesField() { return *GetNativePointerField<TArray<FCollisionNotifyInfo>*>(this, "FPhysScene.PendingCollisionNotifies"); }
	UWorld * OwningWorldField() { return GetNativePointerField<UWorld *>(this, "FPhysScene.OwningWorld"); }
	FieldArray<int, 3> PhysXSceneIndexField() { return {this, "FPhysScene.PhysXSceneIndex"}; }
	FieldArray<bool, 3> bPhysXSceneExecutingField() { return {this, "FPhysScene.bPhysXSceneExecuting"}; }
	FieldArray<float, 3> AveragedFrameTimeField() { return {this, "FPhysScene.AveragedFrameTime"}; }
	FieldArray<float, 3> FrameTimeSmoothingFactorField() { return {this, "FPhysScene.FrameTimeSmoothingFactor"}; }
	int& RBSyncCounterField() { return *GetNativePointerField<int*>(this, "FPhysScene.RBSyncCounter"); }
	TLinkedList<FBodyInstance *> * ManualSyncRBUpdateListField() { return GetNativePointerField<TLinkedList<FBodyInstance *> *>(this, "FPhysScene.ManualSyncRBUpdateList"); }
	float& DeltaSecondsField() { return *GetNativePointerField<float*>(this, "FPhysScene.DeltaSeconds"); }
	float& MaxPhysicsDeltaTimeField() { return *GetNativePointerField<float*>(this, "FPhysScene.MaxPhysicsDeltaTime"); }
	float& SyncDeltaSecondsField() { return *GetNativePointerField<float*>(this, "FPhysScene.SyncDeltaSeconds"); }
	ULineBatchComponent * LineBatcherField() { return GetNativePointerField<ULineBatchComponent *>(this, "FPhysScene.LineBatcher"); }
	FieldArray<TRefCountPtr<FGraphEvent>, 3> PhysicsSubsceneCompletionField() { return {this, "FPhysScene.PhysicsSubsceneCompletion"}; }
	FieldArray<TRefCountPtr<FGraphEvent>, 3> FrameLaggedPhysicsSubsceneCompletionField() { return {this, "FPhysScene.FrameLaggedPhysicsSubsceneCompletion"}; }
	TRefCountPtr<FGraphEvent>& PhysicsSceneCompletionField() { return *GetNativePointerField<TRefCountPtr<FGraphEvent>*>(this, "FPhysScene.PhysicsSceneCompletion"); }
	physx::PxCpuDispatcher * CPUDispatcherField() { return GetNativePointerField<physx::PxCpuDispatcher *>(this, "FPhysScene.CPUDispatcher"); }
	FPhysXVehicleManager * VehicleManagerField() { return GetNativePointerField<FPhysXVehicleManager *>(this, "FPhysScene.VehicleManager"); }
	FPhysCommandHandler& DeferredCommandHandlerField() { return *GetNativePointerField<FPhysCommandHandler*>(this, "FPhysScene.DeferredCommandHandler"); }
	FPhysxUserData& PhysxUserDataField() { return *GetNativePointerField<FPhysxUserData*>(this, "FPhysScene.PhysxUserData"); }
	FieldArray<TArray<physx::PxActiveTransform const *>, 3> ActiveTransformsField() { return {this, "FPhysScene.ActiveTransforms"}; }
	FieldArray<FPhysSubstepTask *, 3> PhysSubSteppersField() { return {this, "FPhysScene.PhysSubSteppers"}; }
	TArray<FPhysScene::FPendingCollisionDisableTable>& DeferredCollisionDisableTableQueueField() { return *GetNativePointerField<TArray<FPhysScene::FPendingCollisionDisableTable>*>(this, "FPhysScene.DeferredCollisionDisableTableQueue"); }

	// Functions

	void AddForce(FBodyInstance * BodyInstance, const FVector * Force, bool bAllowSubstepping) { NativeCall<void, FBodyInstance *, const FVector *, bool>(this, "FPhysScene.AddForce", BodyInstance, Force, bAllowSubstepping); }
	void AddForceAtPosition(FBodyInstance * BodyInstance, const FVector * Force, const FVector * Position, bool bAllowSubstepping) { NativeCall<void, FBodyInstance *, const FVector *, const FVector *, bool>(this, "FPhysScene.AddForceAtPosition", BodyInstance, Force, Position, bAllowSubstepping); }
	void AddTorque(FBodyInstance * BodyInstance, const FVector * Torque, bool bAllowSubstepping) { NativeCall<void, FBodyInstance *, const FVector *, bool>(this, "FPhysScene.AddTorque", BodyInstance, Torque, bAllowSubstepping); }
	void ApplyWorldOffset(FVector InOffset) { NativeCall<void, FVector>(this, "FPhysScene.ApplyWorldOffset", InOffset); }
	void DeferredAddCollisionDisableTable(unsigned int SkelMeshCompID, TMap<FRigidBodyIndexPair,bool,FDefaultSetAllocator,TDefaultMapKeyFuncs<FRigidBodyIndexPair,bool,0> > * CollisionDisableTable) { NativeCall<void, unsigned int, TMap<FRigidBodyIndexPair,bool,FDefaultSetAllocator,TDefaultMapKeyFuncs<FRigidBodyIndexPair,bool,0> > *>(this, "FPhysScene.DeferredAddCollisionDisableTable", SkelMeshCompID, CollisionDisableTable); }
	void DeferredRemoveCollisionDisableTable(unsigned int SkelMeshCompID) { NativeCall<void, unsigned int>(this, "FPhysScene.DeferredRemoveCollisionDisableTable", SkelMeshCompID); }
	void DispatchPhysNotifications() { NativeCall<void>(this, "FPhysScene.DispatchPhysNotifications"); }
	void EndFrame(ULineBatchComponent * InLineBatcher) { NativeCall<void, ULineBatchComponent *>(this, "FPhysScene.EndFrame", InLineBatcher); }
	void FlushDeferredCollisionDisableTableQueue() { NativeCall<void>(this, "FPhysScene.FlushDeferredCollisionDisableTableQueue"); }
	TRefCountPtr<FGraphEvent> * GetCompletionEvent(TRefCountPtr<FGraphEvent> * result) { return NativeCall<TRefCountPtr<FGraphEvent> *, TRefCountPtr<FGraphEvent> *>(this, "FPhysScene.GetCompletionEvent", result); }
	physx::PxScene * GetPhysXScene(unsigned int SceneType) { return NativeCall<physx::PxScene *, unsigned int>(this, "FPhysScene.GetPhysXScene", SceneType); }
	void InitPhysScene(unsigned int SceneType) { NativeCall<void, unsigned int>(this, "FPhysScene.InitPhysScene", SceneType); }
	void ProcessPhysScene(unsigned int SceneType) { NativeCall<void, unsigned int>(this, "FPhysScene.ProcessPhysScene", SceneType); }
	void SceneCompletionTask(ENamedThreads::Type CurrentThread, const TRefCountPtr<FGraphEvent> * MyCompletionGraphEvent, EPhysicsSceneType SceneType) { NativeCall<void, ENamedThreads::Type, const TRefCountPtr<FGraphEvent> *, EPhysicsSceneType>(this, "FPhysScene.SceneCompletionTask", CurrentThread, MyCompletionGraphEvent, SceneType); }
	void SetIsStaticLoading(bool bStaticLoading) { NativeCall<void, bool>(this, "FPhysScene.SetIsStaticLoading", bStaticLoading); }
	void SetUpForFrame(const FVector * NewGrav, float InDeltaSeconds, float InMaxPhysicsDeltaTime) { NativeCall<void, const FVector *, float, float>(this, "FPhysScene.SetUpForFrame", NewGrav, InDeltaSeconds, InMaxPhysicsDeltaTime); }
	void StartCloth() { NativeCall<void>(this, "FPhysScene.StartCloth"); }
	void StartFrame() { NativeCall<void>(this, "FPhysScene.StartFrame"); }
	bool SubstepSimulation(unsigned int SceneType, TRefCountPtr<FGraphEvent> * InOutCompletionEvent) { return NativeCall<bool, unsigned int, TRefCountPtr<FGraphEvent> *>(this, "FPhysScene.SubstepSimulation", SceneType, InOutCompletionEvent); }
	void SyncComponentsToBodies(unsigned int SceneType) { NativeCall<void, unsigned int>(this, "FPhysScene.SyncComponentsToBodies", SceneType); }
	void TermBody(FBodyInstance * BodyInstance) { NativeCall<void, FBodyInstance *>(this, "FPhysScene.TermBody", BodyInstance); }
	void TermPhysScene(unsigned int SceneType) { NativeCall<void, unsigned int>(this, "FPhysScene.TermPhysScene", SceneType); }
	void TickPhysScene(unsigned int SceneType, TRefCountPtr<FGraphEvent> * InOutCompletionEvent) { NativeCall<void, unsigned int, TRefCountPtr<FGraphEvent> *>(this, "FPhysScene.TickPhysScene", SceneType, InOutCompletionEvent); }
	void UpdateActiveTransforms(unsigned int SceneType) { NativeCall<void, unsigned int>(this, "FPhysScene.UpdateActiveTransforms", SceneType); }
	void WaitClothScene() { NativeCall<void>(this, "FPhysScene.WaitClothScene"); }
	void WaitPhysScenes() { NativeCall<void>(this, "FPhysScene.WaitPhysScenes"); }
};

