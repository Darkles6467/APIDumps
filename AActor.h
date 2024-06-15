#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "AActor.h"
#include "FLifetimeProperty.h"
#include "FMultiUseEntry.h"

struct AActor : UObject
{
	char __padding[0x440L];
	float& CustomTimeDilationField() { return *GetNativePointerField<float*>(this, "AActor.CustomTimeDilation"); }
	float& ClientReplicationSendNowThresholdField() { return *GetNativePointerField<float*>(this, "AActor.ClientReplicationSendNowThreshold"); }
	bool& bForceAllowNetMulticastField() { return *GetNativePointerField<bool*>(this, "AActor.bForceAllowNetMulticast"); }
	TEnumAsByte<enum ENetRole>& RemoteRoleField() { return *GetNativePointerField<TEnumAsByte<enum ENetRole>*>(this, "AActor.RemoteRole"); }
	TArray<FTimerData>& TimerStasisStoreField() { return *GetNativePointerField<TArray<FTimerData>*>(this, "AActor.TimerStasisStore"); }
	long double& LastReplicatedMovementField() { return *GetNativePointerField<long double*>(this, "AActor.LastReplicatedMovement"); }
	int& LastFrameForceNetUpdateField() { return *GetNativePointerField<int*>(this, "AActor.LastFrameForceNetUpdate"); }
	FRepMovement& ReplicatedMovementField() { return *GetNativePointerField<FRepMovement*>(this, "AActor.ReplicatedMovement"); }
	FRepAttachment& AttachmentReplicationField() { return *GetNativePointerField<FRepAttachment*>(this, "AActor.AttachmentReplication"); }
	TEnumAsByte<enum ENetRole>& RoleField() { return *GetNativePointerField<TEnumAsByte<enum ENetRole>*>(this, "AActor.Role"); }
	TEnumAsByte<enum ENetDormancy>& NetDormancyField() { return *GetNativePointerField<TEnumAsByte<enum ENetDormancy>*>(this, "AActor.NetDormancy"); }
	TEnumAsByte<enum EAutoReceiveInput::Type>& AutoReceiveInputField() { return *GetNativePointerField<TEnumAsByte<enum EAutoReceiveInput::Type>*>(this, "AActor.AutoReceiveInput"); }
	int& DefaultStasisComponentOctreeFlagsField() { return *GetNativePointerField<int*>(this, "AActor.DefaultStasisComponentOctreeFlags"); }
	float& NetworkAndStasisRangeMultiplierField() { return *GetNativePointerField<float*>(this, "AActor.NetworkAndStasisRangeMultiplier"); }
	long double& UnstasisLastInRangeTimeField() { return *GetNativePointerField<long double*>(this, "AActor.UnstasisLastInRangeTime"); }
	long double& LastPreReplicationTimeField() { return *GetNativePointerField<long double*>(this, "AActor.LastPreReplicationTime"); }
	long double& LastEnterStasisTimeField() { return *GetNativePointerField<long double*>(this, "AActor.LastEnterStasisTime"); }
	long double& LastExitStasisTimeField() { return *GetNativePointerField<long double*>(this, "AActor.LastExitStasisTime"); }
	FName& CustomTagField() { return *GetNativePointerField<FName*>(this, "AActor.CustomTag"); }
	int& CustomDataField() { return *GetNativePointerField<int*>(this, "AActor.CustomData"); }
	float& ReplicationIntervalMultiplierField() { return *GetNativePointerField<float*>(this, "AActor.ReplicationIntervalMultiplier"); }
	int& ForceImmediateReplicationFrameField() { return *GetNativePointerField<int*>(this, "AActor.ForceImmediateReplicationFrame"); }
	char& StasisSetIndexField() { return *GetNativePointerField<char*>(this, "AActor.StasisSetIndex"); }
	char& RandomStartByteField() { return *GetNativePointerField<char*>(this, "AActor.RandomStartByte"); }
	unsigned __int64& LastFrameUnStasisField() { return *GetNativePointerField<unsigned __int64*>(this, "AActor.LastFrameUnStasis"); }
	volatile int& LastUnstasisFrameCounterField() { return *GetNativePointerField<volatile int*>(this, "AActor.LastUnstasisFrameCounter"); }
	UInputComponent * InputComponentField() { return GetNativePointerField<UInputComponent *>(this, "AActor.InputComponent"); }
	TEnumAsByte<enum EInputConsumeOptions>& InputConsumeOption_DEPRECATEDField() { return *GetNativePointerField<TEnumAsByte<enum EInputConsumeOptions>*>(this, "AActor.InputConsumeOption_DEPRECATED"); }
	float& NetCullDistanceSquaredField() { return *GetNativePointerField<float*>(this, "AActor.NetCullDistanceSquared"); }
	float& NetCullDistanceSquaredDormantField() { return *GetNativePointerField<float*>(this, "AActor.NetCullDistanceSquaredDormant"); }
	int& NetTagField() { return *GetNativePointerField<int*>(this, "AActor.NetTag"); }
	long double& NetUpdateTimeField() { return *GetNativePointerField<long double*>(this, "AActor.NetUpdateTime"); }
	float& NetUpdateFrequencyField() { return *GetNativePointerField<float*>(this, "AActor.NetUpdateFrequency"); }
	float& NetPriorityField() { return *GetNativePointerField<float*>(this, "AActor.NetPriority"); }
	long double& LastNetUpdateTimeField() { return *GetNativePointerField<long double*>(this, "AActor.LastNetUpdateTime"); }
	FName& NetDriverNameField() { return *GetNativePointerField<FName*>(this, "AActor.NetDriverName"); }
	int& TargetingTeamField() { return *GetNativePointerField<int*>(this, "AActor.TargetingTeam"); }
	float& OverrideStasisComponentRadiusField() { return *GetNativePointerField<float*>(this, "AActor.OverrideStasisComponentRadius"); }
	long double& CreationTimeField() { return *GetNativePointerField<long double*>(this, "AActor.CreationTime"); }
	long double& OriginalCreationTimeField() { return *GetNativePointerField<long double*>(this, "AActor.OriginalCreationTime"); }
	unsigned int& AnimUpdateRateShiftTagField() { return *GetNativePointerField<unsigned int*>(this, "AActor.AnimUpdateRateShiftTag"); }
	unsigned int& AnimUpdateRateFrameCountField() { return *GetNativePointerField<unsigned int*>(this, "AActor.AnimUpdateRateFrameCount"); }
	float& InitialLifeSpanField() { return *GetNativePointerField<float*>(this, "AActor.InitialLifeSpan"); }
	TArray<FName>& LayersField() { return *GetNativePointerField<TArray<FName>*>(this, "AActor.Layers"); }
	long double& LastRenderTimeField() { return *GetNativePointerField<long double*>(this, "AActor.LastRenderTime"); }
	long double& LastRenderTimeIgnoreShadowField() { return *GetNativePointerField<long double*>(this, "AActor.LastRenderTimeIgnoreShadow"); }
	TArray<FName>& TagsField() { return *GetNativePointerField<TArray<FName>*>(this, "AActor.Tags"); }
	unsigned __int64& HiddenEditorViewsField() { return *GetNativePointerField<unsigned __int64*>(this, "AActor.HiddenEditorViews"); }
	FVector& DefaultActorLocationField() { return *GetNativePointerField<FVector*>(this, "AActor.DefaultActorLocation"); }
	FGuid& UniqueGuidIdField() { return *GetNativePointerField<FGuid*>(this, "AActor.UniqueGuidId"); }
	int& CachedStasisGridIndexField() { return *GetNativePointerField<int*>(this, "AActor.CachedStasisGridIndex"); }
	float& ForceMaximumReplicationRateUntilTimeField() { return *GetNativePointerField<float*>(this, "AActor.ForceMaximumReplicationRateUntilTime"); }
	long double& LastActorForceReplicationTimeField() { return *GetNativePointerField<long double*>(this, "AActor.LastActorForceReplicationTime"); }
	FRenderCommandFence& DetachFenceField() { return *GetNativePointerField<FRenderCommandFence*>(this, "AActor.DetachFence"); }
	int& LastFrameCalculcatedNetworkRangeMultiplierField() { return *GetNativePointerField<int*>(this, "AActor.LastFrameCalculcatedNetworkRangeMultiplier"); }
	bool& bUseBPPreventAttachmentsField() { return *GetNativePointerField<bool*>(this, "AActor.bUseBPPreventAttachments"); }
	bool& bForceNonBlockingHitsField() { return *GetNativePointerField<bool*>(this, "AActor.bForceNonBlockingHits"); }

	// Functions

