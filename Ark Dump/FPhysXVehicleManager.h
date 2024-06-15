#pragma once

#include "BaseDeclarations.h"
#include "UWheeledVehicleMovementComponent4W.h"

struct FPhysXVehicleManager
{
	char __padding[0x70L];
	physx::PxScene * SceneField() { return GetNativePointerField<physx::PxScene *>(this, "FPhysXVehicleManager.Scene"); }
	TArray<physx::PxVehicleWheels *>& PVehiclesField() { return *GetNativePointerField<TArray<physx::PxVehicleWheels *>*>(this, "FPhysXVehicleManager.PVehicles"); }
	TArray<physx::PxVehicleWheelQueryResult>& PVehiclesWheelsStatesField() { return *GetNativePointerField<TArray<physx::PxVehicleWheelQueryResult>*>(this, "FPhysXVehicleManager.PVehiclesWheelsStates"); }
	TArray<physx::PxBatchQueryResult<physx::PxRaycastHit>>& WheelQueryResultsField() { return *GetNativePointerField<TArray<physx::PxBatchQueryResult<physx::PxRaycastHit>>*>(this, "FPhysXVehicleManager.WheelQueryResults"); }
	TArray<physx::PxRaycastHit>& WheelHitResultsField() { return *GetNativePointerField<TArray<physx::PxRaycastHit>*>(this, "FPhysXVehicleManager.WheelHitResults"); }
	physx::PxBatchQuery * WheelRaycastBatchQueryField() { return GetNativePointerField<physx::PxBatchQuery *>(this, "FPhysXVehicleManager.WheelRaycastBatchQuery"); }
	physx::PxVehicleTelemetryData * TelemetryData4WField() { return GetNativePointerField<physx::PxVehicleTelemetryData *>(this, "FPhysXVehicleManager.TelemetryData4W"); }
	physx::PxVehicleWheels * TelemetryVehicleField() { return GetNativePointerField<physx::PxVehicleWheels *>(this, "FPhysXVehicleManager.TelemetryVehicle"); }

	// Functions

	void AddVehicle(TWeakObjectPtr<UWheeledVehicleMovementComponent> Vehicle) { NativeCall<void, TWeakObjectPtr<UWheeledVehicleMovementComponent>>(this, "FPhysXVehicleManager.AddVehicle", Vehicle); }
	void PreTick(float DeltaTime) { NativeCall<void, float>(this, "FPhysXVehicleManager.PreTick", DeltaTime); }
	void RemoveVehicle(TWeakObjectPtr<UWheeledVehicleMovementComponent> Vehicle) { NativeCall<void, TWeakObjectPtr<UWheeledVehicleMovementComponent>>(this, "FPhysXVehicleManager.RemoveVehicle", Vehicle); }
	void SetRecordTelemetry(TWeakObjectPtr<UWheeledVehicleMovementComponent> Vehicle, bool bRecord) { NativeCall<void, TWeakObjectPtr<UWheeledVehicleMovementComponent>, bool>(this, "FPhysXVehicleManager.SetRecordTelemetry", Vehicle, bRecord); }
	void SetUpBatchedSceneQuery() { NativeCall<void>(this, "FPhysXVehicleManager.SetUpBatchedSceneQuery"); }
	void SetupTelemetryData() { NativeCall<void>(this, "FPhysXVehicleManager.SetupTelemetryData"); }
	void Update(float DeltaTime) { NativeCall<void, float>(this, "FPhysXVehicleManager.Update", DeltaTime); }
	void UpdateTireFrictionTableInternal() { NativeCall<void>(this, "FPhysXVehicleManager.UpdateTireFrictionTableInternal"); }
	void UpdateVehiclesWithTelemetry(float DeltaTime) { NativeCall<void, float>(this, "FPhysXVehicleManager.UpdateVehiclesWithTelemetry", DeltaTime); }
};

