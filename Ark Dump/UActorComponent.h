#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UAssetUserData.h"
#include "FLifetimeProperty.h"

struct UActorComponent : UObject
{
	char __padding[0xb0L];
	TArray<FName>& ComponentTagsField() { return *GetNativePointerField<TArray<FName>*>(this, "UActorComponent.ComponentTags"); }
	TArray<UAssetUserData *>& AssetUserDataField() { return *GetNativePointerField<TArray<UAssetUserData *>*>(this, "UActorComponent.AssetUserData"); }
	FName& CustomTagField() { return *GetNativePointerField<FName*>(this, "UActorComponent.CustomTag"); }
	int& CustomDataField() { return *GetNativePointerField<int*>(this, "UActorComponent.CustomData"); }
	UWorld * WorldField() { return GetNativePointerField<UWorld *>(this, "UActorComponent.World"); }

	// Functions

	void InvalidateLightingCache() { NativeCall<void>(this, "UActorComponent.InvalidateLightingCache"); }
	bool IsPhysicsStateCreated() { return NativeCall<bool>(this, "UActorComponent.IsPhysicsStateCreated"); }
	void Activate(bool bReset) { NativeCall<void, bool>(this, "UActorComponent.Activate", bReset); }
	void AddAssetUserData(UAssetUserData * InUserData) { NativeCall<void, UAssetUserData *>(this, "UActorComponent.AddAssetUserData", InUserData); }
	void AddTickPrerequisiteActor(AActor * PrerequisiteActor) { NativeCall<void, AActor *>(this, "UActorComponent.AddTickPrerequisiteActor", PrerequisiteActor); }
	void AddTickPrerequisiteComponent(UActorComponent * PrerequisiteComponent) { NativeCall<void, UActorComponent *>(this, "UActorComponent.AddTickPrerequisiteComponent", PrerequisiteComponent); }
	bool AlwaysReplicatePropertyConditional(UProperty * forProperty) { return NativeCall<bool, UProperty *>(this, "UActorComponent.AlwaysReplicatePropertyConditional", forProperty); }
	void BPTickComponent(float DeltaTime) { NativeCall<void, float>(this, "UActorComponent.BPTickComponent", DeltaTime); }
	void BeginDestroy() { NativeCall<void>(this, "UActorComponent.BeginDestroy"); }
	bool CallRemoteFunction(UFunction * Function, void * Parameters, FOutParmRec * OutParms, FFrame * Stack) { return NativeCall<bool, UFunction *, void *, FOutParmRec *, FFrame *>(this, "UActorComponent.CallRemoteFunction", Function, Parameters, OutParms, Stack); }
	bool ComponentHasTag(FName Tag) { return NativeCall<bool, FName>(this, "UActorComponent.ComponentHasTag", Tag); }
	void CreatePhysicsState() { NativeCall<void>(this, "UActorComponent.CreatePhysicsState"); }
	void CreateRenderState_Concurrent() { NativeCall<void>(this, "UActorComponent.CreateRenderState_Concurrent"); }
	void Deactivate() { NativeCall<void>(this, "UActorComponent.Deactivate"); }
	void DestroyComponent() { NativeCall<void>(this, "UActorComponent.DestroyComponent"); }
	void DestroyPhysicsState() { NativeCall<void>(this, "UActorComponent.DestroyPhysicsState"); }
	void DestroyRenderState_Concurrent() { NativeCall<void>(this, "UActorComponent.DestroyRenderState_Concurrent"); }
	void DoDeferredRenderUpdates_Concurrent() { NativeCall<void>(this, "UActorComponent.DoDeferredRenderUpdates_Concurrent"); }
	void ExecuteRegisterEvents() { NativeCall<void>(this, "UActorComponent.ExecuteRegisterEvents"); }
	void ExecuteUnregisterEvents() { NativeCall<void>(this, "UActorComponent.ExecuteUnregisterEvents"); }
	UAssetUserData * GetAssetUserDataOfClass(TSubclassOf<UAssetUserData> InUserDataClass) { return NativeCall<UAssetUserData *, TSubclassOf<UAssetUserData>>(this, "UActorComponent.GetAssetUserDataOfClass", InUserDataClass); }
	ULevel * GetComponentLevel() { return NativeCall<ULevel *>(this, "UActorComponent.GetComponentLevel"); }
	int GetFunctionCallspace(UFunction * Function, void * Parameters, FFrame * Stack) { return NativeCall<int, UFunction *, void *, FFrame *>(this, "UActorComponent.GetFunctionCallspace", Function, Parameters, Stack); }
	bool GetIsReplicated() { return NativeCall<bool>(this, "UActorComponent.GetIsReplicated"); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "UActorComponent.GetLifetimeReplicatedProps", OutLifetimeProps); }
	FString * GetReadableName(FString * result) { return NativeCall<FString *, FString *>(this, "UActorComponent.GetReadableName", result); }
	UWorld * GetWorld() { return NativeCall<UWorld *>(this, "UActorComponent.GetWorld"); }
	void InitializeComponent() { NativeCall<void>(this, "UActorComponent.InitializeComponent"); }
	bool IsComponentTickEnabled() { return NativeCall<bool>(this, "UActorComponent.IsComponentTickEnabled"); }
	bool IsNameStableForNetworking() { return NativeCall<bool>(this, "UActorComponent.IsNameStableForNetworking"); }
	bool IsNetSimulating() { return NativeCall<bool>(this, "UActorComponent.IsNetSimulating"); }
	bool IsOwnerSelected() { return NativeCall<bool>(this, "UActorComponent.IsOwnerSelected"); }
	bool IsActive() { return NativeCall<bool>(this, "UActorComponent.IsActive"); }
	bool IsSupportedForNetworking() { return NativeCall<bool>(this, "UActorComponent.IsSupportedForNetworking"); }
	void MarkForNeededEndOfFrameRecreate() { NativeCall<void>(this, "UActorComponent.MarkForNeededEndOfFrameRecreate"); }
	void MarkForNeededEndOfFrameUpdate() { NativeCall<void>(this, "UActorComponent.MarkForNeededEndOfFrameUpdate"); }
	void MarkRenderDynamicDataDirty() { NativeCall<void>(this, "UActorComponent.MarkRenderDynamicDataDirty"); }
	void MarkRenderStateDirty() { NativeCall<void>(this, "UActorComponent.MarkRenderStateDirty"); }
	void MarkRenderTransformDirty() { NativeCall<void>(this, "UActorComponent.MarkRenderTransformDirty"); }
	bool NeedsLoadForClient() { return NativeCall<bool>(this, "UActorComponent.NeedsLoadForClient"); }
	bool NeedsLoadForServer() { return NativeCall<bool>(this, "UActorComponent.NeedsLoadForServer"); }
	void OnComponentCreated() { NativeCall<void>(this, "UActorComponent.OnComponentCreated"); }
	void OnComponentDestroyed() { NativeCall<void>(this, "UActorComponent.OnComponentDestroyed"); }
	void OnRegister() { NativeCall<void>(this, "UActorComponent.OnRegister"); }
	void OnRep_IsActive() { NativeCall<void>(this, "UActorComponent.OnRep_IsActive"); }
	void OnUnregister() { NativeCall<void>(this, "UActorComponent.OnUnregister"); }
	void PostInitProperties() { NativeCall<void>(this, "UActorComponent.PostInitProperties"); }
	void PostRename(UObject * OldOuter, const FName OldName) { NativeCall<void, UObject *, const FName>(this, "UActorComponent.PostRename", OldOuter, OldName); }
	void RecreatePhysicsState(bool bRestoreBoneTransforms) { NativeCall<void, bool>(this, "UActorComponent.RecreatePhysicsState", bRestoreBoneTransforms); }
	void RecreateRenderState_Concurrent() { NativeCall<void>(this, "UActorComponent.RecreateRenderState_Concurrent"); }
	void RegisterComponent() { NativeCall<void>(this, "UActorComponent.RegisterComponent"); }
	void RegisterComponentWithWorld(UWorld * InWorld) { NativeCall<void, UWorld *>(this, "UActorComponent.RegisterComponentWithWorld", InWorld); }
	void RemoveTickPrerequisiteActor(AActor * PrerequisiteActor) { NativeCall<void, AActor *>(this, "UActorComponent.RemoveTickPrerequisiteActor", PrerequisiteActor); }
	void RemoveTickPrerequisiteComponent(UActorComponent * PrerequisiteComponent) { NativeCall<void, UActorComponent *>(this, "UActorComponent.RemoveTickPrerequisiteComponent", PrerequisiteComponent); }
	void RemoveUserDataOfClass(TSubclassOf<UAssetUserData> InUserDataClass) { NativeCall<void, TSubclassOf<UAssetUserData>>(this, "UActorComponent.RemoveUserDataOfClass", InUserDataClass); }
	void ReregisterComponent() { NativeCall<void>(this, "UActorComponent.ReregisterComponent"); }
	void SendRenderDynamicData_Concurrent() { NativeCall<void>(this, "UActorComponent.SendRenderDynamicData_Concurrent"); }
	void SendRenderTransform_Concurrent() { NativeCall<void>(this, "UActorComponent.SendRenderTransform_Concurrent"); }
	void SetActive(bool bNewActive, bool bReset) { NativeCall<void, bool, bool>(this, "UActorComponent.SetActive", bNewActive, bReset); }
	void SetComponentTickEnabled(bool bEnabled) { NativeCall<void, bool>(this, "UActorComponent.SetComponentTickEnabled", bEnabled); }
	void SetComponentTickEnabledAsync(bool bEnabled) { NativeCall<void, bool>(this, "UActorComponent.SetComponentTickEnabledAsync", bEnabled); }
	void SetIsReplicated(bool ShouldReplicate) { NativeCall<void, bool>(this, "UActorComponent.SetIsReplicated", ShouldReplicate); }
	void SetNetAddressable() { NativeCall<void>(this, "UActorComponent.SetNetAddressable"); }
	void SetTickGroup(ETickingGroup NewTickGroup) { NativeCall<void, ETickingGroup>(this, "UActorComponent.SetTickGroup", NewTickGroup); }
	bool ShouldActivate() { return NativeCall<bool>(this, "UActorComponent.ShouldActivate"); }
	void ToggleActive() { NativeCall<void>(this, "UActorComponent.ToggleActive"); }
	void UninitializeComponent() { NativeCall<void>(this, "UActorComponent.UninitializeComponent"); }
	void UnregisterComponent() { NativeCall<void>(this, "UActorComponent.UnregisterComponent"); }
	void AddedAsPrimalItemAttachment() { NativeCall<void>(this, "UActorComponent.AddedAsPrimalItemAttachment"); }
	void BPOnComponentCreated() { NativeCall<void>(this, "UActorComponent.BPOnComponentCreated"); }
	void BPOnComponentDestroyed() { NativeCall<void>(this, "UActorComponent.BPOnComponentDestroyed"); }
	void BPOnComponentTick(float DeltaTime) { NativeCall<void, float>(this, "UActorComponent.BPOnComponentTick", DeltaTime); }
};

