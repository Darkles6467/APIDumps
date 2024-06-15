#pragma once

#include "BaseDeclarations.h"
struct FAnimMontageInstance
{
	char __padding[0x70L];
	UAnimMontage * MontageField() { return GetNativePointerField<UAnimMontage *>(this, "FAnimMontageInstance.Montage"); }
	float& DesiredWeightField() { return *GetNativePointerField<float*>(this, "FAnimMontageInstance.DesiredWeight"); }
	float& WeightField() { return *GetNativePointerField<float*>(this, "FAnimMontageInstance.Weight"); }
	float& BlendTimeField() { return *GetNativePointerField<float*>(this, "FAnimMontageInstance.BlendTime"); }
	float& BlendOutTimeOverrideField() { return *GetNativePointerField<float*>(this, "FAnimMontageInstance.BlendOutTimeOverride"); }
	bool& bPauseOnFinishField() { return *GetNativePointerField<bool*>(this, "FAnimMontageInstance.bPauseOnFinish"); }
	float& DefaultBlendTimeMultiplierField() { return *GetNativePointerField<float*>(this, "FAnimMontageInstance.DefaultBlendTimeMultiplier"); }
	TArray<int>& NextSectionsField() { return *GetNativePointerField<TArray<int>*>(this, "FAnimMontageInstance.NextSections"); }
	TArray<int>& PrevSectionsField() { return *GetNativePointerField<TArray<int>*>(this, "FAnimMontageInstance.PrevSections"); }
	bool& bPlayingField() { return *GetNativePointerField<bool*>(this, "FAnimMontageInstance.bPlaying"); }
	bool& bInterruptedField() { return *GetNativePointerField<bool*>(this, "FAnimMontageInstance.bInterrupted"); }
	float& PreviousWeightField() { return *GetNativePointerField<float*>(this, "FAnimMontageInstance.PreviousWeight"); }
	float& PositionField() { return *GetNativePointerField<float*>(this, "FAnimMontageInstance.Position"); }
	float& PlayRateField() { return *GetNativePointerField<float*>(this, "FAnimMontageInstance.PlayRate"); }

	// Functions

	void Advance(float DeltaTime, FRootMotionMovementParams * OutRootMotionParams) { NativeCall<void, float, FRootMotionMovementParams *>(this, "FAnimMontageInstance.Advance", DeltaTime, OutRootMotionParams); }
	FName * GetCurrentSection(FName * result) { return NativeCall<FName *, FName *>(this, "FAnimMontageInstance.GetCurrentSection", result); }
	void HandleEvents(float PreviousTrackPos, float CurrentTrackPos, const FBranchingPoint * BranchingPoint) { NativeCall<void, float, float, const FBranchingPoint *>(this, "FAnimMontageInstance.HandleEvents", PreviousTrackPos, CurrentTrackPos, BranchingPoint); }
	bool JumpToSectionName(const FName * SectionName, bool bEndOfSection) { return NativeCall<bool, const FName *, bool>(this, "FAnimMontageInstance.JumpToSectionName", SectionName, bEndOfSection); }
	void RefreshNextPrevSections() { NativeCall<void>(this, "FAnimMontageInstance.RefreshNextPrevSections"); }
	bool SetNextSectionName(const FName * SectionName, const FName * NewNextSectionName) { return NativeCall<bool, const FName *, const FName *>(this, "FAnimMontageInstance.SetNextSectionName", SectionName, NewNextSectionName); }
	bool SimulateAdvance(float DeltaTime, float * InOutPosition, FRootMotionMovementParams * OutRootMotionParams) { return NativeCall<bool, float, float *, FRootMotionMovementParams *>(this, "FAnimMontageInstance.SimulateAdvance", DeltaTime, InOutPosition, OutRootMotionParams); }
	void Stop(float BlendOut, bool bInterrupt) { NativeCall<void, float, bool>(this, "FAnimMontageInstance.Stop", BlendOut, bInterrupt); }
	void Terminate() { NativeCall<void>(this, "FAnimMontageInstance.Terminate"); }
	void TriggerEventHandler(FName EventName) { NativeCall<void, FName>(this, "FAnimMontageInstance.TriggerEventHandler", EventName); }
	FAnimMontageInstance * operator=(const FAnimMontageInstance * __that) { return NativeCall<FAnimMontageInstance *, const FAnimMontageInstance *>(this, "FAnimMontageInstance.operator=", __that); }
};