	FString * GetDebugInfoString(FString * result) { return NativeCall<FString *, FString *>(this, "AActor.GetDebugInfoString", result); }
	FString * GetDescriptiveName(FString * result) { return NativeCall<FString *, FString *>(this, "AActor.GetDescriptiveName", result); }
	bool IsLevelBoundsRelevant() { return NativeCall<bool>(this, "AActor.IsLevelBoundsRelevant"); }
	bool ServerHandleNetExecCommand(APlayerController * FromPC, FName CommandName, const FBPNetExecParams * ExecParams) { return NativeCall<bool, APlayerController *, FName, const FBPNetExecParams *>(this, "AActor.ServerHandleNetExecCommand", FromPC, CommandName, ExecParams); }
	bool IsPendingKillPending() { return NativeCall<bool>(this, "AActor.IsPendingKillPending"); }
	bool IsOwnedBy(AActor * TestOwner) { return NativeCall<bool, AActor *>(this, "AActor.IsOwnedBy", TestOwner); }
	void SetRemoteRoleForBackwardsCompat(const ENetRole InRemoteRole) { NativeCall<void, const ENetRole>(this, "AActor.SetRemoteRoleForBackwardsCompat", InRemoteRole); }
	static const wchar_t * StaticConfigName() { return NativeCall<const wchar_t *>(nullptr, "AActor.StaticConfigName"); }
	FString * GetHumanReadableName(FString * result) { return NativeCall<FString *, FString *>(this, "AActor.GetHumanReadableName", result); }
	bool ActorHasTag(FName Tag) { return NativeCall<bool, FName>(this, "AActor.ActorHasTag", Tag); }
	bool ActorLineTraceSingle(FHitResult * OutHit, const FVector * Start, const FVector * End, ECollisionChannel TraceChannel, const FCollisionQueryParams * Params) { return NativeCall<bool, FHitResult *, const FVector *, const FVector *, ECollisionChannel, const FCollisionQueryParams *>(this, "AActor.ActorLineTraceSingle", OutHit, Start, End, TraceChannel, Params); }
	FTransform * ActorToWorld(FTransform * result) { return NativeCall<FTransform *, FTransform *>(this, "AActor.ActorToWorld", result); }
	void AddActorLocalOffset(FVector DeltaLocation, bool bSweep) { NativeCall<void, FVector, bool>(this, "AActor.AddActorLocalOffset", DeltaLocation, bSweep); }
	void AddActorLocalRotation(FRotator DeltaRotation, bool bSweep) { NativeCall<void, FRotator, bool>(this, "AActor.AddActorLocalRotation", DeltaRotation, bSweep); }
	void AddActorLocalTransform(const FTransform * NewTransform, bool bSweep) { NativeCall<void, const FTransform *, bool>(this, "AActor.AddActorLocalTransform", NewTransform, bSweep); }
	void AddActorWorldOffset(FVector DeltaLocation, bool bSweep) { NativeCall<void, FVector, bool>(this, "AActor.AddActorWorldOffset", DeltaLocation, bSweep); }
	void AddActorWorldRotation(FRotator DeltaRotation, bool bSweep) { NativeCall<void, FRotator, bool>(this, "AActor.AddActorWorldRotation", DeltaRotation, bSweep); }
	void AddActorWorldTransform(const FTransform * DeltaTransform, bool bSweep) { NativeCall<void, const FTransform *, bool>(this, "AActor.AddActorWorldTransform", DeltaTransform, bSweep); }
	void AddControllingMatineeActor(AMatineeActor * InMatineeActor) { NativeCall<void, AMatineeActor *>(this, "AActor.AddControllingMatineeActor", InMatineeActor); }
	void AddOwnedComponent(UActorComponent * Component) { NativeCall<void, UActorComponent *>(this, "AActor.AddOwnedComponent", Component); }
	static void AddReferencedObjects(UObject * InThis, FReferenceCollector * Collector) { NativeCall<void, UObject *, FReferenceCollector *>(nullptr, "AActor.AddReferencedObjects", InThis, Collector); }
	void AddTickPrerequisiteActor(AActor * PrerequisiteActor) { NativeCall<void, AActor *>(this, "AActor.AddTickPrerequisiteActor", PrerequisiteActor); }
	void AddTickPrerequisiteComponent(UActorComponent * PrerequisiteComponent) { NativeCall<void, UActorComponent *>(this, "AActor.AddTickPrerequisiteComponent", PrerequisiteComponent); }
	bool AllowSaving() { return NativeCall<bool>(this, "AActor.AllowSaving"); }
	bool AlwaysReplicatePropertyConditional(UProperty * forProperty) { return NativeCall<bool, UProperty *>(this, "AActor.AlwaysReplicatePropertyConditional", forProperty); }
	void ApplyWorldOffset(const FVector * InOffset, bool bWorldShift) { NativeCall<void, const FVector *, bool>(this, "AActor.ApplyWorldOffset", InOffset, bWorldShift); }
	void AttachRootComponentTo(USceneComponent * InParent, FName InSocketName, EAttachLocation::Type AttachLocationType, bool bWeldSimulatedBodies) { NativeCall<void, USceneComponent *, FName, EAttachLocation::Type, bool>(this, "AActor.AttachRootComponentTo", InParent, InSocketName, AttachLocationType, bWeldSimulatedBodies); }
	void AttachRootComponentToActor(AActor * InParentActor, FName InSocketName, EAttachLocation::Type AttachLocationType, bool bWeldSimulatedBodies) { NativeCall<void, AActor *, FName, EAttachLocation::Type, bool>(this, "AActor.AttachRootComponentToActor", InParentActor, InSocketName, AttachLocationType, bWeldSimulatedBodies); }
	void BPGetActorEyesViewPoint(FVector * OutLocation, FRotator * OutRotation) { NativeCall<void, FVector *, FRotator *>(this, "AActor.BPGetActorEyesViewPoint", OutLocation, OutRotation); }
	bool BPIsA(TSubclassOf<AActor> anActorClass) { return NativeCall<bool, TSubclassOf<AActor>>(this, "AActor.BPIsA", anActorClass); }
	void BecomeViewTarget(APlayerController * PC) { NativeCall<void, APlayerController *>(this, "AActor.BecomeViewTarget", PC); }
	void BeginDestroy() { NativeCall<void>(this, "AActor.BeginDestroy"); }
	void BeginPlay() { NativeCall<void>(this, "AActor.BeginPlay"); }
	void CalcCamera(float DeltaTime, FMinimalViewInfo * OutResult) { NativeCall<void, float, FMinimalViewInfo *>(this, "AActor.CalcCamera", DeltaTime, OutResult); }
	FBox * CalculateComponentsBoundingBoxInLocalSpace(FBox * result, bool bNonColliding) { return NativeCall<FBox *, FBox *, bool>(this, "AActor.CalculateComponentsBoundingBoxInLocalSpace", result, bNonColliding); }
	bool CallRemoteFunction(UFunction * Function, void * Parameters, FOutParmRec * OutParms, FFrame * Stack) { return NativeCall<bool, UFunction *, void *, FOutParmRec *, FFrame *>(this, "AActor.CallRemoteFunction", Function, Parameters, OutParms, Stack); }
	void ChangeActorTeam(int NewTeam) { NativeCall<void, int>(this, "AActor.ChangeActorTeam", NewTeam); }
	bool CheckActorComponents() { return NativeCall<bool>(this, "AActor.CheckActorComponents"); }
	bool CheckDefaultSubobjectsInternal() { return NativeCall<bool>(this, "AActor.CheckDefaultSubobjectsInternal"); }
	bool CheckStillInWorld() { return NativeCall<bool>(this, "AActor.CheckStillInWorld"); }
	void ClearCrossLevelReferences() { NativeCall<void>(this, "AActor.ClearCrossLevelReferences"); }
	void ClearNetworkSpatializationParent() { NativeCall<void>(this, "AActor.ClearNetworkSpatializationParent"); }
	void ClientMultiUse(APlayerController * ForPC, int UseIndex) { NativeCall<void, APlayerController *, int>(this, "AActor.ClientMultiUse", ForPC, UseIndex); }
	void CopyRemoteRoleFrom(AActor * CopyFromActor) { NativeCall<void, AActor *>(this, "AActor.CopyRemoteRoleFrom", CopyFromActor); }
	bool Destroy(bool bNetForce, bool bShouldModifyLevel) { return NativeCall<bool, bool, bool>(this, "AActor.Destroy", bNetForce, bShouldModifyLevel); }
	void DestroyConstructedComponents() { NativeCall<void>(this, "AActor.DestroyConstructedComponents"); }
	void Destroyed() { NativeCall<void>(this, "AActor.Destroyed"); }
	void DetachRootComponentFromParent(bool bMaintainWorldPosition) { NativeCall<void, bool>(this, "AActor.DetachRootComponentFromParent", bMaintainWorldPosition); }
	void DetachSceneComponentsFromParent(USceneComponent * InParentComponent, bool bMaintainWorldPosition) { NativeCall<void, USceneComponent *, bool>(this, "AActor.DetachSceneComponentsFromParent", InParentComponent, bMaintainWorldPosition); }
	void DisableComponentsSimulatePhysics() { NativeCall<void>(this, "AActor.DisableComponentsSimulatePhysics"); }
	void DisableInput(APlayerController * PlayerController) { NativeCall<void, APlayerController *>(this, "AActor.DisableInput", PlayerController); }
	void DispatchBlockingHit(UPrimitiveComponent * MyComp, UPrimitiveComponent * OtherComp, bool bSelfMoved, const FHitResult * Hit) { NativeCall<void, UPrimitiveComponent *, UPrimitiveComponent *, bool, const FHitResult *>(this, "AActor.DispatchBlockingHit", MyComp, OtherComp, bSelfMoved, Hit); }
	void DispatchPhysicsCollisionHit(const FRigidBodyCollisionInfo * MyInfo, const FRigidBodyCollisionInfo * OtherInfo, const FCollisionImpactData * RigidCollisionData) { NativeCall<void, const FRigidBodyCollisionInfo *, const FRigidBodyCollisionInfo *, const FCollisionImpactData *>(this, "AActor.DispatchPhysicsCollisionHit", MyInfo, OtherInfo, RigidCollisionData); }
	void DisplayDebug(UCanvas * Canvas, const FDebugDisplayInfo * DebugDisplay, float * YL, float * YPos) { NativeCall<void, UCanvas *, const FDebugDisplayInfo *, float *, float *>(this, "AActor.DisplayDebug", Canvas, DebugDisplay, YL, YPos); }
	void DoExecuteActorConstruction(const FTransform * Transform, bool bIsDefaultTransform) { NativeCall<void, const FTransform *, bool>(this, "AActor.DoExecuteActorConstruction", Transform, bIsDefaultTransform); }
	void EnableInput(APlayerController * PlayerController) { NativeCall<void, APlayerController *>(this, "AActor.EnableInput", PlayerController); }
	void EndPlay(const EEndPlayReason::Type EndPlayReason) { NativeCall<void, const EEndPlayReason::Type>(this, "AActor.EndPlay", EndPlayReason); }
	void EndViewTarget(APlayerController * PC) { NativeCall<void, APlayerController *>(this, "AActor.EndViewTarget", PC); }
	void ExchangeNetRoles(bool bRemoteOwned) { NativeCall<void, bool>(this, "AActor.ExchangeNetRoles", bRemoteOwned); }
	void ExecuteConstruction(const FTransform * Transform, const FComponentInstanceDataCache * InstanceDataCache, bool bIsDefaultTransform) { NativeCall<void, const FTransform *, const FComponentInstanceDataCache *, bool>(this, "AActor.ExecuteConstruction", Transform, InstanceDataCache, bIsDefaultTransform); }
	void FellOutOfWorld(const UDamageType * dmgType) { NativeCall<void, const UDamageType *>(this, "AActor.FellOutOfWorld", dmgType); }
	void FinishAndRegisterComponent(UActorComponent * Component) { NativeCall<void, UActorComponent *>(this, "AActor.FinishAndRegisterComponent", Component); }
	void FinishSpawning(const FTransform * Transform, bool bIsDefaultTransform) { NativeCall<void, const FTransform *, bool>(this, "AActor.FinishSpawning", Transform, bIsDefaultTransform); }
	void FlushNetDormancy() { NativeCall<void>(this, "AActor.FlushNetDormancy"); }
	bool ForceAllowsInventoryUse(UObject * InventoryItemObject) { return NativeCall<bool, UObject *>(this, "AActor.ForceAllowsInventoryUse", InventoryItemObject); }
	void ForceDestroy() { NativeCall<void>(this, "AActor.ForceDestroy"); }
	void ForceNetRelevant() { NativeCall<void>(this, "AActor.ForceNetRelevant"); }
	void ForceReplicateNowWithChannel() { NativeCall<void>(this, "AActor.ForceReplicateNowWithChannel"); }
	void GetActorBounds(bool bOnlyCollidingComponents, FVector * Origin, FVector * BoxExtent) { NativeCall<void, bool, FVector *, FVector *>(this, "AActor.GetActorBounds", bOnlyCollidingComponents, Origin, BoxExtent); }
	bool GetActorEnableCollision() { return NativeCall<bool>(this, "AActor.GetActorEnableCollision"); }
	void GetActorEyesViewPoint(FVector * OutLocation, FRotator * OutRotation) { NativeCall<void, FVector *, FRotator *>(this, "AActor.GetActorEyesViewPoint", OutLocation, OutRotation); }
	FVector * GetActorForwardVector(FVector * result) { return NativeCall<FVector *, FVector *>(this, "AActor.GetActorForwardVector", result); }
	FVector * GetActorRelativeScale3D(FVector * result) { return NativeCall<FVector *, FVector *>(this, "AActor.GetActorRelativeScale3D", result); }
	FVector * GetActorRightVector(FVector * result) { return NativeCall<FVector *, FVector *>(this, "AActor.GetActorRightVector", result); }
	FVector * GetActorScale3D(FVector * result) { return NativeCall<FVector *, FVector *>(this, "AActor.GetActorScale3D", result); }
	float GetActorTimeDilation() { return NativeCall<float>(this, "AActor.GetActorTimeDilation"); }
	FVector * GetActorUpVector(FVector * result) { return NativeCall<FVector *, FVector *>(this, "AActor.GetActorUpVector", result); }
	FVector * GetActorViewDirection(FVector * result) { return NativeCall<FVector *, FVector *>(this, "AActor.GetActorViewDirection", result); }
	void GetAllSceneComponents(TArray<USceneComponent *> * OutComponents) { NativeCall<void, TArray<USceneComponent *> *>(this, "AActor.GetAllSceneComponents", OutComponents); }
	unsigned int GetAnimUpdateRateShiftTag() { return NativeCall<unsigned int>(this, "AActor.GetAnimUpdateRateShiftTag"); }
	float GetApproachRadius() { return NativeCall<float>(this, "AActor.GetApproachRadius"); }
	FName * GetAttachParentSocketName(FName * result) { return NativeCall<FName *, FName *>(this, "AActor.GetAttachParentSocketName", result); }
	void GetAttachedActors(TArray<AActor *> * OutActors) { NativeCall<void, TArray<AActor *> *>(this, "AActor.GetAttachedActors", OutActors); }
	void GetComponents(TArray<UActorComponent *> * OutComponents) { NativeCall<void, TArray<UActorComponent *> *>(this, "AActor.GetComponents", OutComponents); }
	FBox * GetComponentsBoundingBox(FBox * result, bool bNonColliding) { return NativeCall<FBox *, FBox *, bool>(this, "AActor.GetComponentsBoundingBox", result, bNonColliding); }
	FBox * GetComponentsBoundingBoxForLevelBounds(FBox * result) { return NativeCall<FBox *, FBox *>(this, "AActor.GetComponentsBoundingBoxForLevelBounds", result); }
	void GetComponentsBoundingCylinder(float * OutCollisionRadius, float * OutCollisionHalfHeight, bool bNonColliding) { NativeCall<void, float *, float *, bool>(this, "AActor.GetComponentsBoundingCylinder", OutCollisionRadius, OutCollisionHalfHeight, bNonColliding); }
	ECollisionResponse GetComponentsCollisionResponseToChannel(ECollisionChannel Channel) { return NativeCall<ECollisionResponse, ECollisionChannel>(this, "AActor.GetComponentsCollisionResponseToChannel", Channel); }
	float GetDistanceTo(AActor * OtherActor) { return NativeCall<float, AActor *>(this, "AActor.GetDistanceTo", OtherActor); }
	float GetDotProductTo(AActor * OtherActor) { return NativeCall<float, AActor *>(this, "AActor.GetDotProductTo", OtherActor); }
	int GetFunctionCallspace(UFunction * Function, void * Parameters, FFrame * Stack) { return NativeCall<int, UFunction *, void *, FFrame *>(this, "AActor.GetFunctionCallspace", Function, Parameters, Stack); }
	FVector * GetHUDWorldDrawLocation(FVector * result, const FName * HUDTag) { return NativeCall<FVector *, FVector *, const FName *>(this, "AActor.GetHUDWorldDrawLocation", result, HUDTag); }
	float GetHorizontalDistanceTo(AActor * OtherActor) { return NativeCall<float, AActor *>(this, "AActor.GetHorizontalDistanceTo", OtherActor); }
	float GetHorizontalDotProductTo(AActor * OtherActor) { return NativeCall<float, AActor *>(this, "AActor.GetHorizontalDotProductTo", OtherActor); }
	float GetInputAxisKeyValue(const FKey InputAxisKey) { return NativeCall<float, const FKey>(this, "AActor.GetInputAxisKeyValue", InputAxisKey); }
	float GetInputAxisValue(const FName InputAxisName) { return NativeCall<float, const FName>(this, "AActor.GetInputAxisValue", InputAxisName); }
	FVector * GetInputVectorAxisValue(FVector * result, const FKey InputAxisKey) { return NativeCall<FVector *, FVector *, const FKey>(this, "AActor.GetInputVectorAxisValue", result, InputAxisKey); }
	FVector * GetTargetPathfindingLocation(FVector * result, AActor * Attacker) { return NativeCall<FVector *, FVector *, AActor *>(this, "AActor.GetTargetPathfindingLocation", result, Attacker); }
	FTransform * GetInterpolatedTransform(FTransform * result) { return NativeCall<FTransform *, FTransform *>(this, "AActor.GetInterpolatedTransform", result); }
	bool GetIsMapActor() { return NativeCall<bool>(this, "AActor.GetIsMapActor"); }
	long double GetLastRenderTime(bool ignoreShadow) { return NativeCall<long double, bool>(this, "AActor.GetLastRenderTime", ignoreShadow); }
	float GetLifeSpan() { return NativeCall<float>(this, "AActor.GetLifeSpan"); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "AActor.GetLifetimeReplicatedProps", OutLifetimeProps); }
	bool GetMultiUseCenterText(APlayerController * ForPC, int UseIndex, FString * OutCenterText, FLinearColor * OutCenterTextColor) { return NativeCall<bool, APlayerController *, int, FString *, FLinearColor *>(this, "AActor.GetMultiUseCenterText", ForPC, UseIndex, OutCenterText, OutCenterTextColor); }
	void GetMultiUseEntries(APlayerController * ForPC, TArray<FMultiUseEntry> * MultiUseEntries) { NativeCall<void, APlayerController *, TArray<FMultiUseEntry> *>(this, "AActor.GetMultiUseEntries", ForPC, MultiUseEntries); }
	float GetNetPriority(const FVector * ViewPos, const FVector * ViewDir, APlayerController * Viewer, UActorChannel * InChannel, float Time, bool bLowBandwidth) { return NativeCall<float, const FVector *, const FVector *, APlayerController *, UActorChannel *, float, bool>(this, "AActor.GetNetPriority", ViewPos, ViewDir, Viewer, InChannel, Time, bLowBandwidth); }
	float GetNetStasisAndRangeMultiplier() { return NativeCall<float>(this, "AActor.GetNetStasisAndRangeMultiplier"); }
	void GetOverlappingActors(TArray<AActor *> * OverlappingActors, UClass * ClassFilter) { NativeCall<void, TArray<AActor *> *, UClass *>(this, "AActor.GetOverlappingActors", OverlappingActors, ClassFilter); }
	void GetOverlappingComponents(TArray<UPrimitiveComponent *> * OutOverlappingComponents) { NativeCall<void, TArray<UPrimitiveComponent *> *>(this, "AActor.GetOverlappingComponents", OutOverlappingComponents); }
	ENetRole GetRemoteRole() { return NativeCall<ENetRole>(this, "AActor.GetRemoteRole"); }
	void GetSimpleCollisionCylinder(float * CollisionRadius, float * CollisionHalfHeight) { NativeCall<void, float *, float *>(this, "AActor.GetSimpleCollisionCylinder", CollisionRadius, CollisionHalfHeight); }
	void GetSubobjectsWithStableNamesForNetworking(TArray<UObject *> * ObjList) { NativeCall<void, TArray<UObject *> *>(this, "AActor.GetSubobjectsWithStableNamesForNetworking", ObjList); }
	FVector * GetTargetingLocation(FVector * result, AActor * Attacker) { return NativeCall<FVector *, FVector *, AActor *>(this, "AActor.GetTargetingLocation", result, Attacker); }
	FTransform * GetTransform(FTransform * result) { return NativeCall<FTransform *, FTransform *>(this, "AActor.GetTransform", result); }
	FVector * GetVelocity(FVector * result, bool bIsForRagdoll) { return NativeCall<FVector *, FVector *, bool>(this, "AActor.GetVelocity", result, bIsForRagdoll); }
	float GetVerticalDistanceTo(AActor * OtherActor) { return NativeCall<float, AActor *>(this, "AActor.GetVerticalDistanceTo", OtherActor); }
	UWorld * GetWorld() { return NativeCall<UWorld *>(this, "AActor.GetWorld"); }
	bool HasAuthority() { return NativeCall<bool>(this, "AActor.HasAuthority"); }
	bool HasNetOwner() { return NativeCall<bool>(this, "AActor.HasNetOwner"); }
	bool IncrementalRegisterComponents(int NumComponentsToRegister, bool (__fastcall *)(const wchar_t *, long double, ULevel *) bool, ULevel * bool, long double bool) { return NativeCall<bool, int, bool (__fastcall *)(const wchar_t *, long double, ULevel *), ULevel *, long double>(this, "AActor.IncrementalRegisterComponents", NumComponentsToRegister, bool, bool, bool); }
	void InitializeComponents() { NativeCall<void>(this, "AActor.InitializeComponents"); }
	float InternalTakeRadialDamage(float Damage, const FRadialDamageEvent * RadialDamageEvent, AController * EventInstigator, AActor * DamageCauser) { return NativeCall<float, float, const FRadialDamageEvent *, AController *, AActor *>(this, "AActor.InternalTakeRadialDamage", Damage, RadialDamageEvent, EventInstigator, DamageCauser); }
	void InvalidateLightingCacheDetailed(bool bTranslationOnly) { NativeCall<void, bool>(this, "AActor.InvalidateLightingCacheDetailed", bTranslationOnly); }
	void InventoryItemDropped(UObject * InventoryItemObject) { NativeCall<void, UObject *>(this, "AActor.InventoryItemDropped", InventoryItemObject); }
	void InventoryItemUsed(UObject * InventoryItemObject) { NativeCall<void, UObject *>(this, "AActor.InventoryItemUsed", InventoryItemObject); }
	bool IsAttachedTo(AActor * Other) { return NativeCall<bool, AActor *>(this, "AActor.IsAttachedTo", Other); }
	bool IsBasedOnActor(AActor * Other) { return NativeCall<bool, AActor *>(this, "AActor.IsBasedOnActor", Other); }
	bool IsInGameplayWorld() { return NativeCall<bool>(this, "AActor.IsInGameplayWorld"); }
	bool IsInPersistentLevel(bool bIncludeLevelStreamingPersistent) { return NativeCall<bool, bool>(this, "AActor.IsInPersistentLevel", bIncludeLevelStreamingPersistent); }
	bool IsMatineeControlled() { return NativeCall<bool>(this, "AActor.IsMatineeControlled"); }
	bool IsNameStableForNetworking() { return NativeCall<bool>(this, "AActor.IsNameStableForNetworking"); }
	bool IsNetRelevantFor(APlayerController * RealViewer, AActor * Viewer, const FVector * SrcLocation) { return NativeCall<bool, APlayerController *, AActor *, const FVector *>(this, "AActor.IsNetRelevantFor", RealViewer, Viewer, SrcLocation); }
	bool IsNetStartupActor() { return NativeCall<bool>(this, "AActor.IsNetStartupActor"); }
	bool IsOwnedOrControlledBy(AActor * TestOwner) { return NativeCall<bool, AActor *>(this, "AActor.IsOwnedOrControlledBy", TestOwner); }
	bool IsPrimalCharacterOrStructure() { return NativeCall<bool>(this, "AActor.IsPrimalCharacterOrStructure"); }
	bool IsReadyForFinishDestroy() { return NativeCall<bool>(this, "AActor.IsReadyForFinishDestroy"); }
	bool IsRelevancyOwnerFor(AActor * ReplicatedActor, AActor * ActorOwner, AActor * ConnectionActor) { return NativeCall<bool, AActor *, AActor *, AActor *>(this, "AActor.IsRelevancyOwnerFor", ReplicatedActor, ActorOwner, ConnectionActor); }
	bool IsRootComponentCollisionRegistered() { return NativeCall<bool>(this, "AActor.IsRootComponentCollisionRegistered"); }
	bool IsRootComponentMovable() { return NativeCall<bool>(this, "AActor.IsRootComponentMovable"); }
	bool IsRootComponentStatic() { return NativeCall<bool>(this, "AActor.IsRootComponentStatic"); }
	bool IsRootComponentStationary() { return NativeCall<bool>(this, "AActor.IsRootComponentStationary"); }
	void K2_AttachRootComponentTo(USceneComponent * InParent, FName InSocketName, EAttachLocation::Type AttachLocationType, bool bWeldSimulatedBodies) { NativeCall<void, USceneComponent *, FName, EAttachLocation::Type, bool>(this, "AActor.K2_AttachRootComponentTo", InParent, InSocketName, AttachLocationType, bWeldSimulatedBodies); }
	void K2_AttachRootComponentToActor(AActor * InParentActor, FName InSocketName, EAttachLocation::Type AttachLocationType, bool bWeldSimulatedBodies) { NativeCall<void, AActor *, FName, EAttachLocation::Type, bool>(this, "AActor.K2_AttachRootComponentToActor", InParentActor, InSocketName, AttachLocationType, bWeldSimulatedBodies); }
	void K2_DestroyComponent(UActorComponent * Component) { NativeCall<void, UActorComponent *>(this, "AActor.K2_DestroyComponent", Component); }
	FRotator * K2_GetActorRotation(FRotator * result) { return NativeCall<FRotator *, FRotator *>(this, "AActor.K2_GetActorRotation", result); }
	UWorld * K2_GetWorld() { return NativeCall<UWorld *>(this, "AActor.K2_GetWorld"); }
	bool K2_SetActorLocation(FVector NewLocation, bool bSweep) { return NativeCall<bool, FVector, bool>(this, "AActor.K2_SetActorLocation", NewLocation, bSweep); }
	bool K2_TeleportTo(FVector DestLocation, FRotator DestRotation, bool bSimpleTeleport) { return NativeCall<bool, FVector, FRotator, bool>(this, "AActor.K2_TeleportTo", DestLocation, DestRotation, bSimpleTeleport); }
	void OutsideWorldBounds() { NativeCall<void>(this, "AActor.OutsideWorldBounds"); }
	void MakeNoise(float Loudness, APawn * NoiseInstigator, FVector NoiseLocation) { NativeCall<void, float, APawn *, FVector>(this, "AActor.MakeNoise", Loudness, NoiseInstigator, NoiseLocation); }
	static void MakeNoiseImpl(AActor * NoiseMaker, float Loudness, APawn * NoiseInstigator, const FVector * NoiseLocation) { NativeCall<void, AActor *, float, APawn *, const FVector *>(nullptr, "AActor.MakeNoiseImpl", NoiseMaker, Loudness, NoiseInstigator, NoiseLocation); }
	void MarkComponentsAsPendingKill() { NativeCall<void>(this, "AActor.MarkComponentsAsPendingKill"); }
	void MarkComponentsRenderStateDirty() { NativeCall<void>(this, "AActor.MarkComponentsRenderStateDirty"); }
	void MatineeUpdated() { NativeCall<void>(this, "AActor.MatineeUpdated"); }
	bool Modify(bool bAlwaysMarkDirty) { return NativeCall<bool, bool>(this, "AActor.Modify", bAlwaysMarkDirty); }
	void MulticastProperty(FName PropertyName) { NativeCall<void, FName>(this, "AActor.MulticastProperty", PropertyName); }
	void MulticastPropertyToPlayer(FName PropertyName, APlayerController * PC) { NativeCall<void, FName, APlayerController *>(this, "AActor.MulticastPropertyToPlayer", PropertyName, PC); }
	void NetAttachRootComponentTo_Implementation(USceneComponent * InParent, FName InSocketName, FVector RelativeLocation, FRotator RelativeRotation) { NativeCall<void, USceneComponent *, FName, FVector, FRotator>(this, "AActor.NetAttachRootComponentTo_Implementation", InParent, InSocketName, RelativeLocation, RelativeRotation); }
	void NetDetachRootComponentFromAny_Implementation() { NativeCall<void>(this, "AActor.NetDetachRootComponentFromAny_Implementation"); }
	void OnRep_AttachmentReplication() { NativeCall<void>(this, "AActor.OnRep_AttachmentReplication"); }
	void OnRep_ReplicatedMovement() { NativeCall<void>(this, "AActor.OnRep_ReplicatedMovement"); }
	void OnSubobjectCreatedFromReplication(UObject * NewSubobject) { NativeCall<void, UObject *>(this, "AActor.OnSubobjectCreatedFromReplication", NewSubobject); }
	void OnSubobjectDestroyFromReplication(UObject * NewSubobject) { NativeCall<void, UObject *>(this, "AActor.OnSubobjectDestroyFromReplication", NewSubobject); }
	void PlaySoundAtLocation(USoundCue * InSoundCue, FVector SoundLocation, float VolumeMultiplier, float PitchMultiplier) { NativeCall<void, USoundCue *, FVector, float, float>(this, "AActor.PlaySoundAtLocation", InSoundCue, SoundLocation, VolumeMultiplier, PitchMultiplier); }
	void PlaySoundOnActor(USoundCue * InSoundCue, float VolumeMultiplier, float PitchMultiplier) { NativeCall<void, USoundCue *, float, float>(this, "AActor.PlaySoundOnActor", InSoundCue, VolumeMultiplier, PitchMultiplier); }
	void PostActorConstruction() { NativeCall<void>(this, "AActor.PostActorConstruction"); }
	void PostInitProperties() { NativeCall<void>(this, "AActor.PostInitProperties"); }
	void PostInitializeComponents() { NativeCall<void>(this, "AActor.PostInitializeComponents"); }
	void PostLoad() { NativeCall<void>(this, "AActor.PostLoad"); }
	void PostLoadSubobjects(FObjectInstancingGraph * OuterInstanceGraph) { NativeCall<void, FObjectInstancingGraph *>(this, "AActor.PostLoadSubobjects", OuterInstanceGraph); }
	void PostNetInit() { NativeCall<void>(this, "AActor.PostNetInit"); }
	void PostNetReceive() { NativeCall<void>(this, "AActor.PostNetReceive"); }
	void PostNetReceiveLocationAndRotation() { NativeCall<void>(this, "AActor.PostNetReceiveLocationAndRotation"); }
	void PostNetReceivePhysicState() { NativeCall<void>(this, "AActor.PostNetReceivePhysicState"); }
	void PostSpawnInitialize(const FVector * SpawnLocation, const FRotator * SpawnRotation, AActor * InOwner, APawn * InInstigator, bool bRemoteOwned, bool bNoFail, bool bDeferConstruction, bool bDeferBeginPlay) { NativeCall<void, const FVector *, const FRotator *, AActor *, APawn *, bool, bool, bool, bool>(this, "AActor.PostSpawnInitialize", SpawnLocation, SpawnRotation, InOwner, InInstigator, bRemoteOwned, bNoFail, bDeferConstruction, bDeferBeginPlay); }
	void PreInitializeComponents() { NativeCall<void>(this, "AActor.PreInitializeComponents"); }
	void PreNetReceive() { NativeCall<void>(this, "AActor.PreNetReceive"); }
	void PreReplication(IRepChangedPropertyTracker * ChangedPropertyTracker) { NativeCall<void, IRepChangedPropertyTracker *>(this, "AActor.PreReplication", ChangedPropertyTracker); }
	void PreSave() { NativeCall<void>(this, "AActor.PreSave"); }
	void PrestreamTextures(float Seconds, bool bEnableStreaming, int CinematicTextureGroups) { NativeCall<void, float, bool, int>(this, "AActor.PrestreamTextures", Seconds, bEnableStreaming, CinematicTextureGroups); }
	bool PreventCharacterBasing(AActor * OtherActor, UPrimitiveComponent * BasedOnComponent) { return NativeCall<bool, AActor *, UPrimitiveComponent *>(this, "AActor.PreventCharacterBasing", OtherActor, BasedOnComponent); }
	void ProcessEvent(UFunction * Function, void * Parameters) { NativeCall<void, UFunction *, void *>(this, "AActor.ProcessEvent", Function, Parameters); }
	void PropertyServerToClients_Implementation(AActor * ActorToRep, const FName PropertyName, const TArray<unsigned char> * ReplicationData) { NativeCall<void, AActor *, const FName, const TArray<unsigned char> *>(this, "AActor.PropertyServerToClients_Implementation", ActorToRep, PropertyName, ReplicationData); }
	void RegisterAllComponents() { NativeCall<void>(this, "AActor.RegisterAllComponents"); }
	void RemoveControllingMatineeActor(AMatineeActor * InMatineeActor) { NativeCall<void, AMatineeActor *>(this, "AActor.RemoveControllingMatineeActor", InMatineeActor); }
	void RemoveOwnedComponent(UActorComponent * Component) { NativeCall<void, UActorComponent *>(this, "AActor.RemoveOwnedComponent", Component); }
	void RemoveTickPrerequisiteActor(AActor * PrerequisiteActor) { NativeCall<void, AActor *>(this, "AActor.RemoveTickPrerequisiteActor", PrerequisiteActor); }
	void RemoveTickPrerequisiteComponent(UActorComponent * PrerequisiteComponent) { NativeCall<void, UActorComponent *>(this, "AActor.RemoveTickPrerequisiteComponent", PrerequisiteComponent); }
	bool Rename(const wchar_t * InName, UObject * NewOuter, unsigned int Flags) { return NativeCall<bool, const wchar_t *, UObject *, unsigned int>(this, "AActor.Rename", InName, NewOuter, Flags); }
	bool ReplicateSubobjects(UActorChannel * Channel, FOutBunch * Bunch, FReplicationFlags * RepFlags) { return NativeCall<bool, UActorChannel *, FOutBunch *, FReplicationFlags *>(this, "AActor.ReplicateSubobjects", Channel, Bunch, RepFlags); }
	void ReregisterAllComponents() { NativeCall<void>(this, "AActor.ReregisterAllComponents"); }
	void RerunConstructionScripts() { NativeCall<void>(this, "AActor.RerunConstructionScripts"); }
	void ResetOwnedComponents() { NativeCall<void>(this, "AActor.ResetOwnedComponents"); }
	void ResetPropertiesForConstruction() { NativeCall<void>(this, "AActor.ResetPropertiesForConstruction"); }
	void RouteEndPlay(const EEndPlayReason::Type EndPlayReason) { NativeCall<void, const EEndPlayReason::Type>(this, "AActor.RouteEndPlay", EndPlayReason); }
	void SendExecCommand(FName CommandName, const FNetExecParams * ExecParams, bool bIsReliable) { NativeCall<void, FName, const FNetExecParams *, bool>(this, "AActor.SendExecCommand", CommandName, ExecParams, bIsReliable); }
	void ServerSendExecCommandToEveryone(FName CommandName, const FBPNetExecParams * ExecParams, bool bIsReliable, bool bForceSendToLocalPlayer, bool bIgnoreRelevancy) { NativeCall<void, FName, const FBPNetExecParams *, bool, bool, bool>(this, "AActor.ServerSendExecCommandToEveryone", CommandName, ExecParams, bIsReliable, bForceSendToLocalPlayer, bIgnoreRelevancy); }
	void ServerSendExecCommandToPlayer(APlayerController * ToPC, FName CommandName, const FBPNetExecParams * ExecParams, bool bIsReliable, bool bForceSendToLocalPlayer, bool bIgnoreRelevancy) { NativeCall<void, APlayerController *, FName, const FBPNetExecParams *, bool, bool, bool>(this, "AActor.ServerSendExecCommandToPlayer", ToPC, CommandName, ExecParams, bIsReliable, bForceSendToLocalPlayer, bIgnoreRelevancy); }
	void ServerSendSimpleExecCommandToEveryone(FName CommandName, bool bIsReliable, bool bForceSendToLocalPlayer, bool bIgnoreRelevancy) { NativeCall<void, FName, bool, bool, bool>(this, "AActor.ServerSendSimpleExecCommandToEveryone", CommandName, bIsReliable, bForceSendToLocalPlayer, bIgnoreRelevancy); }
	void SetActorEnableCollision(bool bNewActorEnableCollision) { NativeCall<void, bool>(this, "AActor.SetActorEnableCollision", bNewActorEnableCollision); }
	void SetActorHiddenInGame(bool bNewHidden) { NativeCall<void, bool>(this, "AActor.SetActorHiddenInGame", bNewHidden); }
	bool SetActorLocation(const FVector * NewLocation, bool bSweep) { return NativeCall<bool, const FVector *, bool>(this, "AActor.SetActorLocation", NewLocation, bSweep); }
	bool SetActorLocationAndRotation(const FVector * NewLocation, FRotator NewRotation, bool bSweep) { return NativeCall<bool, const FVector *, FRotator, bool>(this, "AActor.SetActorLocationAndRotation", NewLocation, NewRotation, bSweep); }
	void SetActorRelativeLocation(FVector NewRelativeLocation, bool bSweep) { NativeCall<void, FVector, bool>(this, "AActor.SetActorRelativeLocation", NewRelativeLocation, bSweep); }
	void SetActorRelativeRotation(FRotator NewRelativeRotation, bool bSweep) { NativeCall<void, FRotator, bool>(this, "AActor.SetActorRelativeRotation", NewRelativeRotation, bSweep); }
	void SetActorRelativeScale3D(FVector NewRelativeScale) { NativeCall<void, FVector>(this, "AActor.SetActorRelativeScale3D", NewRelativeScale); }
	void SetActorRelativeTransform(const FTransform * NewRelativeTransform, bool bSweep) { NativeCall<void, const FTransform *, bool>(this, "AActor.SetActorRelativeTransform", NewRelativeTransform, bSweep); }
	bool SetActorRotation(const FQuat * NewRotation) { return NativeCall<bool, const FQuat *>(this, "AActor.SetActorRotation", NewRotation); }
	bool SetActorRotation(FRotator NewRotation) { return NativeCall<bool, FRotator>(this, "AActor.SetActorRotation", NewRotation); }
	void SetActorScale3D(const FVector * NewScale3D) { NativeCall<void, const FVector *>(this, "AActor.SetActorScale3D", NewScale3D); }
	void SetActorTickEnabled(bool bEnabled) { NativeCall<void, bool>(this, "AActor.SetActorTickEnabled", bEnabled); }
	bool SetActorTransform(const FTransform * NewTransform, bool bSweep) { return NativeCall<bool, const FTransform *, bool>(this, "AActor.SetActorTransform", NewTransform, bSweep); }
	void SetAutonomousProxy(bool bInAutonomousProxy) { NativeCall<void, bool>(this, "AActor.SetAutonomousProxy", bInAutonomousProxy); }
	void SetLifeSpan(float InLifespan) { NativeCall<void, float>(this, "AActor.SetLifeSpan", InLifespan); }
	void SetNetUpdateTime(long double NewUpdateTime) { NativeCall<void, long double>(this, "AActor.SetNetUpdateTime", NewUpdateTime); }
	void SetNetworkSpatializationParent(AActor * NewParent) { NativeCall<void, AActor *>(this, "AActor.SetNetworkSpatializationParent", NewParent); }
	void SetOwner(AActor * NewOwner) { NativeCall<void, AActor *>(this, "AActor.SetOwner", NewOwner); }
	void SetReplicates(bool bInReplicates) { NativeCall<void, bool>(this, "AActor.SetReplicates", bInReplicates); }
	bool SetRootComponent(USceneComponent * NewRootComponent) { return NativeCall<bool, USceneComponent *>(this, "AActor.SetRootComponent", NewRootComponent); }
	void SetTickableWhenPaused(bool bTickableWhenPaused) { NativeCall<void, bool>(this, "AActor.SetTickableWhenPaused", bTickableWhenPaused); }
	bool SimpleTeleportTo(const FVector * DestLocation, const FRotator * DestRotation) { return NativeCall<bool, const FVector *, const FRotator *>(this, "AActor.SimpleTeleportTo", DestLocation, DestRotation); }
	void SnapRootComponentTo(AActor * InParentActor, FName InSocketName) { NativeCall<void, AActor *, FName>(this, "AActor.SnapRootComponentTo", InParentActor, InSocketName); }
	void Stasis() { NativeCall<void>(this, "AActor.Stasis"); }
	void StopActorSound(USoundBase * SoundAsset, float FadeOutTime) { NativeCall<void, USoundBase *, float>(this, "AActor.StopActorSound", SoundAsset, FadeOutTime); }
	float TakeDamage(float DamageAmount, const FDamageEvent * DamageEvent, AController * EventInstigator, AActor * DamageCauser) { return NativeCall<float, float, const FDamageEvent *, AController *, AActor *>(this, "AActor.TakeDamage", DamageAmount, DamageEvent, EventInstigator, DamageCauser); }
	void TargetingTeamChanged() { NativeCall<void>(this, "AActor.TargetingTeamChanged"); }
	bool TeleportTo(const FVector * DestLocation, const FRotator * DestRotation, bool bIsATest, bool bNoCheck) { return NativeCall<bool, const FVector *, const FRotator *, bool, bool>(this, "AActor.TeleportTo", DestLocation, DestRotation, bIsATest, bNoCheck); }
	bool TemplateAllowActorSpawn(UWorld * World, const FVector * AtLocation, const FRotator * AtRotation, const FActorSpawnParameters * SpawnParameters) { return NativeCall<bool, UWorld *, const FVector *, const FRotator *, const FActorSpawnParameters *>(this, "AActor.TemplateAllowActorSpawn", World, AtLocation, AtRotation, SpawnParameters); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AActor.Tick", DeltaSeconds); }
	bool TryMultiUse(APlayerController * ForPC, int UseIndex) { return NativeCall<bool, APlayerController *, int>(this, "AActor.TryMultiUse", ForPC, UseIndex); }
	void UninitializeComponents(const EEndPlayReason::Type EndPlayReason) { NativeCall<void, const EEndPlayReason::Type>(this, "AActor.UninitializeComponents", EndPlayReason); }
	void UnregisterAllComponents(bool bDetachFromOtherParent) { NativeCall<void, bool>(this, "AActor.UnregisterAllComponents", bDetachFromOtherParent); }
	void Unstasis() { NativeCall<void>(this, "AActor.Unstasis"); }
	void UpdateOverlaps(bool bDoNotifies) { NativeCall<void, bool>(this, "AActor.UpdateOverlaps", bDoNotifies); }
	void GatherCurrentMovement() { NativeCall<void>(this, "AActor.GatherCurrentMovement"); }
	void ForceNetUpdate(bool bDormantDontReplicateProperties, bool bAbsoluteForceNetUpdate, bool bDontUpdateChannel) { NativeCall<void, bool, bool, bool>(this, "AActor.ForceNetUpdate", bDormantDontReplicateProperties, bAbsoluteForceNetUpdate, bDontUpdateChannel); }
	void ForceReplicateNow(bool bForceCreateChannel, bool bForceCreateChannelIfRelevant) { NativeCall<void, bool, bool>(this, "AActor.ForceReplicateNow", bForceCreateChannel, bForceCreateChannelIfRelevant); }
	void ActorPlaySound(USoundBase * SoundAsset, bool bAttach, FName BoneName, FVector LocOffset) { NativeCall<void, USoundBase *, bool, FName, FVector>(this, "AActor.ActorPlaySound", SoundAsset, bAttach, BoneName, LocOffset); }
	void ActorPlaySoundUnreliable(USoundBase * SoundAsset, bool bAttach, FName BoneName, FVector LocOffset) { NativeCall<void, USoundBase *, bool, FName, FVector>(this, "AActor.ActorPlaySoundUnreliable", SoundAsset, bAttach, BoneName, LocOffset); }
	bool AllowGrappling() { return NativeCall<bool>(this, "AActor.AllowGrappling"); }
	bool AllowIgnoreCharacterEncroachment(UPrimitiveComponent * HitComponent, AActor * EncroachingCharacter) { return NativeCall<bool, UPrimitiveComponent *, AActor *>(this, "AActor.AllowIgnoreCharacterEncroachment", HitComponent, EncroachingCharacter); }
	bool AllowManualMultiUseActivation(APlayerController * ForPC) { return NativeCall<bool, APlayerController *>(this, "AActor.AllowManualMultiUseActivation", ForPC); }
	void BPAttachedRootComponent() { NativeCall<void>(this, "AActor.BPAttachedRootComponent"); }
	void BPChangedActorTeam() { NativeCall<void>(this, "AActor.BPChangedActorTeam"); }
	void BPClientDoMultiUse(APlayerController * ForPC, int ClientUseIndex) { NativeCall<void, APlayerController *, int>(this, "AActor.BPClientDoMultiUse", ForPC, ClientUseIndex); }
	bool BPClientHandleNetExecCommand(FName CommandName, const FBPNetExecParams * ExecParams, APlayerController * ForPC) { return NativeCall<bool, FName, const FBPNetExecParams *, APlayerController *>(this, "AActor.BPClientHandleNetExecCommand", CommandName, ExecParams, ForPC); }
	bool BPConsumeSetPinCode(APlayerController * ForPC, int appledPinCode, bool bIsSetting, int TheCustomIndex) { return NativeCall<bool, APlayerController *, int, bool, int>(this, "AActor.BPConsumeSetPinCode", ForPC, appledPinCode, bIsSetting, TheCustomIndex); }
	bool BPConsumeUsePinCode(AActor * FromKeypadActor, APlayerController * ForPC, int appledPinCode, bool bIsActivating) { return NativeCall<bool, AActor *, APlayerController *, int, bool>(this, "AActor.BPConsumeUsePinCode", FromKeypadActor, ForPC, appledPinCode, bIsActivating); }
	bool BPCustomIsRelevantForClient(APlayerController * ForPC) { return NativeCall<bool, APlayerController *>(this, "AActor.BPCustomIsRelevantForClient", ForPC); }
	bool BPForceAllowsInventoryUse(UObject * InventoryItemObject) { return NativeCall<bool, UObject *>(this, "AActor.BPForceAllowsInventoryUse", InventoryItemObject); }
	TArray<FName> * BPGetBonesToHideOnAllocation(TArray<FName> * result) { return NativeCall<TArray<FName> *, TArray<FName> *>(this, "AActor.BPGetBonesToHideOnAllocation", result); }
	int BPGetExtraSpecialBlueprintInt(int toCheck) { return NativeCall<int, int>(this, "AActor.BPGetExtraSpecialBlueprintInt", toCheck); }
	bool BPGetMultiUseCenterText(APlayerController * ForPC, int UseIndex, FString * OutCenterText, FLinearColor * OutCenterTextColor) { return NativeCall<bool, APlayerController *, int, FString *, FLinearColor *>(this, "AActor.BPGetMultiUseCenterText", ForPC, UseIndex, OutCenterText, OutCenterTextColor); }
	TArray<FMultiUseEntry> * BPGetMultiUseEntries(TArray<FMultiUseEntry> * result, APlayerController * ForPC, const TArray<FMultiUseEntry> * MultiUseEntries) { return NativeCall<TArray<FMultiUseEntry> *, TArray<FMultiUseEntry> *, APlayerController *, const TArray<FMultiUseEntry> *>(this, "AActor.BPGetMultiUseEntries", result, ForPC, MultiUseEntries); }
	void BPGetShowDebugAnimationComponents(TArray<USkeletalMeshComponent *> * SkelMeshComponents) { NativeCall<void, TArray<USkeletalMeshComponent *> *>(this, "AActor.BPGetShowDebugAnimationComponents", SkelMeshComponents); }
	void BPInventoryItemDropped(UObject * InventoryItemObject) { NativeCall<void, UObject *>(this, "AActor.BPInventoryItemDropped", InventoryItemObject); }
	void BPInventoryItemUsed(UObject * InventoryItemObject) { NativeCall<void, UObject *>(this, "AActor.BPInventoryItemUsed", InventoryItemObject); }
	FVector * BPOverrideUILocation(FVector * result, APlayerController * ForPC) { return NativeCall<FVector *, FVector *, APlayerController *>(this, "AActor.BPOverrideUILocation", result, ForPC); }
	void BPPostInitializeComponents() { NativeCall<void>(this, "AActor.BPPostInitializeComponents"); }
	void BPPreInitializeComponents() { NativeCall<void>(this, "AActor.BPPreInitializeComponents"); }
	bool BPPreventAttachments(UObject * ForItem) { return NativeCall<bool, UObject *>(this, "AActor.BPPreventAttachments", ForItem); }
	bool BPServerHandleNetExecCommand(APlayerController * FromPC, FName CommandName, const FBPNetExecParams * ExecParams) { return NativeCall<bool, APlayerController *, FName, const FBPNetExecParams *>(this, "AActor.BPServerHandleNetExecCommand", FromPC, CommandName, ExecParams); }
	bool BPTryMultiUse(APlayerController * ForPC, int UseIndex) { return NativeCall<bool, APlayerController *, int>(this, "AActor.BPTryMultiUse", ForPC, UseIndex); }
	FVector * BP_GetHUDWorldDrawLocation(FVector * result, const FName HUDTag) { return NativeCall<FVector *, FVector *, const FName>(this, "AActor.BP_GetHUDWorldDrawLocation", result, HUDTag); }
	FVector * BP_OverrideTargetingLocation(FVector * result, AActor * Attacker) { return NativeCall<FVector *, FVector *, AActor *>(this, "AActor.BP_OverrideTargetingLocation", result, Attacker); }
	void DrawBasicFloatingHUD(AHUD * ForHUD) { NativeCall<void, AHUD *>(this, "AActor.DrawBasicFloatingHUD", ForHUD); }
	float GetUsablePriority() { return NativeCall<float>(this, "AActor.GetUsablePriority"); }
	void K2_OnBecomeViewTarget(APlayerController * PC) { NativeCall<void, APlayerController *>(this, "AActor.K2_OnBecomeViewTarget", PC); }
	void K2_OnEndViewTarget(APlayerController * PC) { NativeCall<void, APlayerController *>(this, "AActor.K2_OnEndViewTarget", PC); }
	void ModifyHudMultiUseLoc(FVector2D * theVec, APlayerController * PC, int index) { NativeCall<void, FVector2D *, APlayerController *, int>(this, "AActor.ModifyHudMultiUseLoc", theVec, PC, index); }
	void MulticastDrawDebugArrow(const FVector LineStart, const FVector LineEnd, float ArrowSize, FLinearColor LineColor, float Duration, bool enableInShipping) { NativeCall<void, const FVector, const FVector, float, FLinearColor, float, bool>(this, "AActor.MulticastDrawDebugArrow", LineStart, LineEnd, ArrowSize, LineColor, Duration, enableInShipping); }
	void MulticastDrawDebugBox(const FVector Center, FVector Extent, FLinearColor LineColor, const FRotator Rotation, float Duration, bool enableInShipping) { NativeCall<void, const FVector, FVector, FLinearColor, const FRotator, float, bool>(this, "AActor.MulticastDrawDebugBox", Center, Extent, LineColor, Rotation, Duration, enableInShipping); }
	void MulticastDrawDebugCamera(const ACameraActor * CameraActor, FLinearColor CameraColor, float Duration, bool enableInShipping) { NativeCall<void, const ACameraActor *, FLinearColor, float, bool>(this, "AActor.MulticastDrawDebugCamera", CameraActor, CameraColor, Duration, enableInShipping); }
	void MulticastDrawDebugCapsule(const FVector Center, float HalfHeight, float Radius, const FRotator Rotation, FLinearColor LineColor, float Duration, bool enableInShipping) { NativeCall<void, const FVector, float, float, const FRotator, FLinearColor, float, bool>(this, "AActor.MulticastDrawDebugCapsule", Center, HalfHeight, Radius, Rotation, LineColor, Duration, enableInShipping); }
	void MulticastDrawDebugCapsuleWithExtents(const FVector Top, const FVector Bottom, float Radius, FLinearColor LineColor, float Duration, bool bPersistent, bool enableInShipping) { NativeCall<void, const FVector, const FVector, float, FLinearColor, float, bool, bool>(this, "AActor.MulticastDrawDebugCapsuleWithExtents", Top, Bottom, Radius, LineColor, Duration, bPersistent, enableInShipping); }
	void MulticastDrawDebugCoordinateSystem(const FVector AxisLoc, const FRotator AxisRot, float Scale, float Duration, float Thickness, bool enableInShipping) { NativeCall<void, const FVector, const FRotator, float, float, float, bool>(this, "AActor.MulticastDrawDebugCoordinateSystem", AxisLoc, AxisRot, Scale, Duration, Thickness, enableInShipping); }
	void MulticastDrawDebugCylinder(const FVector Start, const FVector End, float Radius, int Segments, FLinearColor LineColor, float Duration, bool enableInShipping) { NativeCall<void, const FVector, const FVector, float, int, FLinearColor, float, bool>(this, "AActor.MulticastDrawDebugCylinder", Start, End, Radius, Segments, LineColor, Duration, enableInShipping); }
	void MulticastDrawDebugLine(const FVector LineStart, const FVector LineEnd, FLinearColor LineColor, float Duration, float Thickness, bool enableInShipping) { NativeCall<void, const FVector, const FVector, FLinearColor, float, float, bool>(this, "AActor.MulticastDrawDebugLine", LineStart, LineEnd, LineColor, Duration, Thickness, enableInShipping); }
	void MulticastDrawDebugPoint(const FVector Position, float Size, FLinearColor PointColor, float Duration, bool enableInShipping) { NativeCall<void, const FVector, float, FLinearColor, float, bool>(this, "AActor.MulticastDrawDebugPoint", Position, Size, PointColor, Duration, enableInShipping); }
	void MulticastDrawDebugSphere(const FVector Center, float Radius, int Segments, FLinearColor LineColor, float Duration, bool enableInShipping) { NativeCall<void, const FVector, float, int, FLinearColor, float, bool>(this, "AActor.MulticastDrawDebugSphere", Center, Radius, Segments, LineColor, Duration, enableInShipping); }
	void MulticastDrawDebugString(const FVector TextLocation, const FString * Text, AActor * TestBaseActor, FLinearColor TextColor, float Duration, bool enableInShipping) { NativeCall<void, const FVector, const FString *, AActor *, FLinearColor, float, bool>(this, "AActor.MulticastDrawDebugString", TextLocation, Text, TestBaseActor, TextColor, Duration, enableInShipping); }
	void NetAttachRootComponentTo(USceneComponent * InParent, FName InSocketName, FVector RelativeLocation, FRotator RelativeRotation) { NativeCall<void, USceneComponent *, FName, FVector, FRotator>(this, "AActor.NetAttachRootComponentTo", InParent, InSocketName, RelativeLocation, RelativeRotation); }
	void OnInventoryItemGrind() { NativeCall<void>(this, "AActor.OnInventoryItemGrind"); }
	void PerformanceThrottledTick() { NativeCall<void>(this, "AActor.PerformanceThrottledTick"); }
	void PropertyServerToClients(AActor * ActorToRep, const FName PropertyName, const TArray<unsigned char> * ReplicationData) { NativeCall<void, AActor *, const FName, const TArray<unsigned char> *>(this, "AActor.PropertyServerToClients", ActorToRep, PropertyName, ReplicationData); }
	void ReceiveActorBeginCursorOver() { NativeCall<void>(this, "AActor.ReceiveActorBeginCursorOver"); }
	void ReceiveActorBeginOverlap(AActor * OtherActor) { NativeCall<void, AActor *>(this, "AActor.ReceiveActorBeginOverlap", OtherActor); }
	void ReceiveActorEndCursorOver() { NativeCall<void>(this, "AActor.ReceiveActorEndCursorOver"); }
	void ReceiveActorEndOverlap(AActor * OtherActor) { NativeCall<void, AActor *>(this, "AActor.ReceiveActorEndOverlap", OtherActor); }
	void ReceiveActorOnClicked() { NativeCall<void>(this, "AActor.ReceiveActorOnClicked"); }
	void ReceiveActorOnInputTouchBegin(const ETouchIndex::Type FingerIndex) { NativeCall<void, const ETouchIndex::Type>(this, "AActor.ReceiveActorOnInputTouchBegin", FingerIndex); }
	void ReceiveActorOnInputTouchEnd(const ETouchIndex::Type FingerIndex) { NativeCall<void, const ETouchIndex::Type>(this, "AActor.ReceiveActorOnInputTouchEnd", FingerIndex); }
	void ReceiveActorOnInputTouchEnter(const ETouchIndex::Type FingerIndex) { NativeCall<void, const ETouchIndex::Type>(this, "AActor.ReceiveActorOnInputTouchEnter", FingerIndex); }
	void ReceiveActorOnInputTouchLeave(const ETouchIndex::Type FingerIndex) { NativeCall<void, const ETouchIndex::Type>(this, "AActor.ReceiveActorOnInputTouchLeave", FingerIndex); }
	void ReceiveActorOnReleased() { NativeCall<void>(this, "AActor.ReceiveActorOnReleased"); }
	void ReceiveAnyDamage(float Damage, const UDamageType * DamageType, AController * InstigatedBy, AActor * DamageCauser) { NativeCall<void, float, const UDamageType *, AController *, AActor *>(this, "AActor.ReceiveAnyDamage", Damage, DamageType, InstigatedBy, DamageCauser); }
	void ReceiveBeginPlay() { NativeCall<void>(this, "AActor.ReceiveBeginPlay"); }
	void ReceiveDestroyed() { NativeCall<void>(this, "AActor.ReceiveDestroyed"); }
	void ReceiveEndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "AActor.ReceiveEndPlay", EndPlayReason); }
	void ReceiveHit(UPrimitiveComponent * MyComp, AActor * Other, UPrimitiveComponent * OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult * Hit) { NativeCall<void, UPrimitiveComponent *, AActor *, UPrimitiveComponent *, bool, FVector, FVector, FVector, const FHitResult *>(this, "AActor.ReceiveHit", MyComp, Other, OtherComp, bSelfMoved, HitLocation, HitNormal, NormalImpulse, Hit); }
	void ReceiveInput(const FString * InputName, float Value, FVector VectorValue, bool bStarted, bool bEnded) { NativeCall<void, const FString *, float, FVector, bool, bool>(this, "AActor.ReceiveInput", InputName, Value, VectorValue, bStarted, bEnded); }
	void ReceivePointDamage(float Damage, const UDamageType * DamageType, FVector HitLocation, FVector HitNormal, UPrimitiveComponent * HitComponent, FName BoneName, FVector ShotFromDirection, AController * InstigatedBy, AActor * DamageCauser) { NativeCall<void, float, const UDamageType *, FVector, FVector, UPrimitiveComponent *, FName, FVector, AController *, AActor *>(this, "AActor.ReceivePointDamage", Damage, DamageType, HitLocation, HitNormal, HitComponent, BoneName, ShotFromDirection, InstigatedBy, DamageCauser); }
	void ReceiveRadialDamage(float DamageReceived, const UDamageType * DamageType, FVector Origin, const FHitResult * HitInfo, AController * InstigatedBy, AActor * DamageCauser) { NativeCall<void, float, const UDamageType *, FVector, const FHitResult *, AController *, AActor *>(this, "AActor.ReceiveRadialDamage", DamageReceived, DamageType, Origin, HitInfo, InstigatedBy, DamageCauser); }
	void ReceiveTick(float DeltaSeconds) { NativeCall<void, float>(this, "AActor.ReceiveTick", DeltaSeconds); }
	void RecieveMatineeUpdated() { NativeCall<void>(this, "AActor.RecieveMatineeUpdated"); }
	void ThrottledTick() { NativeCall<void>(this, "AActor.ThrottledTick"); }
	void UserConstructionScript() { NativeCall<void>(this, "AActor.UserConstructionScript"); }
};

