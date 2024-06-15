#pragma once

#include "BaseDeclarations.h"
#include "AVolume.h"

struct APhysicsVolume : AVolume
{
	char __padding[0x20L];
	float& TerminalVelocityField() { return *GetNativePointerField<float*>(this, "APhysicsVolume.TerminalVelocity"); }
	int& PriorityField() { return *GetNativePointerField<int*>(this, "APhysicsVolume.Priority"); }
	float& FluidFrictionField() { return *GetNativePointerField<float*>(this, "APhysicsVolume.FluidFriction"); }
	float& WaterDensityField() { return *GetNativePointerField<float*>(this, "APhysicsVolume.WaterDensity"); }
	float& WaterDampingField() { return *GetNativePointerField<float*>(this, "APhysicsVolume.WaterDamping"); }
	float& PhysicsMinWalkableFloorZField() { return *GetNativePointerField<float*>(this, "APhysicsVolume.PhysicsMinWalkableFloorZ"); }

	// Functions

	void ApplyBuoyanceToBody(float WaterSurfaceLevel, FBodyInstance * Body) { NativeCall<void, float, FBodyInstance *>(this, "APhysicsVolume.ApplyBuoyanceToBody", WaterSurfaceLevel, Body); }
	float GetGravityZ() { return NativeCall<float>(this, "APhysicsVolume.GetGravityZ"); }
	float GetVolumeZAtPosition(FVector2D Position) { return NativeCall<float, FVector2D>(this, "APhysicsVolume.GetVolumeZAtPosition", Position); }
	bool IsOverlapInVolume(const USceneComponent * TestComponent) { return NativeCall<bool, const USceneComponent *>(this, "APhysicsVolume.IsOverlapInVolume", TestComponent); }
	void PostInitializeComponents() { NativeCall<void>(this, "APhysicsVolume.PostInitializeComponents"); }
};

