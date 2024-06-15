#pragma once

#include "BaseDeclarations.h"
#include "FSavedMove_Character.h"

struct FNetworkPredictionData_Client
{
	char __padding[0x8L];
};

struct FNetworkPredictionData_Client_Character : FNetworkPredictionData_Client
{
	char __padding[0xc8L];
	long double& ClientUpdateTimeField() { return *GetNativePointerField<long double*>(this, "FNetworkPredictionData_Client_Character.ClientUpdateTime"); }
	float& CurrentTimeStampField() { return *GetNativePointerField<float*>(this, "FNetworkPredictionData_Client_Character.CurrentTimeStamp"); }
	TArray<TSharedPtr<FSavedMove_Character,0>>& SavedMovesField() { return *GetNativePointerField<TArray<TSharedPtr<FSavedMove_Character,0>>*>(this, "FNetworkPredictionData_Client_Character.SavedMoves"); }
	TArray<TSharedPtr<FSavedMove_Character,0>>& FreeMovesField() { return *GetNativePointerField<TArray<TSharedPtr<FSavedMove_Character,0>>*>(this, "FNetworkPredictionData_Client_Character.FreeMoves"); }
	TSharedPtr<FSavedMove_Character,0>& PendingMoveField() { return *GetNativePointerField<TSharedPtr<FSavedMove_Character,0>*>(this, "FNetworkPredictionData_Client_Character.PendingMove"); }
	TSharedPtr<FSavedMove_Character,0>& LastAckedMoveField() { return *GetNativePointerField<TSharedPtr<FSavedMove_Character,0>*>(this, "FNetworkPredictionData_Client_Character.LastAckedMove"); }
	int& MaxFreeMoveCountField() { return *GetNativePointerField<int*>(this, "FNetworkPredictionData_Client_Character.MaxFreeMoveCount"); }
	int& MaxSavedMoveCountField() { return *GetNativePointerField<int*>(this, "FNetworkPredictionData_Client_Character.MaxSavedMoveCount"); }
	FRootMotionMovementParams& RootMotionMovementField() { return *GetNativePointerField<FRootMotionMovementParams*>(this, "FNetworkPredictionData_Client_Character.RootMotionMovement"); }
	FVector& MeshTranslationOffsetField() { return *GetNativePointerField<FVector*>(this, "FNetworkPredictionData_Client_Character.MeshTranslationOffset"); }
	float& MaxSmoothNetUpdateDistField() { return *GetNativePointerField<float*>(this, "FNetworkPredictionData_Client_Character.MaxSmoothNetUpdateDist"); }
	float& NoSmoothNetUpdateDistField() { return *GetNativePointerField<float*>(this, "FNetworkPredictionData_Client_Character.NoSmoothNetUpdateDist"); }
	float& SmoothNetUpdateTimeField() { return *GetNativePointerField<float*>(this, "FNetworkPredictionData_Client_Character.SmoothNetUpdateTime"); }
	float& MaxResponseTimeField() { return *GetNativePointerField<float*>(this, "FNetworkPredictionData_Client_Character.MaxResponseTime"); }

	// Functions

	void AckMove(int AckedMoveIndex) { NativeCall<void, int>(this, "FNetworkPredictionData_Client_Character.AckMove", AckedMoveIndex); }
	TSharedPtr<FSavedMove_Character,0> * AllocateNewMove(TSharedPtr<FSavedMove_Character,0> * result) { return NativeCall<TSharedPtr<FSavedMove_Character,0> *, TSharedPtr<FSavedMove_Character,0> *>(this, "FNetworkPredictionData_Client_Character.AllocateNewMove", result); }
	TSharedPtr<FSavedMove_Character,0> * CreateSavedMove(TSharedPtr<FSavedMove_Character,0> * result) { return NativeCall<TSharedPtr<FSavedMove_Character,0> *, TSharedPtr<FSavedMove_Character,0> *>(this, "FNetworkPredictionData_Client_Character.CreateSavedMove", result); }
	void FreeMove(TSharedPtr<FSavedMove_Character,0> * Move) { NativeCall<void, TSharedPtr<FSavedMove_Character,0> *>(this, "FNetworkPredictionData_Client_Character.FreeMove", Move); }
	int GetSavedMoveIndex(float TimeStamp) { return NativeCall<int, float>(this, "FNetworkPredictionData_Client_Character.GetSavedMoveIndex", TimeStamp); }
	float UpdateTimeStampAndDeltaTime(float DeltaTime, ACharacter * CharacterOwner, UCharacterMovementComponent * CharacterMovementComponent) { return NativeCall<float, float, ACharacter *, UCharacterMovementComponent *>(this, "FNetworkPredictionData_Client_Character.UpdateTimeStampAndDeltaTime", DeltaTime, CharacterOwner, CharacterMovementComponent); }
};

