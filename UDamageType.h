#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"

struct UDamageType : UObject
{
	char __padding[0x28L];
	float& ImpulseMinimumZPercentField() { return *GetNativePointerField<float*>(this, "UDamageType.ImpulseMinimumZPercent"); }
	float& DestructibleImpulseScaleField() { return *GetNativePointerField<float*>(this, "UDamageType.DestructibleImpulseScale"); }
	float& ImpulseRagdollScaleField() { return *GetNativePointerField<float*>(this, "UDamageType.ImpulseRagdollScale"); }
	float& DefaultImpulseField() { return *GetNativePointerField<float*>(this, "UDamageType.DefaultImpulse"); }
	float& PointDamageArmorEffectivenessField() { return *GetNativePointerField<float*>(this, "UDamageType.PointDamageArmorEffectiveness"); }
	float& GeneralDamageArmorEffectivenessField() { return *GetNativePointerField<float*>(this, "UDamageType.GeneralDamageArmorEffectiveness"); }
	float& ArmorDurabilityDegradationMultiplierField() { return *GetNativePointerField<float*>(this, "UDamageType.ArmorDurabilityDegradationMultiplier"); }
	float& RadialPartiallyObstructedDamagePercentField() { return *GetNativePointerField<float*>(this, "UDamageType.RadialPartiallyObstructedDamagePercent"); }

	// Functions

	float HandleDamage(AActor * Victim, float DamageAmount, const FDamageEvent * DamageEvent, AController * EventInstigator, AActor * DamageCauser) { return NativeCall<float, AActor *, float, const FDamageEvent *, AController *, AActor *>(this, "UDamageType.HandleDamage", Victim, DamageAmount, DamageEvent, EventInstigator, DamageCauser); }
};

