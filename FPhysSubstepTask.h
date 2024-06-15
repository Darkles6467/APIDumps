#pragma once

#include "BaseDeclarations.h"
#include "FGraphEvent.h"

struct FPhysSubstepTask
{
	char __padding[0xe0L];
	unsigned int& NumSubstepsField() { return *GetNativePointerField<unsigned int*>(this, "FPhysSubstepTask.NumSubsteps"); }
	float& SubTimeField() { return *GetNativePointerField<float*>(this, "FPhysSubstepTask.SubTime"); }
	float& DeltaSecondsField() { return *GetNativePointerField<float*>(this, "FPhysSubstepTask.DeltaSeconds"); }
	bool& ExternalField() { return *GetNativePointerField<bool*>(this, "FPhysSubstepTask.External"); }
	float& AlphaField() { return *GetNativePointerField<float*>(this, "FPhysSubstepTask.Alpha"); }
	float& StepScaleField() { return *GetNativePointerField<float*>(this, "FPhysSubstepTask.StepScale"); }
	float& TotalSubTimeField() { return *GetNativePointerField<float*>(this, "FPhysSubstepTask.TotalSubTime"); }
	unsigned int& CurrentSubStepField() { return *GetNativePointerField<unsigned int*>(this, "FPhysSubstepTask.CurrentSubStep"); }
	TRefCountPtr<FGraphEvent>& CompletionEventField() { return *GetNativePointerField<TRefCountPtr<FGraphEvent>*>(this, "FPhysSubstepTask.CompletionEvent"); }
	FPhysXVehicleManager * VehicleManagerField() { return GetNativePointerField<FPhysXVehicleManager *>(this, "FPhysSubstepTask.VehicleManager"); }
	physx::PxScene * PASceneField() { return GetNativePointerField<physx::PxScene *>(this, "FPhysSubstepTask.PAScene"); }

	// Functions

	void AddForce(FBodyInstance * Body, const FVector * Force) { NativeCall<void, FBodyInstance *, const FVector *>(this, "FPhysSubstepTask.AddForce", Body, Force); }
	void AddForceAtPosition(FBodyInstance * Body, const FVector * Force, const FVector * Position) { NativeCall<void, FBodyInstance *, const FVector *, const FVector *>(this, "FPhysSubstepTask.AddForceAtPosition", Body, Force, Position); }
	void AddTorque(FBodyInstance * Body, const FVector * Torque) { NativeCall<void, FBodyInstance *, const FVector *>(this, "FPhysSubstepTask.AddTorque", Body, Torque); }
	void ApplyForces(const FPhysTarget * PhysTarget, FBodyInstance * BodyInstance) { NativeCall<void, const FPhysTarget *, FBodyInstance *>(this, "FPhysSubstepTask.ApplyForces", PhysTarget, BodyInstance); }
	void ApplyTorques(const FPhysTarget * PhysTarget, FBodyInstance * BodyInstance) { NativeCall<void, const FPhysTarget *, FBodyInstance *>(this, "FPhysSubstepTask.ApplyTorques", PhysTarget, BodyInstance); }
	void InterpolateKinematicActor(const FPhysTarget * PhysTarget, FBodyInstance * BodyInstance, float InAlpha) { NativeCall<void, const FPhysTarget *, FBodyInstance *, float>(this, "FPhysSubstepTask.InterpolateKinematicActor", PhysTarget, BodyInstance, InAlpha); }
	void StepSimulation(PhysXCompletionTask * Task) { NativeCall<void, PhysXCompletionTask *>(this, "FPhysSubstepTask.StepSimulation", Task); }
	void SubstepInterpolation(float InAlpha) { NativeCall<void, float>(this, "FPhysSubstepTask.SubstepInterpolation", InAlpha); }
	void SubstepSimulationEnd(ENamedThreads::Type CurrentThread, const TRefCountPtr<FGraphEvent> * MyCompletionGraphEvent) { NativeCall<void, ENamedThreads::Type, const TRefCountPtr<FGraphEvent> *>(this, "FPhysSubstepTask.SubstepSimulationEnd", CurrentThread, MyCompletionGraphEvent); }
	void SubstepSimulationStart() { NativeCall<void>(this, "FPhysSubstepTask.SubstepSimulationStart"); }
	float UpdateTime(float UseDelta) { return NativeCall<float, float>(this, "FPhysSubstepTask.UpdateTime", UseDelta); }
};

