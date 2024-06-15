#pragma once

#include "BaseDeclarations.h"
struct PrimalRaft_eventBPOverrideSwimmingVelocity_Parms
{
	char __padding[0x30L];
	FVector& InitialVelocityField() { return *GetNativePointerField<FVector*>(this, "PrimalRaft_eventBPOverrideSwimmingVelocity_Parms.InitialVelocity"); }
	FVector& GravityField() { return *GetNativePointerField<FVector*>(this, "PrimalRaft_eventBPOverrideSwimmingVelocity_Parms.Gravity"); }
	float& FluidFrictionField() { return *GetNativePointerField<float*>(this, "PrimalRaft_eventBPOverrideSwimmingVelocity_Parms.FluidFriction"); }
	float& NetBuoyancyField() { return *GetNativePointerField<float*>(this, "PrimalRaft_eventBPOverrideSwimmingVelocity_Parms.NetBuoyancy"); }
	float& DeltaTimeField() { return *GetNativePointerField<float*>(this, "PrimalRaft_eventBPOverrideSwimmingVelocity_Parms.DeltaTime"); }
	FVector& ReturnValueField() { return *GetNativePointerField<FVector*>(this, "PrimalRaft_eventBPOverrideSwimmingVelocity_Parms.ReturnValue"); }
};

