#pragma once

#include "BaseDeclarations.h"
#include "ADroppedItem.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FLifetimeProperty.h"

struct ADroppedItemEgg : ADroppedItem
{
	char __padding[0x30L];
	float& IndoorsHypoThermalInsulationField() { return *GetNativePointerField<float*>(this, "ADroppedItemEgg.IndoorsHypoThermalInsulation"); }
	float& IndoorsHyperThermalInsulationField() { return *GetNativePointerField<float*>(this, "ADroppedItemEgg.IndoorsHyperThermalInsulation"); }
	float& EggThermalInsulationTemperatureMultiplierField() { return *GetNativePointerField<float*>(this, "ADroppedItemEgg.EggThermalInsulationTemperatureMultiplier"); }
	ABiomeZoneVolume * MyBiomeZoneField() { return GetNativePointerField<ABiomeZoneVolume *>(this, "ADroppedItemEgg.MyBiomeZone"); }
	long double& LastInsulationCalcTimeField() { return *GetNativePointerField<long double*>(this, "ADroppedItemEgg.LastInsulationCalcTime"); }
	float& HyperThermalInsulationField() { return *GetNativePointerField<float*>(this, "ADroppedItemEgg.HyperThermalInsulation"); }
	float& HypoThermalInsulationField() { return *GetNativePointerField<float*>(this, "ADroppedItemEgg.HypoThermalInsulation"); }

	// Functions

	void BeginPlay() { NativeCall<void>(this, "ADroppedItemEgg.BeginPlay"); }
	void CalcInsulation() { NativeCall<void>(this, "ADroppedItemEgg.CalcInsulation"); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "ADroppedItemEgg.GetLifetimeReplicatedProps", OutLifetimeProps); }
	void NetSpawnDinoEmitter_Implementation() { NativeCall<void>(this, "ADroppedItemEgg.NetSpawnDinoEmitter_Implementation"); }
	void Stasis() { NativeCall<void>(this, "ADroppedItemEgg.Stasis"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "ADroppedItemEgg.Tick", DeltaSeconds); }
	void UpdateEgg(float DeltaSeconds) { NativeCall<void, float>(this, "ADroppedItemEgg.UpdateEgg", DeltaSeconds); }
	void NetSpawnDinoEmitter() { NativeCall<void>(this, "ADroppedItemEgg.NetSpawnDinoEmitter"); }
};

