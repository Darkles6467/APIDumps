#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FLifetimeProperty.h"

struct AMatineeActor : AActor
{
	char __padding[0x88L];
	UInterpData * MatineeDataField() { return GetNativePointerField<UInterpData *>(this, "AMatineeActor.MatineeData"); }
	FName& MatineeControllerNameField() { return *GetNativePointerField<FName*>(this, "AMatineeActor.MatineeControllerName"); }
	float& PlayRateField() { return *GetNativePointerField<float*>(this, "AMatineeActor.PlayRate"); }
	float& ForceStartPositionField() { return *GetNativePointerField<float*>(this, "AMatineeActor.ForceStartPosition"); }
	int& MatineeManagerPriorityField() { return *GetNativePointerField<int*>(this, "AMatineeActor.MatineeManagerPriority"); }
	int& PreferredSplitScreenNumField() { return *GetNativePointerField<int*>(this, "AMatineeActor.PreferredSplitScreenNum"); }
	float& InterpPositionField() { return *GetNativePointerField<float*>(this, "AMatineeActor.InterpPosition"); }
	TArray<FInterpGroupActorInfo>& GroupActorInfosField() { return *GetNativePointerField<TArray<FInterpGroupActorInfo>*>(this, "AMatineeActor.GroupActorInfos"); }
	TArray<FCameraCutInfo>& CameraCutsField() { return *GetNativePointerField<TArray<FCameraCutInfo>*>(this, "AMatineeActor.CameraCuts"); }
	float& ClientSidePositionErrorToleranceField() { return *GetNativePointerField<float*>(this, "AMatineeActor.ClientSidePositionErrorTolerance"); }
	char& ReplicationForceIsPlayingField() { return *GetNativePointerField<char*>(this, "AMatineeActor.ReplicationForceIsPlaying"); }

	// Functions

