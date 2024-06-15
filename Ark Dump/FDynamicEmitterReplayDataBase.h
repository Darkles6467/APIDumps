#pragma once

#include "BaseDeclarations.h"
struct FDynamicEmitterReplayDataBase
{
	char __padding[0x60L];
	EDynamicEmitterType& eEmitterTypeField() { return *GetNativePointerField<EDynamicEmitterType*>(this, "FDynamicEmitterReplayDataBase.eEmitterType"); }
	int& ActiveParticleCountField() { return *GetNativePointerField<int*>(this, "FDynamicEmitterReplayDataBase.ActiveParticleCount"); }
	int& ParticleStrideField() { return *GetNativePointerField<int*>(this, "FDynamicEmitterReplayDataBase.ParticleStride"); }
	TArray<unsigned char>& ParticleDataField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FDynamicEmitterReplayDataBase.ParticleData"); }
	TArray<unsigned short>& ParticleIndicesField() { return *GetNativePointerField<TArray<unsigned short>*>(this, "FDynamicEmitterReplayDataBase.ParticleIndices"); }
	FVector& ScaleField() { return *GetNativePointerField<FVector*>(this, "FDynamicEmitterReplayDataBase.Scale"); }
	int& SortModeField() { return *GetNativePointerField<int*>(this, "FDynamicEmitterReplayDataBase.SortMode"); }
	bool& bOverrideSystemMacroUVField() { return *GetNativePointerField<bool*>(this, "FDynamicEmitterReplayDataBase.bOverrideSystemMacroUV"); }
	float& MacroUVRadiusField() { return *GetNativePointerField<float*>(this, "FDynamicEmitterReplayDataBase.MacroUVRadius"); }
	FVector& MacroUVPositionField() { return *GetNativePointerField<FVector*>(this, "FDynamicEmitterReplayDataBase.MacroUVPosition"); }

	// Functions

	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "FDynamicEmitterReplayDataBase.Serialize", Ar); }
};

