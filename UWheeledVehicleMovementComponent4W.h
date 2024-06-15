#pragma once

#include "BaseDeclarations.h"
#include "UPawnMovementComponent.h"
#include "UNavMovementComponent.h"
#include "UMovementComponent.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FLifetimeProperty.h"

struct UWheeledVehicleMovementComponent : UPawnMovementComponent
{
	char __padding[0xe8L];
	TArray<FWheelSetup>& WheelSetupsField() { return *GetNativePointerField<TArray<FWheelSetup>*>(this, "UWheeledVehicleMovementComponent.WheelSetups"); }
	float& MassField() { return *GetNativePointerField<float*>(this, "UWheeledVehicleMovementComponent.Mass"); }
	float& DragCoefficientField() { return *GetNativePointerField<float*>(this, "UWheeledVehicleMovementComponent.DragCoefficient"); }
	float& ChassisWidthField() { return *GetNativePointerField<float*>(this, "UWheeledVehicleMovementComponent.ChassisWidth"); }
	float& ChassisHeightField() { return *GetNativePointerField<float*>(this, "UWheeledVehicleMovementComponent.ChassisHeight"); }
	float& DragAreaField() { return *GetNativePointerField<float*>(this, "UWheeledVehicleMovementComponent.DragArea"); }
	float& EstimatedMaxEngineSpeedField() { return *GetNativePointerField<float*>(this, "UWheeledVehicleMovementComponent.EstimatedMaxEngineSpeed"); }
	float& MaxEngineRPMField() { return *GetNativePointerField<float*>(this, "UWheeledVehicleMovementComponent.MaxEngineRPM"); }
	float& DebugDragMagnitudeField() { return *GetNativePointerField<float*>(this, "UWheeledVehicleMovementComponent.DebugDragMagnitude"); }
	FVector& COMOffsetField() { return *GetNativePointerField<FVector*>(this, "UWheeledVehicleMovementComponent.COMOffset"); }
	FVector& InertiaTensorScaleField() { return *GetNativePointerField<FVector*>(this, "UWheeledVehicleMovementComponent.InertiaTensorScale"); }
	float& MinNormalizedTireLoadField() { return *GetNativePointerField<float*>(this, "UWheeledVehicleMovementComponent.MinNormalizedTireLoad"); }
	float& MinNormalizedTireLoadFilteredField() { return *GetNativePointerField<float*>(this, "UWheeledVehicleMovementComponent.MinNormalizedTireLoadFiltered"); }
	float& MaxNormalizedTireLoadField() { return *GetNativePointerField<float*>(this, "UWheeledVehicleMovementComponent.MaxNormalizedTireLoad"); }
	float& MaxNormalizedTireLoadFilteredField() { return *GetNativePointerField<float*>(this, "UWheeledVehicleMovementComponent.MaxNormalizedTireLoadFiltered"); }
	TArray<UVehicleWheel *>& WheelsField() { return *GetNativePointerField<TArray<UVehicleWheel *>*>(this, "UWheeledVehicleMovementComponent.Wheels"); }
	unsigned int& VehicleSetupTagField() { return *GetNativePointerField<unsigned int*>(this, "UWheeledVehicleMovementComponent.VehicleSetupTag"); }
	physx::PxVehicleWheels * PVehicleField() { return GetNativePointerField<physx::PxVehicleWheels *>(this, "UWheeledVehicleMovementComponent.PVehicle"); }
	physx::PxVehicleDrive * PVehicleDriveField() { return GetNativePointerField<physx::PxVehicleDrive *>(this, "UWheeledVehicleMovementComponent.PVehicleDrive"); }
	TEnumAsByte<enum ECollisionChannel>& CollisionChannelField() { return *GetNativePointerField<TEnumAsByte<enum ECollisionChannel>*>(this, "UWheeledVehicleMovementComponent.CollisionChannel"); }
	FReplicatedVehicleState& ReplicatedStateField() { return *GetNativePointerField<FReplicatedVehicleState*>(this, "UWheeledVehicleMovementComponent.ReplicatedState"); }
	float& AngErrorAccumulatorField() { return *GetNativePointerField<float*>(this, "UWheeledVehicleMovementComponent.AngErrorAccumulator"); }
	float& RawSteeringInputField() { return *GetNativePointerField<float*>(this, "UWheeledVehicleMovementComponent.RawSteeringInput"); }
	float& RawThrottleInputField() { return *GetNativePointerField<float*>(this, "UWheeledVehicleMovementComponent.RawThrottleInput"); }
	float& SteeringInputField() { return *GetNativePointerField<float*>(this, "UWheeledVehicleMovementComponent.SteeringInput"); }
	float& ThrottleInputField() { return *GetNativePointerField<float*>(this, "UWheeledVehicleMovementComponent.ThrottleInput"); }
	float& BrakeInputField() { return *GetNativePointerField<float*>(this, "UWheeledVehicleMovementComponent.BrakeInput"); }
	float& HandbrakeInputField() { return *GetNativePointerField<float*>(this, "UWheeledVehicleMovementComponent.HandbrakeInput"); }
	float& IdleBrakeInputField() { return *GetNativePointerField<float*>(this, "UWheeledVehicleMovementComponent.IdleBrakeInput"); }
	float& StopThresholdField() { return *GetNativePointerField<float*>(this, "UWheeledVehicleMovementComponent.StopThreshold"); }
	float& WrongDirectionThresholdField() { return *GetNativePointerField<float*>(this, "UWheeledVehicleMovementComponent.WrongDirectionThreshold"); }
	FVehicleInputRate& ThrottleInputRateField() { return *GetNativePointerField<FVehicleInputRate*>(this, "UWheeledVehicleMovementComponent.ThrottleInputRate"); }
	FVehicleInputRate& BrakeInputRateField() { return *GetNativePointerField<FVehicleInputRate*>(this, "UWheeledVehicleMovementComponent.BrakeInputRate"); }
	FVehicleInputRate& HandbrakeInputRateField() { return *GetNativePointerField<FVehicleInputRate*>(this, "UWheeledVehicleMovementComponent.HandbrakeInputRate"); }
	FVehicleInputRate& SteeringInputRateField() { return *GetNativePointerField<FVehicleInputRate*>(this, "UWheeledVehicleMovementComponent.SteeringInputRate"); }

