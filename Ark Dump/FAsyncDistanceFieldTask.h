#pragma once

#include "BaseDeclarations.h"
struct FAsyncDistanceFieldTask
{
	char __padding[0x40L];
	TArray<enum EBlendMode>& MaterialBlendModesField() { return *GetNativePointerField<TArray<enum EBlendMode>*>(this, "FAsyncDistanceFieldTask.MaterialBlendModes"); }
	UStaticMesh * StaticMeshField() { return GetNativePointerField<UStaticMesh *>(this, "FAsyncDistanceFieldTask.StaticMesh"); }
	UStaticMesh * GenerateSourceField() { return GetNativePointerField<UStaticMesh *>(this, "FAsyncDistanceFieldTask.GenerateSource"); }
	float& DistanceFieldResolutionScaleField() { return *GetNativePointerField<float*>(this, "FAsyncDistanceFieldTask.DistanceFieldResolutionScale"); }
	bool& bGenerateDistanceFieldAsIfTwoSidedField() { return *GetNativePointerField<bool*>(this, "FAsyncDistanceFieldTask.bGenerateDistanceFieldAsIfTwoSided"); }
	FString& DDCKeyField() { return *GetNativePointerField<FString*>(this, "FAsyncDistanceFieldTask.DDCKey"); }
	FDistanceFieldVolumeData * GeneratedVolumeDataField() { return GetNativePointerField<FDistanceFieldVolumeData *>(this, "FAsyncDistanceFieldTask.GeneratedVolumeData"); }
};

