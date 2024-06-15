#pragma once

#include "BaseDeclarations.h"
#include "UDataAsset.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UPrimalWheeledVehicleDustType : UDataAsset
{
	char __padding[0x90L];
	UParticleSystem * DefaultFXField() { return GetNativePointerField<UParticleSystem *>(this, "UPrimalWheeledVehicleDustType.DefaultFX"); }
	UParticleSystem * ConcreteFXField() { return GetNativePointerField<UParticleSystem *>(this, "UPrimalWheeledVehicleDustType.ConcreteFX"); }
	UParticleSystem * DirtFXField() { return GetNativePointerField<UParticleSystem *>(this, "UPrimalWheeledVehicleDustType.DirtFX"); }
	UParticleSystem * WaterFXField() { return GetNativePointerField<UParticleSystem *>(this, "UPrimalWheeledVehicleDustType.WaterFX"); }
	UParticleSystem * MetalFXField() { return GetNativePointerField<UParticleSystem *>(this, "UPrimalWheeledVehicleDustType.MetalFX"); }
	UParticleSystem * WoodFXField() { return GetNativePointerField<UParticleSystem *>(this, "UPrimalWheeledVehicleDustType.WoodFX"); }
	UParticleSystem * GrassFXField() { return GetNativePointerField<UParticleSystem *>(this, "UPrimalWheeledVehicleDustType.GrassFX"); }
	UParticleSystem * FleshFXField() { return GetNativePointerField<UParticleSystem *>(this, "UPrimalWheeledVehicleDustType.FleshFX"); }
	UParticleSystem * LeavesFXField() { return GetNativePointerField<UParticleSystem *>(this, "UPrimalWheeledVehicleDustType.LeavesFX"); }
	UParticleSystem * RockFXField() { return GetNativePointerField<UParticleSystem *>(this, "UPrimalWheeledVehicleDustType.RockFX"); }
	UParticleSystem * SandFXField() { return GetNativePointerField<UParticleSystem *>(this, "UPrimalWheeledVehicleDustType.SandFX"); }
	UParticleSystem * SnowFXField() { return GetNativePointerField<UParticleSystem *>(this, "UPrimalWheeledVehicleDustType.SnowFX"); }
	float& DefaultMinSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalWheeledVehicleDustType.DefaultMinSpeed"); }
	float& ConcreteMinSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalWheeledVehicleDustType.ConcreteMinSpeed"); }
	float& DirtMinSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalWheeledVehicleDustType.DirtMinSpeed"); }
	float& WaterMinSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalWheeledVehicleDustType.WaterMinSpeed"); }
	float& MetalMinSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalWheeledVehicleDustType.MetalMinSpeed"); }
	float& WoodMinSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalWheeledVehicleDustType.WoodMinSpeed"); }
	float& GrassMinSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalWheeledVehicleDustType.GrassMinSpeed"); }
	float& FleshMinSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalWheeledVehicleDustType.FleshMinSpeed"); }
	float& LeavesMinSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalWheeledVehicleDustType.LeavesMinSpeed"); }
	float& RockMinSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalWheeledVehicleDustType.RockMinSpeed"); }
	float& SandMinSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalWheeledVehicleDustType.SandMinSpeed"); }
	float& SnowMinSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalWheeledVehicleDustType.SnowMinSpeed"); }

	// Functions

	UParticleSystem * GetDustFX(UPhysicalMaterial * PhysMaterial, float CurrentSpeed) { return NativeCall<UParticleSystem *, UPhysicalMaterial *, float>(this, "UPrimalWheeledVehicleDustType.GetDustFX", PhysMaterial, CurrentSpeed); }
	float GetMinSpeed(TEnumAsByte<enum EPhysicalSurface> MaterialType) { return NativeCall<float, TEnumAsByte<enum EPhysicalSurface>>(this, "UPrimalWheeledVehicleDustType.GetMinSpeed", MaterialType); }
	UParticleSystem * GetWheelFX(TEnumAsByte<enum EPhysicalSurface> MaterialType) { return NativeCall<UParticleSystem *, TEnumAsByte<enum EPhysicalSurface>>(this, "UPrimalWheeledVehicleDustType.GetWheelFX", MaterialType); }
};

