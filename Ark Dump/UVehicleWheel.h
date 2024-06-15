#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UVehicleWheel : UObject
{
	char __padding[0xb8L];
	UStaticMesh * CollisionMeshField() { return GetNativePointerField<UStaticMesh *>(this, "UVehicleWheel.CollisionMesh"); }
	bool& bDontCreateShapeField() { return *GetNativePointerField<bool*>(this, "UVehicleWheel.bDontCreateShape"); }
	bool& bAutoAdjustCollisionSizeField() { return *GetNativePointerField<bool*>(this, "UVehicleWheel.bAutoAdjustCollisionSize"); }
	FVector& OffsetField() { return *GetNativePointerField<FVector*>(this, "UVehicleWheel.Offset"); }
	float& ShapeRadiusField() { return *GetNativePointerField<float*>(this, "UVehicleWheel.ShapeRadius"); }
	float& ShapeWidthField() { return *GetNativePointerField<float*>(this, "UVehicleWheel.ShapeWidth"); }
	float& MassField() { return *GetNativePointerField<float*>(this, "UVehicleWheel.Mass"); }
	float& DampingRateField() { return *GetNativePointerField<float*>(this, "UVehicleWheel.DampingRate"); }
	float& SteerAngleField() { return *GetNativePointerField<float*>(this, "UVehicleWheel.SteerAngle"); }
	bool& bAffectedByHandbrakeField() { return *GetNativePointerField<bool*>(this, "UVehicleWheel.bAffectedByHandbrake"); }
	UTireType * TireTypeField() { return GetNativePointerField<UTireType *>(this, "UVehicleWheel.TireType"); }
	float& LatStiffMaxLoadField() { return *GetNativePointerField<float*>(this, "UVehicleWheel.LatStiffMaxLoad"); }
	float& LatStiffValueField() { return *GetNativePointerField<float*>(this, "UVehicleWheel.LatStiffValue"); }
	float& LongStiffValueField() { return *GetNativePointerField<float*>(this, "UVehicleWheel.LongStiffValue"); }
	float& SuspensionForceOffsetField() { return *GetNativePointerField<float*>(this, "UVehicleWheel.SuspensionForceOffset"); }
	float& SuspensionMaxRaiseField() { return *GetNativePointerField<float*>(this, "UVehicleWheel.SuspensionMaxRaise"); }
	float& SuspensionMaxDropField() { return *GetNativePointerField<float*>(this, "UVehicleWheel.SuspensionMaxDrop"); }
	float& SuspensionNaturalFrequencyField() { return *GetNativePointerField<float*>(this, "UVehicleWheel.SuspensionNaturalFrequency"); }
	float& SuspensionDampingRatioField() { return *GetNativePointerField<float*>(this, "UVehicleWheel.SuspensionDampingRatio"); }
	float& MaxBrakeTorqueField() { return *GetNativePointerField<float*>(this, "UVehicleWheel.MaxBrakeTorque"); }
	float& MaxHandBrakeTorqueField() { return *GetNativePointerField<float*>(this, "UVehicleWheel.MaxHandBrakeTorque"); }
	int& WheelIndexField() { return *GetNativePointerField<int*>(this, "UVehicleWheel.WheelIndex"); }
	float& DebugLongSlipField() { return *GetNativePointerField<float*>(this, "UVehicleWheel.DebugLongSlip"); }
	float& DebugLatSlipField() { return *GetNativePointerField<float*>(this, "UVehicleWheel.DebugLatSlip"); }
	float& DebugNormalizedTireLoadField() { return *GetNativePointerField<float*>(this, "UVehicleWheel.DebugNormalizedTireLoad"); }
	float& DebugWheelTorqueField() { return *GetNativePointerField<float*>(this, "UVehicleWheel.DebugWheelTorque"); }
	float& DebugLongForceField() { return *GetNativePointerField<float*>(this, "UVehicleWheel.DebugLongForce"); }
	float& DebugLatForceField() { return *GetNativePointerField<float*>(this, "UVehicleWheel.DebugLatForce"); }
	FVector& LocationField() { return *GetNativePointerField<FVector*>(this, "UVehicleWheel.Location"); }
	FVector& OldLocationField() { return *GetNativePointerField<FVector*>(this, "UVehicleWheel.OldLocation"); }
	FVector& VelocityField() { return *GetNativePointerField<FVector*>(this, "UVehicleWheel.Velocity"); }
	float& InterpolatedSuspensionOffsetField() { return *GetNativePointerField<float*>(this, "UVehicleWheel.InterpolatedSuspensionOffset"); }
	physx::PxShape * WheelShapeField() { return GetNativePointerField<physx::PxShape *>(this, "UVehicleWheel.WheelShape"); }

	// Functions

	UPhysicalMaterial * GetContactSurfaceMaterial() { return NativeCall<UPhysicalMaterial *>(this, "UVehicleWheel.GetContactSurfaceMaterial"); }
	FVector * GetPhysicsLocation(FVector * result) { return NativeCall<FVector *, FVector *>(this, "UVehicleWheel.GetPhysicsLocation", result); }
	float GetRotationAngle() { return NativeCall<float>(this, "UVehicleWheel.GetRotationAngle"); }
	float GetSteerAngle() { return NativeCall<float>(this, "UVehicleWheel.GetSteerAngle"); }
	float GetSuspensionOffset() { return NativeCall<float>(this, "UVehicleWheel.GetSuspensionOffset"); }
	void Init(UWheeledVehicleMovementComponent * InVehicleSim, int InWheelIndex) { NativeCall<void, UWheeledVehicleMovementComponent *, int>(this, "UVehicleWheel.Init", InVehicleSim, InWheelIndex); }
	void Shutdown() { NativeCall<void>(this, "UVehicleWheel.Shutdown"); }
	void Tick(float DeltaTime) { NativeCall<void, float>(this, "UVehicleWheel.Tick", DeltaTime); }
};

