#pragma once

#include "BaseDeclarations.h"
struct FTribeWar
{
	char __padding[0x30L];
	int& EnemyTribeIDField() { return *GetNativePointerField<int*>(this, "FTribeWar.EnemyTribeID"); }
	int& StartDayNumberField() { return *GetNativePointerField<int*>(this, "FTribeWar.StartDayNumber"); }
	int& EndDayNumberField() { return *GetNativePointerField<int*>(this, "FTribeWar.EndDayNumber"); }
	float& StartDayTimeField() { return *GetNativePointerField<float*>(this, "FTribeWar.StartDayTime"); }
	float& EndDayTimeField() { return *GetNativePointerField<float*>(this, "FTribeWar.EndDayTime"); }
	bool& bIsApprovedField() { return *GetNativePointerField<bool*>(this, "FTribeWar.bIsApproved"); }
	int& InitiatingTribeIDField() { return *GetNativePointerField<int*>(this, "FTribeWar.InitiatingTribeID"); }
	FString& EnemyTribeNameField() { return *GetNativePointerField<FString*>(this, "FTribeWar.EnemyTribeName"); }

	// Functions

	bool CanBeRejected(UWorld * ForWorld) { return NativeCall<bool, UWorld *>(this, "FTribeWar.CanBeRejected", ForWorld); }
	FString * GetWarTimeString(FString * result, int DayNumber, float DayTime) { return NativeCall<FString *, FString *, int, float>(this, "FTribeWar.GetWarTimeString", result, DayNumber, DayTime); }
	bool HasWarStarted(UWorld * ForWorld) { return NativeCall<bool, UWorld *>(this, "FTribeWar.HasWarStarted", ForWorld); }
	bool IsCurrentlyActive(UWorld * ForWorld) { return NativeCall<bool, UWorld *>(this, "FTribeWar.IsCurrentlyActive", ForWorld); }
	bool IsTribeWarOn(UWorld * ForWorld) { return NativeCall<bool, UWorld *>(this, "FTribeWar.IsTribeWarOn", ForWorld); }
	bool IsValidWar(UWorld * ForWorld) { return NativeCall<bool, UWorld *>(this, "FTribeWar.IsValidWar", ForWorld); }
	FTribeWar * operator=(const FTribeWar * __that) { return NativeCall<FTribeWar *, const FTribeWar *>(this, "FTribeWar.operator=", __that); }
	bool operator==(const FTribeWar * Other) { return NativeCall<bool, const FTribeWar *>(this, "FTribeWar.operator==", Other); }
};