	void AddActorToGroup(FName GroupName, AActor * TheGroupActor) { NativeCall<void, FName, AActor *>(this, "AMatineeActor.AddActorToGroup", GroupName, TheGroupActor); }
	void AddPlayerToDirectorTracks(APlayerController * PC) { NativeCall<void, APlayerController *>(this, "AMatineeActor.AddPlayerToDirectorTracks", PC); }
	void ApplyWorldOffset(const FVector * InOffset, bool bWorldShift) { NativeCall<void, const FVector *, bool>(this, "AMatineeActor.ApplyWorldOffset", InOffset, bWorldShift); }
	void BeginPlay() { NativeCall<void>(this, "AMatineeActor.BeginPlay"); }
	void ChangePlaybackDirection() { NativeCall<void>(this, "AMatineeActor.ChangePlaybackDirection"); }
	void CheckPriorityRefresh() { NativeCall<void>(this, "AMatineeActor.CheckPriorityRefresh"); }
	void EnableCinematicMode(bool bEnable) { NativeCall<void, bool>(this, "AMatineeActor.EnableCinematicMode", bEnable); }
	FName * GetFunctionNameForEvent(FName * result, FName EventName) { return NativeCall<FName *, FName *, FName>(this, "AMatineeActor.GetFunctionNameForEvent", result, EventName); }
	void InitGroupActorForGroup(UInterpGroup * InGroup, AActor * GroupActor) { NativeCall<void, UInterpGroup *, AActor *>(this, "AMatineeActor.InitGroupActorForGroup", InGroup, GroupActor); }
	void InitInterp() { NativeCall<void>(this, "AMatineeActor.InitInterp"); }
	bool IsMatineeCompatibleWithPlayer(APlayerController * InPC) { return NativeCall<bool, APlayerController *>(this, "AMatineeActor.IsMatineeCompatibleWithPlayer", InPC); }
	void NotifyEventTriggered(FName EventName, float EventTime) { NativeCall<void, FName, float>(this, "AMatineeActor.NotifyEventTriggered", EventName, EventTime); }
	void Pause() { NativeCall<void>(this, "AMatineeActor.Pause"); }
	void Play(float OverrideSetPosition, bool bOverridePositionJump) { NativeCall<void, float, bool>(this, "AMatineeActor.Play", OverrideSetPosition, bOverridePositionJump); }
	void PostInitializeComponents() { NativeCall<void>(this, "AMatineeActor.PostInitializeComponents"); }
	void PostLoad() { NativeCall<void>(this, "AMatineeActor.PostLoad"); }
	void PostLoadSubobjects(FObjectInstancingGraph * OuterInstanceGraph) { NativeCall<void, FObjectInstancingGraph *>(this, "AMatineeActor.PostLoadSubobjects", OuterInstanceGraph); }
	void Reverse() { NativeCall<void>(this, "AMatineeActor.Reverse"); }
	void SetLoopingState(bool bNewLooping) { NativeCall<void, bool>(this, "AMatineeActor.SetLoopingState", bNewLooping); }
	void SetPosition(float NewPosition, bool bJump, bool bForceJumpFromBeginningForEvents, bool bSkipMatineeUpdate) { NativeCall<void, float, bool, bool, bool>(this, "AMatineeActor.SetPosition", NewPosition, bJump, bForceJumpFromBeginningForEvents, bSkipMatineeUpdate); }
	void SetupCameraCuts() { NativeCall<void>(this, "AMatineeActor.SetupCameraCuts"); }
	void StepInterp(float DeltaTime, bool bPreview) { NativeCall<void, float, bool>(this, "AMatineeActor.StepInterp", DeltaTime, bPreview); }
	void Stop() { NativeCall<void>(this, "AMatineeActor.Stop"); }
	void TermInterp() { NativeCall<void>(this, "AMatineeActor.TermInterp"); }
	void Tick(float DeltaTime) { NativeCall<void, float>(this, "AMatineeActor.Tick", DeltaTime); }
	void UpdateInterp(float NewPosition, bool bPreview, bool bJump, bool bSkipMatineeUpdate) { NativeCall<void, float, bool, bool, bool>(this, "AMatineeActor.UpdateInterp", NewPosition, bPreview, bJump, bSkipMatineeUpdate); }
	void UpdateReplicatedData(bool bIsBeginningPlay) { NativeCall<void, bool>(this, "AMatineeActor.UpdateReplicatedData", bIsBeginningPlay); }
	void UpdateStreamingForCameraCuts(float CurrentTime, bool bPreview) { NativeCall<void, float, bool>(this, "AMatineeActor.UpdateStreamingForCameraCuts", CurrentTime, bPreview); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "AMatineeActor.GetLifetimeReplicatedProps", OutLifetimeProps); }
	float GetNetPriority(const FVector * ViewPos, const FVector * ViewDir, APlayerController * Viewer, UActorChannel * InChannel, float Time, bool bLowBandwidth) { return NativeCall<float, const FVector *, const FVector *, APlayerController *, UActorChannel *, float, bool>(this, "AMatineeActor.GetNetPriority", ViewPos, ViewDir, Viewer, InChannel, Time, bLowBandwidth); }
	void InitClientMatinee() { NativeCall<void>(this, "AMatineeActor.InitClientMatinee"); }
	void PostNetReceive() { NativeCall<void>(this, "AMatineeActor.PostNetReceive"); }
	void PreNetReceive() { NativeCall<void>(this, "AMatineeActor.PreNetReceive"); }
	void PreReplication(IRepChangedPropertyTracker * ChangedPropertyTracker) { NativeCall<void, IRepChangedPropertyTracker *>(this, "AMatineeActor.PreReplication", ChangedPropertyTracker); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "AMatineeActor.Serialize", Ar); }
};

struct AMatineeActorCameraAnim : AMatineeActor
{
	char __padding[0x8L];
	UCameraAnim * CameraAnimField() { return GetNativePointerField<UCameraAnim *>(this, "AMatineeActorCameraAnim.CameraAnim"); }

	// Functions

};

