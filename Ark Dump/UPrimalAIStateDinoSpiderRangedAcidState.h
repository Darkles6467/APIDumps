#pragma once

#include "BaseDeclarations.h"
#include "UPrimalAIState.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UPrimalAIStateDinoSpiderRangedAcidState : UPrimalAIState
{
	char __padding[0x18L];
	FName& SprayStartSocketField() { return *GetNativePointerField<FName*>(this, "UPrimalAIStateDinoSpiderRangedAcidState.SprayStartSocket"); }
	float& TimeBetweenProjectileField() { return *GetNativePointerField<float*>(this, "UPrimalAIStateDinoSpiderRangedAcidState.TimeBetweenProjectile"); }
	bool& bScaleProjDamageByDinoDamageField() { return *GetNativePointerField<bool*>(this, "UPrimalAIStateDinoSpiderRangedAcidState.bScaleProjDamageByDinoDamage"); }
	bool& bAimAtTargetField() { return *GetNativePointerField<bool*>(this, "UPrimalAIStateDinoSpiderRangedAcidState.bAimAtTarget"); }
	long double& NextSprayTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalAIStateDinoSpiderRangedAcidState.NextSprayTime"); }

	// Functions

	void OnBegin(UPrimalAIState * InParentState) { NativeCall<void, UPrimalAIState *>(this, "UPrimalAIStateDinoSpiderRangedAcidState.OnBegin", InParentState); }
	void OnEnd() { NativeCall<void>(this, "UPrimalAIStateDinoSpiderRangedAcidState.OnEnd"); }
	void OnTick(float DeltaSeconds) { NativeCall<void, float>(this, "UPrimalAIStateDinoSpiderRangedAcidState.OnTick", DeltaSeconds); }
	void StartAnimationState(FName CustomEventName, ENetRole Role) { NativeCall<void, FName, ENetRole>(this, "UPrimalAIStateDinoSpiderRangedAcidState.StartAnimationState", CustomEventName, Role); }
	void TickAnimationState(float DeltaTime, FName CustomEventName, ENetRole Role) { NativeCall<void, float, FName, ENetRole>(this, "UPrimalAIStateDinoSpiderRangedAcidState.TickAnimationState", DeltaTime, CustomEventName, Role); }
	void EndAnimationState(FName CustomEventName, ENetRole Role) { NativeCall<void, FName, ENetRole>(this, "UPrimalAIStateDinoSpiderRangedAcidState.EndAnimationState", CustomEventName, Role); }
};

