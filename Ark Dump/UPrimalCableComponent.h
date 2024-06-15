#pragma once

#include "BaseDeclarations.h"
#include "UMeshComponent.h"
#include "UPrimitiveComponent.h"
#include "USceneComponent.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UPrimalCableComponent : UMeshComponent
{
	char __padding[0x60L];
	FComponentReference& AttachEndToField() { return *GetNativePointerField<FComponentReference*>(this, "UPrimalCableComponent.AttachEndTo"); }
	FVector& EndLocationField() { return *GetNativePointerField<FVector*>(this, "UPrimalCableComponent.EndLocation"); }
	float& CableLengthField() { return *GetNativePointerField<float*>(this, "UPrimalCableComponent.CableLength"); }
	int& NumSegmentsField() { return *GetNativePointerField<int*>(this, "UPrimalCableComponent.NumSegments"); }
	float& SubstepTimeField() { return *GetNativePointerField<float*>(this, "UPrimalCableComponent.SubstepTime"); }
	int& SolverIterationsField() { return *GetNativePointerField<int*>(this, "UPrimalCableComponent.SolverIterations"); }
	float& MaxParticleSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalCableComponent.MaxParticleSpeed"); }
	float& CableWidthField() { return *GetNativePointerField<float*>(this, "UPrimalCableComponent.CableWidth"); }
	int& NumSidesField() { return *GetNativePointerField<int*>(this, "UPrimalCableComponent.NumSides"); }
	float& TileMaterialField() { return *GetNativePointerField<float*>(this, "UPrimalCableComponent.TileMaterial"); }
	bool& bRenderFirstHalfOnlyField() { return *GetNativePointerField<bool*>(this, "UPrimalCableComponent.bRenderFirstHalfOnly"); }
	float& TimeRemainderField() { return *GetNativePointerField<float*>(this, "UPrimalCableComponent.TimeRemainder"); }
	TArray<FCableParticle>& ParticlesField() { return *GetNativePointerField<TArray<FCableParticle>*>(this, "UPrimalCableComponent.Particles"); }

	// Functions

	FBoxSphereBounds * CalcBounds(FBoxSphereBounds * result, const FTransform * LocalToWorld) { return NativeCall<FBoxSphereBounds *, FBoxSphereBounds *, const FTransform *>(this, "UPrimalCableComponent.CalcBounds", result, LocalToWorld); }
	FVector * GetCableMidPoint(FVector * result) { return NativeCall<FVector *, FVector *>(this, "UPrimalCableComponent.GetCableMidPoint", result); }
	FCableParticle * GetCableParticle(FCableParticle * result, int idx) { return NativeCall<FCableParticle *, FCableParticle *, int>(this, "UPrimalCableComponent.GetCableParticle", result, idx); }
	void GetEndPositions(FVector * OutStartPosition, FVector * OutEndPosition) { NativeCall<void, FVector *, FVector *>(this, "UPrimalCableComponent.GetEndPositions", OutStartPosition, OutEndPosition); }
	void OnRegister() { NativeCall<void>(this, "UPrimalCableComponent.OnRegister"); }
	void PerformSubstep(float InSubstepTime, const FVector * Gravity) { NativeCall<void, float, const FVector *>(this, "UPrimalCableComponent.PerformSubstep", InSubstepTime, Gravity); }
	void SendRenderDynamicData_Concurrent() { NativeCall<void>(this, "UPrimalCableComponent.SendRenderDynamicData_Concurrent"); }
	void SetAttachEndOverrideComponent(USceneComponent * component) { NativeCall<void, USceneComponent *>(this, "UPrimalCableComponent.SetAttachEndOverrideComponent", component); }
	void SolveConstraints() { NativeCall<void>(this, "UPrimalCableComponent.SolveConstraints"); }
	void SpreadOutParticles(const FVector * StartPosition, const FVector * EndPosition) { NativeCall<void, const FVector *, const FVector *>(this, "UPrimalCableComponent.SpreadOutParticles", StartPosition, EndPosition); }
	void VerletIntegrate(float InSubstepTime, const FVector * Gravity) { NativeCall<void, float, const FVector *>(this, "UPrimalCableComponent.VerletIntegrate", InSubstepTime, Gravity); }
};

