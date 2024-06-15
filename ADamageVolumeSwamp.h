#pragma once

#include "BaseDeclarations.h"
#include "AVolume.h"
#include "ABrush.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ADamageVolumeBase : AVolume
{
	char __padding[0x30L];
	float& DamageAmountField() { return *GetNativePointerField<float*>(this, "ADamageVolumeBase.DamageAmount"); }
	float& DamageIntervalField() { return *GetNativePointerField<float*>(this, "ADamageVolumeBase.DamageInterval"); }
	TArray<FDamageNegatingItem>& DamageNegatingItemsField() { return *GetNativePointerField<TArray<FDamageNegatingItem>*>(this, "ADamageVolumeBase.DamageNegatingItems"); }
	TArray<TWeakObjectPtr<AShooterCharacter>>& OverlappedActorsField() { return *GetNativePointerField<TArray<TWeakObjectPtr<AShooterCharacter>>*>(this, "ADamageVolumeBase.OverlappedActors"); }

	// Functions

	void BeginPlay() { NativeCall<void>(this, "ADamageVolumeBase.BeginPlay"); }
};

struct ADamageVolumeSwamp : ADamageVolumeBase
{
	char __padding[0x8L];
	long double& lastDamageTimeField() { return *GetNativePointerField<long double*>(this, "ADamageVolumeSwamp.lastDamageTime"); }

	// Functions

	float GetDamageNegationModifier(AActor * Actor) { return NativeCall<float, AActor *>(this, "ADamageVolumeSwamp.GetDamageNegationModifier", Actor); }
	void OnBeginOverlap(AActor * Actor) { NativeCall<void, AActor *>(this, "ADamageVolumeSwamp.OnBeginOverlap", Actor); }
	void OnEndOverlap(AActor * Actor) { NativeCall<void, AActor *>(this, "ADamageVolumeSwamp.OnEndOverlap", Actor); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "ADamageVolumeSwamp.Tick", DeltaSeconds); }
};

