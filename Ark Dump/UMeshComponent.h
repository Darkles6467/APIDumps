#pragma once

#include "BaseDeclarations.h"
#include "UPrimitiveComponent.h"

struct UMeshComponent : UPrimitiveComponent
{
	char __padding[0x10L];
	FieldArray<_BYTE, 8> MaterialsField() { return {this, "UMeshComponent.Materials"}; }

	// Functions

	void BeginDestroy() { NativeCall<void>(this, "UMeshComponent.BeginDestroy"); }
	void GetUsedMaterials(TArray<UMaterialInterface *> * OutMaterials) { NativeCall<void, TArray<UMaterialInterface *> *>(this, "UMeshComponent.GetUsedMaterials", OutMaterials); }
	void PrestreamTextures(float Seconds, bool bPrioritizeCharacterTextures, int CinematicTextureGroups) { NativeCall<void, float, bool, int>(this, "UMeshComponent.PrestreamTextures", Seconds, bPrioritizeCharacterTextures, CinematicTextureGroups); }
	void SetMaterial(int ElementIndex, UMaterialInterface * Material) { NativeCall<void, int, UMaterialInterface *>(this, "UMeshComponent.SetMaterial", ElementIndex, Material); }
	void SetTextureForceResidentFlag(bool bForceMiplevelsToBeResident) { NativeCall<void, bool>(this, "UMeshComponent.SetTextureForceResidentFlag", bForceMiplevelsToBeResident); }
};