	// Functions

	float CalcBrakeInput() { return NativeCall<float>(this, "UWheeledVehicleMovementComponent.CalcBrakeInput"); }
	float CalcThrottleInput() { return NativeCall<float>(this, "UWheeledVehicleMovementComponent.CalcThrottleInput"); }
	bool CanCreateVehicle() { return NativeCall<bool>(this, "UWheeledVehicleMovementComponent.CanCreateVehicle"); }
	bool CheckSlipThreshold(float AbsLongSlipThreshold, float AbsLatSlipThreshold) { return NativeCall<bool, float, float>(this, "UWheeledVehicleMovementComponent.CheckSlipThreshold", AbsLongSlipThreshold, AbsLatSlipThreshold); }
	void ClearInput() { NativeCall<void>(this, "UWheeledVehicleMovementComponent.ClearInput"); }
	void ComputeConstants() { NativeCall<void>(this, "UWheeledVehicleMovementComponent.ComputeConstants"); }
	void CreatePhysicsState() { NativeCall<void>(this, "UWheeledVehicleMovementComponent.CreatePhysicsState"); }
	void CreateVehicle() { NativeCall<void>(this, "UWheeledVehicleMovementComponent.CreateVehicle"); }
	void CreateWheels() { NativeCall<void>(this, "UWheeledVehicleMovementComponent.CreateWheels"); }
	void DestroyPhysicsState() { NativeCall<void>(this, "UWheeledVehicleMovementComponent.DestroyPhysicsState"); }
	void DestroyWheels() { NativeCall<void>(this, "UWheeledVehicleMovementComponent.DestroyWheels"); }
	void DrawDebug(UCanvas * Canvas, float * YL, float * YPos) { NativeCall<void, UCanvas *, float *, float *>(this, "UWheeledVehicleMovementComponent.DrawDebug", Canvas, YL, YPos); }
	void DrawDebugLines() { NativeCall<void>(this, "UWheeledVehicleMovementComponent.DrawDebugLines"); }
	void FixupSkeletalMesh() { NativeCall<void>(this, "UWheeledVehicleMovementComponent.FixupSkeletalMesh"); }
	void GenerateTireForces(UVehicleWheel * Wheel, const FTireShaderInput * Input, FTireShaderOutput * Output) { NativeCall<void, UVehicleWheel *, const FTireShaderInput *, FTireShaderOutput *>(this, "UWheeledVehicleMovementComponent.GenerateTireForces", Wheel, Input, Output); }
	FVector * GetCOMOffset(FVector * result) { return NativeCall<FVector *, FVector *>(this, "UWheeledVehicleMovementComponent.GetCOMOffset", result); }
	int GetCurrentGear() { return NativeCall<int>(this, "UWheeledVehicleMovementComponent.GetCurrentGear"); }
	float GetEngineMaxRotationSpeed() { return NativeCall<float>(this, "UWheeledVehicleMovementComponent.GetEngineMaxRotationSpeed"); }
	float GetEngineRotationSpeed() { return NativeCall<float>(this, "UWheeledVehicleMovementComponent.GetEngineRotationSpeed"); }
	float GetForwardSpeed() { return NativeCall<float>(this, "UWheeledVehicleMovementComponent.GetForwardSpeed"); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "UWheeledVehicleMovementComponent.GetLifetimeReplicatedProps", OutLifetimeProps); }
	float GetMaxSpringForce() { return NativeCall<float>(this, "UWheeledVehicleMovementComponent.GetMaxSpringForce"); }
	int GetTargetGear() { return NativeCall<int>(this, "UWheeledVehicleMovementComponent.GetTargetGear"); }
	float GetThrottleInput() { return NativeCall<float>(this, "UWheeledVehicleMovementComponent.GetThrottleInput"); }
	bool GetUseAutoGears() { return NativeCall<bool>(this, "UWheeledVehicleMovementComponent.GetUseAutoGears"); }
	FVector * GetWheelRestingPosition(FVector * result, const FWheelSetup * WheelSetup) { return NativeCall<FVector *, FVector *, const FWheelSetup *>(this, "UWheeledVehicleMovementComponent.GetWheelRestingPosition", result, WheelSetup); }
	bool HasValidPhysicsState() { return NativeCall<bool>(this, "UWheeledVehicleMovementComponent.HasValidPhysicsState"); }
	void PreTick(float DeltaTime) { NativeCall<void, float>(this, "UWheeledVehicleMovementComponent.PreTick", DeltaTime); }
	void ServerUpdateState_Implementation(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int InCurrentGear) { NativeCall<void, float, float, float, float, int>(this, "UWheeledVehicleMovementComponent.ServerUpdateState_Implementation", InSteeringInput, InThrottleInput, InBrakeInput, InHandbrakeInput, InCurrentGear); }
	void SetGearDown(bool bNewGearDown) { NativeCall<void, bool>(this, "UWheeledVehicleMovementComponent.SetGearDown", bNewGearDown); }
	void SetGearUp(bool bNewGearUp) { NativeCall<void, bool>(this, "UWheeledVehicleMovementComponent.SetGearUp", bNewGearUp); }
	void SetHandbrakeInput(bool bNewHandbrake) { NativeCall<void, bool>(this, "UWheeledVehicleMovementComponent.SetHandbrakeInput", bNewHandbrake); }
	void SetSteeringInput(float Steering) { NativeCall<void, float>(this, "UWheeledVehicleMovementComponent.SetSteeringInput", Steering); }
	void SetTargetGear(int GearNum, bool bImmediate) { NativeCall<void, int, bool>(this, "UWheeledVehicleMovementComponent.SetTargetGear", GearNum, bImmediate); }
	void SetThrottleInput(float Throttle) { NativeCall<void, float>(this, "UWheeledVehicleMovementComponent.SetThrottleInput", Throttle); }
	void SetUseAutoGears(bool bUseAuto) { NativeCall<void, bool>(this, "UWheeledVehicleMovementComponent.SetUseAutoGears", bUseAuto); }
	void SetupVehicleMass() { NativeCall<void>(this, "UWheeledVehicleMovementComponent.SetupVehicleMass"); }
	void SetupVehicleShapes() { NativeCall<void>(this, "UWheeledVehicleMovementComponent.SetupVehicleShapes"); }
	void SetupWheels(physx::PxVehicleWheelsSimData * PWheelsSimData) { NativeCall<void, physx::PxVehicleWheelsSimData *>(this, "UWheeledVehicleMovementComponent.SetupWheels", PWheelsSimData); }
	bool ShouldCreatePhysicsState() { return NativeCall<bool>(this, "UWheeledVehicleMovementComponent.ShouldCreatePhysicsState"); }
	void TickVehicle(float DeltaTime) { NativeCall<void, float>(this, "UWheeledVehicleMovementComponent.TickVehicle", DeltaTime); }
	void UpdateDrag(float DeltaTime) { NativeCall<void, float>(this, "UWheeledVehicleMovementComponent.UpdateDrag", DeltaTime); }
	void UpdateState(float DeltaTime) { NativeCall<void, float>(this, "UWheeledVehicleMovementComponent.UpdateState", DeltaTime); }
	void ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int CurrentGear) { NativeCall<void, float, float, float, float, int>(this, "UWheeledVehicleMovementComponent.ServerUpdateState", InSteeringInput, InThrottleInput, InBrakeInput, InHandbrakeInput, CurrentGear); }
};

