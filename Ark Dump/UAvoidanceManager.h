#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UAvoidanceManager : UObject
{
	char __padding[0xa0L];
	float& DefaultTimeToLiveField() { return *GetNativePointerField<float*>(this, "UAvoidanceManager.DefaultTimeToLive"); }
	float& LockTimeAfterAvoidField() { return *GetNativePointerField<float*>(this, "UAvoidanceManager.LockTimeAfterAvoid"); }
	float& LockTimeAfterCleanField() { return *GetNativePointerField<float*>(this, "UAvoidanceManager.LockTimeAfterClean"); }
	float& DeltaTimeToPredictField() { return *GetNativePointerField<float*>(this, "UAvoidanceManager.DeltaTimeToPredict"); }
	float& ArtificialRadiusExpansionField() { return *GetNativePointerField<float*>(this, "UAvoidanceManager.ArtificialRadiusExpansion"); }
	float& TestRadius2DField() { return *GetNativePointerField<float*>(this, "UAvoidanceManager.TestRadius2D"); }
	float& TestHeightDifferenceField() { return *GetNativePointerField<float*>(this, "UAvoidanceManager.TestHeightDifference"); }
	TArray<int>& NewKeyPoolField() { return *GetNativePointerField<TArray<int>*>(this, "UAvoidanceManager.NewKeyPool"); }
	TArray<FVelocityAvoidanceCone>& AllConesField() { return *GetNativePointerField<TArray<FVelocityAvoidanceCone>*>(this, "UAvoidanceManager.AllCones"); }

	// Functions

	FVector * GetAvoidanceVelocity(FVector * result, const FNavAvoidanceData * inAvoidanceData, float DeltaTime) { return NativeCall<FVector *, FVector *, const FNavAvoidanceData *, float>(this, "UAvoidanceManager.GetAvoidanceVelocity", result, inAvoidanceData, DeltaTime); }
	FVector * GetAvoidanceVelocityIgnoringUID(FVector * result, const FNavAvoidanceData * inAvoidanceData, float DeltaTime, int inIgnoreThisUID) { return NativeCall<FVector *, FVector *, const FNavAvoidanceData *, float, int>(this, "UAvoidanceManager.GetAvoidanceVelocityIgnoringUID", result, inAvoidanceData, DeltaTime, inIgnoreThisUID); }
	FVector * GetAvoidanceVelocity_Internal(FVector * result, const FNavAvoidanceData * inAvoidanceData, float DeltaTime, int * inIgnoreThisUID) { return NativeCall<FVector *, FVector *, const FNavAvoidanceData *, float, int *>(this, "UAvoidanceManager.GetAvoidanceVelocity_Internal", result, inAvoidanceData, DeltaTime, inIgnoreThisUID); }
	int GetNewAvoidanceUID() { return NativeCall<int>(this, "UAvoidanceManager.GetNewAvoidanceUID"); }
	int GetObjectCount() { return NativeCall<int>(this, "UAvoidanceManager.GetObjectCount"); }
};

