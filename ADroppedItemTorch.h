#pragma once

#include "BaseDeclarations.h"
#include "ADroppedItem.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FLifetimeProperty.h"
#include "FHitResult.h"

struct ADroppedItemLowQuality : ADroppedItem
{

	// Functions

};

struct ADroppedItemTorch : ADroppedItemLowQuality
{
	char __padding[0x18L];
	float& LifeTimeMeterField() { return *GetNativePointerField<float*>(this, "ADroppedItemTorch.LifeTimeMeter"); }
	float& PassiveDurabilityCostPerIntervalField() { return *GetNativePointerField<float*>(this, "ADroppedItemTorch.PassiveDurabilityCostPerInterval"); }
	float& PassiveDurabilityCostIntervalField() { return *GetNativePointerField<float*>(this, "ADroppedItemTorch.PassiveDurabilityCostInterval"); }
	float& LastDurabilityConsumptionTimeField() { return *GetNativePointerField<float*>(this, "ADroppedItemTorch.LastDurabilityConsumptionTime"); }
	bool& FireIsOnField() { return *GetNativePointerField<bool*>(this, "ADroppedItemTorch.FireIsOn"); }
	float& LifeTimeMeterSinceDroppedField() { return *GetNativePointerField<float*>(this, "ADroppedItemTorch.LifeTimeMeterSinceDropped"); }

	// Functions

	void BeginPlay() { NativeCall<void>(this, "ADroppedItemTorch.BeginPlay"); }
	float GetDroppedItemLifeTime() { return NativeCall<float>(this, "ADroppedItemTorch.GetDroppedItemLifeTime"); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "ADroppedItemTorch.GetLifetimeReplicatedProps", OutLifetimeProps); }
	void HandleCollisionWithObjects(FHitResult aHit) { NativeCall<void, FHitResult>(this, "ADroppedItemTorch.HandleCollisionWithObjects", aHit); }
	void LoadData() { NativeCall<void>(this, "ADroppedItemTorch.LoadData"); }
	void OnRep_FireIsOn() { NativeCall<void>(this, "ADroppedItemTorch.OnRep_FireIsOn"); }
	void SetDroppedItemLifeTime() { NativeCall<void>(this, "ADroppedItemTorch.SetDroppedItemLifeTime"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "ADroppedItemTorch.Tick", DeltaSeconds); }
	void Suicide() { NativeCall<void>(this, "ADroppedItemTorch.Suicide"); }
};

