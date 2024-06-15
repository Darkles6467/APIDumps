#pragma once

#include "BaseDeclarations.h"
#include "UPrimalAIStateDinoRangedState.h"
#include "UPrimalAIState.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UPrimalAIStateBotRangedState : UPrimalAIStateDinoRangedState
{
	char __padding[0x20L];
	bool& bDrawDebugField() { return *GetNativePointerField<bool*>(this, "UPrimalAIStateBotRangedState.bDrawDebug"); }
	float& ChanceBotWillAimDirectlyAtPlayerField() { return *GetNativePointerField<float*>(this, "UPrimalAIStateBotRangedState.ChanceBotWillAimDirectlyAtPlayer"); }
	float& ChanceBotWillAimDirectlyAtDinoField() { return *GetNativePointerField<float*>(this, "UPrimalAIStateBotRangedState.ChanceBotWillAimDirectlyAtDino"); }
	float& ChanceBotWillCompletelyMissPlayerField() { return *GetNativePointerField<float*>(this, "UPrimalAIStateBotRangedState.ChanceBotWillCompletelyMissPlayer"); }
	float& ChanceBotWillCompletelyMissDinoField() { return *GetNativePointerField<float*>(this, "UPrimalAIStateBotRangedState.ChanceBotWillCompletelyMissDino"); }
	float& ConeHalfAngleField() { return *GetNativePointerField<float*>(this, "UPrimalAIStateBotRangedState.ConeHalfAngle"); }
	float& ConeHalfAngleRandRangeField() { return *GetNativePointerField<float*>(this, "UPrimalAIStateBotRangedState.ConeHalfAngleRandRange"); }
	bool& bUseBPGetSocketLocationField() { return *GetNativePointerField<bool*>(this, "UPrimalAIStateBotRangedState.bUseBPGetSocketLocation"); }

	// Functions

	void EndAnimationState(FName CustomEventName, ENetRole Role) { NativeCall<void, FName, ENetRole>(this, "UPrimalAIStateBotRangedState.EndAnimationState", CustomEventName, Role); }
	FVector * BPGetSocketLocation(FVector * result) { return NativeCall<FVector *, FVector *>(this, "UPrimalAIStateBotRangedState.BPGetSocketLocation", result); }
};

