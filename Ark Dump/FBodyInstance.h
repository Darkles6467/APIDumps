#pragma once

#include "BaseDeclarations.h"
#include "FCollisionNotifyInfo.h"
#include "FOverlapResult.h"

struct FBodyInstance
{
	char __padding[0x160L];
	int& InstanceBodyIndexField() { return *GetNativePointerField<int*>(this, "FBodyInstance.InstanceBodyIndex"); }
	FVector& Scale3DField() { return *GetNativePointerField<FVector*>(this, "FBodyInstance.Scale3D"); }
	int& SceneIndexSyncField() { return *GetNativePointerField<int*>(this, "FBodyInstance.SceneIndexSync"); }
	int& SceneIndexAsyncField() { return *GetNativePointerField<int*>(this, "FBodyInstance.SceneIndexAsync"); }
	FCollisionResponseContainer& ResponseToChannels_DEPRECATEDField() { return *GetNativePointerField<FCollisionResponseContainer*>(this, "FBodyInstance.ResponseToChannels_DEPRECATED"); }
	int& SyncBodyFrameField() { return *GetNativePointerField<int*>(this, "FBodyInstance.SyncBodyFrame"); }
	TLinkedList<FBodyInstance *>& SyncBodiesLinkField() { return *GetNativePointerField<TLinkedList<FBodyInstance *>*>(this, "FBodyInstance.SyncBodiesLink"); }
	FName& CollisionProfileNameField() { return *GetNativePointerField<FName*>(this, "FBodyInstance.CollisionProfileName"); }
	TEnumAsByte<enum ECollisionEnabled::Type>& CollisionEnabledField() { return *GetNativePointerField<TEnumAsByte<enum ECollisionEnabled::Type>*>(this, "FBodyInstance.CollisionEnabled"); }
	TEnumAsByte<enum ECollisionChannel>& ObjectTypeField() { return *GetNativePointerField<TEnumAsByte<enum ECollisionChannel>*>(this, "FBodyInstance.ObjectType"); }
	FCollisionResponse& CollisionResponsesField() { return *GetNativePointerField<FCollisionResponse*>(this, "FBodyInstance.CollisionResponses"); }
	TEnumAsByte<enum ELockedAxis::Type>& LockedAxisModeField() { return *GetNativePointerField<TEnumAsByte<enum ELockedAxis::Type>*>(this, "FBodyInstance.LockedAxisMode"); }
	FVector& CustomLockedAxisField() { return *GetNativePointerField<FVector*>(this, "FBodyInstance.CustomLockedAxis"); }
	FConstraintInstance * DOFConstraintField() { return GetNativePointerField<FConstraintInstance *>(this, "FBodyInstance.DOFConstraint"); }
	FBodyInstance * WeldParentField() { return GetNativePointerField<FBodyInstance *>(this, "FBodyInstance.WeldParent"); }
	FWalkableSlopeOverride& WalkableSlopeOverrideField() { return *GetNativePointerField<FWalkableSlopeOverride*>(this, "FBodyInstance.WalkableSlopeOverride"); }
	float& MaxDepenetrationVelocityField() { return *GetNativePointerField<float*>(this, "FBodyInstance.MaxDepenetrationVelocity"); }
	UPhysicalMaterial * PhysMaterialOverrideField() { return GetNativePointerField<UPhysicalMaterial *>(this, "FBodyInstance.PhysMaterialOverride"); }
	FVector& COMNudgeField() { return *GetNativePointerField<FVector*>(this, "FBodyInstance.COMNudge"); }
	TEnumAsByte<enum ESleepFamily>& SleepFamilyField() { return *GetNativePointerField<TEnumAsByte<enum ESleepFamily>*>(this, "FBodyInstance.SleepFamily"); }
	TEnumAsByte<enum EPrimalEquipmentType::Type>& BodyArmorTypeField() { return *GetNativePointerField<TEnumAsByte<enum EPrimalEquipmentType::Type>*>(this, "FBodyInstance.BodyArmorType"); }
	float& MassScaleField() { return *GetNativePointerField<float*>(this, "FBodyInstance.MassScale"); }
	float& AngularDampingField() { return *GetNativePointerField<float*>(this, "FBodyInstance.AngularDamping"); }
	float& LinearDampingField() { return *GetNativePointerField<float*>(this, "FBodyInstance.LinearDamping"); }
	float& MaxAngularVelocityField() { return *GetNativePointerField<float*>(this, "FBodyInstance.MaxAngularVelocity"); }
	float& PhysicsBlendWeightField() { return *GetNativePointerField<float*>(this, "FBodyInstance.PhysicsBlendWeight"); }
	int& PositionSolverIterationCountField() { return *GetNativePointerField<int*>(this, "FBodyInstance.PositionSolverIterationCount"); }
	int& VelocitySolverIterationCountField() { return *GetNativePointerField<int*>(this, "FBodyInstance.VelocitySolverIterationCount"); }
	physx::PxRigidActor * RigidActorSyncField() { return GetNativePointerField<physx::PxRigidActor *>(this, "FBodyInstance.RigidActorSync"); }
	physx::PxRigidActor * RigidActorAsyncField() { return GetNativePointerField<physx::PxRigidActor *>(this, "FBodyInstance.RigidActorAsync"); }
	physx::PxAggregate * BodyAggregateField() { return GetNativePointerField<physx::PxAggregate *>(this, "FBodyInstance.BodyAggregate"); }
	TSharedPtr<TArray<char>,0>& CharDebugNameField() { return *GetNativePointerField<TSharedPtr<TArray<char>,0>*>(this, "FBodyInstance.CharDebugName"); }
	bool& bIsSilencedField() { return *GetNativePointerField<bool*>(this, "FBodyInstance.bIsSilenced"); }
	FPhysxUserData& PhysxUserDataField() { return *GetNativePointerField<FPhysxUserData*>(this, "FBodyInstance.PhysxUserData"); }

