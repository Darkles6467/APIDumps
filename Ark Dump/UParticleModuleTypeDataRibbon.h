#pragma once

#include "BaseDeclarations.h"
#include "UParticleModuleTypeDataBase.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleModuleTypeDataRibbon : UParticleModuleTypeDataBase
{
	char __padding[0x30L];
	int& MaxTessellationBetweenParticlesField() { return *GetNativePointerField<int*>(this, "UParticleModuleTypeDataRibbon.MaxTessellationBetweenParticles"); }
	int& SheetsPerTrailField() { return *GetNativePointerField<int*>(this, "UParticleModuleTypeDataRibbon.SheetsPerTrail"); }
	int& MaxTrailCountField() { return *GetNativePointerField<int*>(this, "UParticleModuleTypeDataRibbon.MaxTrailCount"); }
	int& MaxParticleInTrailCountField() { return *GetNativePointerField<int*>(this, "UParticleModuleTypeDataRibbon.MaxParticleInTrailCount"); }
	TEnumAsByte<enum ETrailsRenderAxisOption>& RenderAxisField() { return *GetNativePointerField<TEnumAsByte<enum ETrailsRenderAxisOption>*>(this, "UParticleModuleTypeDataRibbon.RenderAxis"); }
	float& TangentSpawningScalarField() { return *GetNativePointerField<float*>(this, "UParticleModuleTypeDataRibbon.TangentSpawningScalar"); }
	float& TilingDistanceField() { return *GetNativePointerField<float*>(this, "UParticleModuleTypeDataRibbon.TilingDistance"); }
	float& DistanceTessellationStepSizeField() { return *GetNativePointerField<float*>(this, "UParticleModuleTypeDataRibbon.DistanceTessellationStepSize"); }
	float& TangentTessellationScalarField() { return *GetNativePointerField<float*>(this, "UParticleModuleTypeDataRibbon.TangentTessellationScalar"); }

	// Functions

	unsigned int RequiredBytes() { return NativeCall<unsigned int>(this, "UParticleModuleTypeDataRibbon.RequiredBytes"); }
};