struct UWheeledVehicleMovementComponent4W : UWheeledVehicleMovementComponent
{
	char __padding[0x150L];
	FVehicleEngineData& EngineSetupField() { return *GetNativePointerField<FVehicleEngineData*>(this, "UWheeledVehicleMovementComponent4W.EngineSetup"); }
	FVehicleDifferential4WData& DifferentialSetupField() { return *GetNativePointerField<FVehicleDifferential4WData*>(this, "UWheeledVehicleMovementComponent4W.DifferentialSetup"); }
	FVehicleTransmissionData& TransmissionSetupField() { return *GetNativePointerField<FVehicleTransmissionData*>(this, "UWheeledVehicleMovementComponent4W.TransmissionSetup"); }
	FRuntimeFloatCurve& SteeringCurveField() { return *GetNativePointerField<FRuntimeFloatCurve*>(this, "UWheeledVehicleMovementComponent4W.SteeringCurve"); }
	float& AckermannAccuracyField() { return *GetNativePointerField<float*>(this, "UWheeledVehicleMovementComponent4W.AckermannAccuracy"); }

	// Functions

	void ComputeConstants() { NativeCall<void>(this, "UWheeledVehicleMovementComponent4W.ComputeConstants"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UWheeledVehicleMovementComponent4W.Serialize", Ar); }
	void SetupVehicle() { NativeCall<void>(this, "UWheeledVehicleMovementComponent4W.SetupVehicle"); }
	void UpdateSimulation(float DeltaTime) { NativeCall<void, float>(this, "UWheeledVehicleMovementComponent4W.UpdateSimulation", DeltaTime); }
};