	// Functions

	FBodyInstance * operator=(const FBodyInstance * __that) { return NativeCall<FBodyInstance *, const FBodyInstance *>(this, "FBodyInstance.operator=", __that); }
	static TArray<int> * AddCollisionNotifyInfo(TArray<int> * result, const FBodyInstance * Body0, const FBodyInstance * Body1, const physx::PxContactPair * Pairs, unsigned int NumPairs, TArray<FCollisionNotifyInfo> * PendingNotifyInfos) { return NativeCall<TArray<int> *, TArray<int> *, const FBodyInstance *, const FBodyInstance *, const physx::PxContactPair *, unsigned int, TArray<FCollisionNotifyInfo> *>(nullptr, "FBodyInstance.AddCollisionNotifyInfo", result, Body0, Body1, Pairs, NumPairs, PendingNotifyInfos); }
	void AddForce(const FVector * Force, bool bAllowSubstepping) { NativeCall<void, const FVector *, bool>(this, "FBodyInstance.AddForce", Force, bAllowSubstepping); }
	void AddForceAtPosition(const FVector * Force, const FVector * Position, bool bAllowSubstepping) { NativeCall<void, const FVector *, const FVector *, bool>(this, "FBodyInstance.AddForceAtPosition", Force, Position, bAllowSubstepping); }
	void AddImpulse(const FVector * Impulse, bool bVelChange) { NativeCall<void, const FVector *, bool>(this, "FBodyInstance.AddImpulse", Impulse, bVelChange); }
	void AddImpulseAtPosition(const FVector * Impulse, const FVector * Position) { NativeCall<void, const FVector *, const FVector *>(this, "FBodyInstance.AddImpulseAtPosition", Impulse, Position); }
	void AddRadialForceToBody(const FVector * Origin, float Radius, float Strength, char Falloff) { NativeCall<void, const FVector *, float, float, char>(this, "FBodyInstance.AddRadialForceToBody", Origin, Radius, Strength, Falloff); }
	void AddRadialImpulseToBody(const FVector * Origin, float Radius, float Strength, char Falloff, bool bVelChange) { NativeCall<void, const FVector *, float, float, char, bool>(this, "FBodyInstance.AddRadialImpulseToBody", Origin, Radius, Strength, Falloff, bVelChange); }
	void AddTorque(const FVector * Torque, bool bAllowSubstepping) { NativeCall<void, const FVector *, bool>(this, "FBodyInstance.AddTorque", Torque, bAllowSubstepping); }
	void CopyBodyInstancePropertiesFrom(const FBodyInstance * FromInst) { NativeCall<void, const FBodyInstance *>(this, "FBodyInstance.CopyBodyInstancePropertiesFrom", FromInst); }
	void CreateDOFLock() { NativeCall<void>(this, "FBodyInstance.CreateDOFLock"); }
	void Disable() { NativeCall<void>(this, "FBodyInstance.Disable"); }
	bool DoesUseCollisionProfile() { return NativeCall<bool>(this, "FBodyInstance.DoesUseCollisionProfile"); }
	void Enable() { NativeCall<void>(this, "FBodyInstance.Enable"); }
	void FixupData(UObject * Loader) { NativeCall<void, UObject *>(this, "FBodyInstance.FixupData", Loader); }
	TArray<physx::PxShape *> * GetAllShapes(TArray<physx::PxShape *> * result, int * OutNumSyncShapes) { return NativeCall<TArray<physx::PxShape *> *, TArray<physx::PxShape *> *, int *>(this, "FBodyInstance.GetAllShapes", result, OutNumSyncShapes); }
	FBox * GetBodyBounds(FBox * result) { return NativeCall<FBox *, FBox *>(this, "FBodyInstance.GetBodyBounds", result); }
	FString * GetBodyDebugName(FString * result) { return NativeCall<FString *, FString *>(this, "FBodyInstance.GetBodyDebugName", result); }
	unsigned __int64 GetBodyInstanceResourceSize(EResourceSizeMode::Type Mode) { return NativeCall<unsigned __int64, EResourceSizeMode::Type>(this, "FBodyInstance.GetBodyInstanceResourceSize", Mode); }
	float GetBodyMass() { return NativeCall<float>(this, "FBodyInstance.GetBodyMass"); }
	ECollisionEnabled::Type GetCollisionEnabled() { return NativeCall<ECollisionEnabled::Type>(this, "FBodyInstance.GetCollisionEnabled"); }
	FName * GetCollisionProfileName(FName * result) { return NativeCall<FName *, FName *>(this, "FBodyInstance.GetCollisionProfileName", result); }
	TArray<UPhysicalMaterial *> * GetComplexPhysicalMaterials(TArray<UPhysicalMaterial *> * result) { return NativeCall<TArray<UPhysicalMaterial *> *, TArray<UPhysicalMaterial *> *>(this, "FBodyInstance.GetComplexPhysicalMaterials", result); }
	float GetDistanceToBody(const FVector * Point, FVector * OutPointOnBody) { return NativeCall<float, const FVector *, FVector *>(this, "FBodyInstance.GetDistanceToBody", Point, OutPointOnBody); }
	FVector * GetLockedAxis(FVector * result) { return NativeCall<FVector *, FVector *>(this, "FBodyInstance.GetLockedAxis", result); }
	bool GetObjectType() { return NativeCall<bool>(this, "FBodyInstance.GetObjectType"); }
	physx::PxRigidActor * GetPxRigidActor(int SceneType) { return NativeCall<physx::PxRigidActor *, int>(this, "FBodyInstance.GetPxRigidActor", SceneType); }
	physx::PxRigidDynamic * GetPxRigidDynamic() { return NativeCall<physx::PxRigidDynamic *>(this, "FBodyInstance.GetPxRigidDynamic"); }
	ECollisionResponse GetResponseToChannel(ECollisionChannel Channel) { return NativeCall<ECollisionResponse, ECollisionChannel>(this, "FBodyInstance.GetResponseToChannel", Channel); }
	UPhysicalMaterial * GetSimplePhysicalMaterial() { return NativeCall<UPhysicalMaterial *>(this, "FBodyInstance.GetSimplePhysicalMaterial"); }
	FVector * GetUnrealWorldAngularVelocity(FVector * result) { return NativeCall<FVector *, FVector *>(this, "FBodyInstance.GetUnrealWorldAngularVelocity", result); }
	FTransform * GetUnrealWorldTransform(FTransform * result) { return NativeCall<FTransform *, FTransform *>(this, "FBodyInstance.GetUnrealWorldTransform", result); }
	FVector * GetUnrealWorldVelocity(FVector * result) { return NativeCall<FVector *, FVector *>(this, "FBodyInstance.GetUnrealWorldVelocity", result); }
	FVector * GetUnrealWorldVelocityAtPoint(FVector * result, const FVector * Point) { return NativeCall<FVector *, FVector *, const FVector *>(this, "FBodyInstance.GetUnrealWorldVelocityAtPoint", result, Point); }
	const FWalkableSlopeOverride * GetWalkableSlopeOverride() { return NativeCall<const FWalkableSlopeOverride *>(this, "FBodyInstance.GetWalkableSlopeOverride"); }
	void InitBody(UBodySetup * Setup, const FTransform * Transform, UPrimitiveComponent * PrimComp, FPhysScene * InRBScene, physx::PxAggregate * InAggregate) { NativeCall<void, UBodySetup *, const FTransform *, UPrimitiveComponent *, FPhysScene *, physx::PxAggregate *>(this, "FBodyInstance.InitBody", Setup, Transform, PrimComp, InRBScene, InAggregate); }
	bool InternalSweepPhysX(FHitResult * OutHit, const FVector * Start, const FVector * End, const FCollisionShape * Shape, bool bTraceComplex, const physx::PxRigidActor * RigidBody, const physx::PxGeometry * Geometry) { return NativeCall<bool, FHitResult *, const FVector *, const FVector *, const FCollisionShape *, bool, const physx::PxRigidActor *, const physx::PxGeometry *>(this, "FBodyInstance.InternalSweepPhysX", OutHit, Start, End, Shape, bTraceComplex, RigidBody, Geometry); }
	bool IsInstanceAwake() { return NativeCall<bool>(this, "FBodyInstance.IsInstanceAwake"); }
	bool IsInstanceSimulatingPhysics() { return NativeCall<bool>(this, "FBodyInstance.IsInstanceSimulatingPhysics"); }
	bool IsValidBodyInstance() { return NativeCall<bool>(this, "FBodyInstance.IsValidBodyInstance"); }
	static bool IsValidCollisionProfileName(FName InCollisionProfileName) { return NativeCall<bool, FName>(nullptr, "FBodyInstance.IsValidCollisionProfileName", InCollisionProfileName); }
	bool LineTrace(FHitResult * OutHit, const FVector * Start, const FVector * End, bool bTraceComplex, bool bReturnPhysicalMaterial) { return NativeCall<bool, FHitResult *, const FVector *, const FVector *, bool, bool>(this, "FBodyInstance.LineTrace", OutHit, Start, End, bTraceComplex, bReturnPhysicalMaterial); }
	void LoadProfileData(bool bVerifyProfile) { NativeCall<void, bool>(this, "FBodyInstance.LoadProfileData", bVerifyProfile); }
	bool OverlapMulti(TArray<FOverlapResult> * InOutOverlaps, const UWorld * World, const FTransform * pWorldToComponent, const FVector * Pos, const FQuat * Quat, ECollisionChannel TestChannel, const FComponentQueryParams * Params, const FCollisionResponseParams * ResponseParams, const FCollisionObjectQueryParams * ObjectQueryParams) { return NativeCall<bool, TArray<FOverlapResult> *, const UWorld *, const FTransform *, const FVector *, const FQuat *, ECollisionChannel, const FComponentQueryParams *, const FCollisionResponseParams *, const FCollisionObjectQueryParams *>(this, "FBodyInstance.OverlapMulti", InOutOverlaps, World, pWorldToComponent, Pos, Quat, TestChannel, Params, ResponseParams, ObjectQueryParams); }
	bool OverlapPhysX(const physx::PxGeometry * PGeom, const physx::PxTransform * ShapePose) { return NativeCall<bool, const physx::PxGeometry *, const physx::PxTransform *>(this, "FBodyInstance.OverlapPhysX", PGeom, ShapePose); }
	bool OverlapTest(const FVector * Position, const FQuat * Rotation, const FCollisionShape * CollisionShape) { return NativeCall<bool, const FVector *, const FQuat *, const FCollisionShape *>(this, "FBodyInstance.OverlapTest", Position, Rotation, CollisionShape); }
	void PutInstanceToSleep() { NativeCall<void>(this, "FBodyInstance.PutInstanceToSleep"); }
	void SetAngularVelocity(const FVector * NewAngVel, bool bAddToCurrent) { NativeCall<void, const FVector *, bool>(this, "FBodyInstance.SetAngularVelocity", NewAngVel, bAddToCurrent); }
	void SetBodyTransform(const FTransform * NewTransform, bool bTeleport) { NativeCall<void, const FTransform *, bool>(this, "FBodyInstance.SetBodyTransform", NewTransform, bTeleport); }
	void SetCollisionEnabled(ECollisionEnabled::Type NewType, bool bUpdatePhysicsFilterData) { NativeCall<void, ECollisionEnabled::Type, bool>(this, "FBodyInstance.SetCollisionEnabled", NewType, bUpdatePhysicsFilterData); }
	void SetCollisionProfileName(FName InCollisionProfileName) { NativeCall<void, FName>(this, "FBodyInstance.SetCollisionProfileName", InCollisionProfileName); }
	void SetEnableGravity(bool bInGravityEnabled) { NativeCall<void, bool>(this, "FBodyInstance.SetEnableGravity", bInGravityEnabled); }
	void SetInstanceNotifyRBCollision(bool bNewNotifyCollision) { NativeCall<void, bool>(this, "FBodyInstance.SetInstanceNotifyRBCollision", bNewNotifyCollision); }
	void SetInstanceSimulatePhysics(bool bSimulate, bool bMaintainPhysicsBlending) { NativeCall<void, bool, bool>(this, "FBodyInstance.SetInstanceSimulatePhysics", bSimulate, bMaintainPhysicsBlending); }
	void SetLinearVelocity(const FVector * NewVel, bool bAddToCurrent) { NativeCall<void, const FVector *, bool>(this, "FBodyInstance.SetLinearVelocity", NewVel, bAddToCurrent); }
	void SetMaxAngularVelocity(float NewMaxAngVel, bool bAddToCurrent) { NativeCall<void, float, bool>(this, "FBodyInstance.SetMaxAngularVelocity", NewMaxAngVel, bAddToCurrent); }
	void SetMaxDepenetrationVelocity(float MaxVelocity) { NativeCall<void, float>(this, "FBodyInstance.SetMaxDepenetrationVelocity", MaxVelocity); }
	void SetObjectType(ECollisionChannel Channel) { NativeCall<void, ECollisionChannel>(this, "FBodyInstance.SetObjectType", Channel); }
	void SetPhysMaterialOverride(UPhysicalMaterial * NewPhysMaterial) { NativeCall<void, UPhysicalMaterial *>(this, "FBodyInstance.SetPhysMaterialOverride", NewPhysMaterial); }
	void SetResponseToAllChannels(ECollisionResponse NewResponse) { NativeCall<void, ECollisionResponse>(this, "FBodyInstance.SetResponseToAllChannels", NewResponse); }
	void SetResponseToChannel(ECollisionChannel Channel, ECollisionResponse NewResponse) { NativeCall<void, ECollisionChannel, ECollisionResponse>(this, "FBodyInstance.SetResponseToChannel", Channel, NewResponse); }
	void SetResponseToChannels(const FCollisionResponseContainer * NewReponses) { NativeCall<void, const FCollisionResponseContainer *>(this, "FBodyInstance.SetResponseToChannels", NewReponses); }
	bool Sweep(FHitResult * OutHit, const FVector * Start, const FVector * End, const FCollisionShape * CollisionShape, bool bTraceComplex) { return NativeCall<bool, FHitResult *, const FVector *, const FVector *, const FCollisionShape *, bool>(this, "FBodyInstance.Sweep", OutHit, Start, End, CollisionShape, bTraceComplex); }
	void TermBody() { NativeCall<void>(this, "FBodyInstance.TermBody"); }
	bool UpdateBodyScale(const FVector * InScale3D) { return NativeCall<bool, const FVector *>(this, "FBodyInstance.UpdateBodyScale", InScale3D); }
	void UpdateDampingProperties() { NativeCall<void>(this, "FBodyInstance.UpdateDampingProperties"); }
	void UpdateInstanceSimulatePhysics() { NativeCall<void>(this, "FBodyInstance.UpdateInstanceSimulatePhysics"); }
	void UpdateMassProperties() { NativeCall<void>(this, "FBodyInstance.UpdateMassProperties"); }
	void UpdatePhysicalMaterials() { NativeCall<void>(this, "FBodyInstance.UpdatePhysicalMaterials"); }
	void UpdatePhysicsFilterData(bool bForceSimpleAsComplex) { NativeCall<void, bool>(this, "FBodyInstance.UpdatePhysicsFilterData", bForceSimpleAsComplex); }
	void UpdatePhysicsShapeFilterData(unsigned int SkelMeshCompID, bool bUseComplexAsSimple, bool bUseSimpleAsComplex, bool bPhysicsStatic, TEnumAsByte<enum ECollisionEnabled::Type> * CollisionEnabledOverride, FCollisionResponseContainer * ResponseOverride, bool * bNotifyOverride) { NativeCall<void, unsigned int, bool, bool, bool, TEnumAsByte<enum ECollisionEnabled::Type> *, FCollisionResponseContainer *, bool *>(this, "FBodyInstance.UpdatePhysicsShapeFilterData", SkelMeshCompID, bUseComplexAsSimple, bUseSimpleAsComplex, bPhysicsStatic, CollisionEnabledOverride, ResponseOverride, bNotifyOverride); }
	void UpdateTriMeshVertices(const TArray<FVector> * NewPositions) { NativeCall<void, const TArray<FVector> *>(this, "FBodyInstance.UpdateTriMeshVertices", NewPositions); }
	bool UseAsyncScene() { return NativeCall<bool>(this, "FBodyInstance.UseAsyncScene"); }
	void WakeInstance() { NativeCall<void>(this, "FBodyInstance.WakeInstance"); }
};

