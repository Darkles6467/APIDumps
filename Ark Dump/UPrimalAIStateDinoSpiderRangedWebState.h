#pragma once

#include "BaseDeclarations.h"
#include "UPrimalAIStateDinoRangedState.h"
#include "UPrimalAIState.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UPrimalAIStateDinoSpiderRangedWebState : UPrimalAIStateDinoRangedState
{
	char __padding[0x30L];
	FName& SprayStartSocketField() { return *GetNativePointerField<FName*>(this, "UPrimalAIStateDinoSpiderRangedWebState.SprayStartSocket"); }
	FName& SprayEndSocketField() { return *GetNativePointerField<FName*>(this, "UPrimalAIStateDinoSpiderRangedWebState.SprayEndSocket"); }
	float& TimeBetweenProjectileField() { return *GetNativePointerField<float*>(this, "UPrimalAIStateDinoSpiderRangedWebState.TimeBetweenProjectile"); }
	float& LeadTimeField() { return *GetNativePointerField<float*>(this, "UPrimalAIStateDinoSpiderRangedWebState.LeadTime"); }
	long double& NextSprayTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalAIStateDinoSpiderRangedWebState.NextSprayTime"); }
	float& SpreadOffsetPitchField() { return *GetNativePointerField<float*>(this, "UPrimalAIStateDinoSpiderRangedWebState.SpreadOffsetPitch"); }
	int& NumberOfProjectilesMultiplierField() { return *GetNativePointerField<int*>(this, "UPrimalAIStateDinoSpiderRangedWebState.NumberOfProjectilesMultiplier"); }

	// Functions

	void OnEnd() { NativeCall<void>(this, "UPrimalAIStateDinoSpiderRangedWebState.OnEnd"); }
	void StartAnimationState(FName CustomEventName, ENetRole Role) { NativeCall<void, FName, ENetRole>(this, "UPrimalAIStateDinoSpiderRangedWebState.StartAnimationState", CustomEventName, Role); }
	void TickAnimationState(float DeltaTime, FName CustomEventName, ENetRole Role) { NativeCall<void, float, FName, ENetRole>(this, "UPrimalAIStateDinoSpiderRangedWebState.TickAnimationState", DeltaTime, CustomEventName, Role); }
};

