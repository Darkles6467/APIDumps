#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct AShooterImpactEffect : AActor
{
	char __padding[0x418L];
	FieldArray<UParticleSystem *, 16> SurfaceImpactFXField() { return {this, "AShooterImpactEffect.SurfaceImpactFX"}; }
	FieldArray<USoundCue *, 16> SurfaceImpactSoundField() { return {this, "AShooterImpactEffect.SurfaceImpactSound"}; }
	float& MaxDecalRangeField() { return *GetNativePointerField<float*>(this, "AShooterImpactEffect.MaxDecalRange"); }
	FieldArray<FDecalData, 16> SurfaceDecalDataField() { return {this, "AShooterImpactEffect.SurfaceDecalData"}; }
	FHitResult& SurfaceHitField() { return *GetNativePointerField<FHitResult*>(this, "AShooterImpactEffect.SurfaceHit"); }

	// Functions

	void GetImpactDecalData(FDecalData * aDecalData, TEnumAsByte<enum EPhysicalSurface> SurfaceType, APrimalCharacter * aChar) { NativeCall<void, FDecalData *, TEnumAsByte<enum EPhysicalSurface>, APrimalCharacter *>(this, "AShooterImpactEffect.GetImpactDecalData", aDecalData, SurfaceType, aChar); }
	UParticleSystem * GetImpactFX(TEnumAsByte<enum EPhysicalSurface> SurfaceType, APrimalCharacter * aPawn) { return NativeCall<UParticleSystem *, TEnumAsByte<enum EPhysicalSurface>, APrimalCharacter *>(this, "AShooterImpactEffect.GetImpactFX", SurfaceType, aPawn); }
	USoundCue * GetImpactSound(TEnumAsByte<enum EPhysicalSurface> SurfaceType, bool IsPawn) { return NativeCall<USoundCue *, TEnumAsByte<enum EPhysicalSurface>, bool>(this, "AShooterImpactEffect.GetImpactSound", SurfaceType, IsPawn); }
	void PostInitializeComponents() { NativeCall<void>(this, "AShooterImpactEffect.PostInitializeComponents"); }
};

