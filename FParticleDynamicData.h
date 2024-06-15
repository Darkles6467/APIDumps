#pragma once

#include "BaseDeclarations.h"
struct FParticleDynamicData
{
	char __padding[0x30L];
	unsigned int& EmitterIndexField() { return *GetNativePointerField<unsigned int*>(this, "FParticleDynamicData.EmitterIndex"); }
	FVector& SystemPositionForMacroUVsField() { return *GetNativePointerField<FVector*>(this, "FParticleDynamicData.SystemPositionForMacroUVs"); }
	float& SystemRadiusForMacroUVsField() { return *GetNativePointerField<float*>(this, "FParticleDynamicData.SystemRadiusForMacroUVs"); }

	// Functions

	void ClearEmitterDataArray() { NativeCall<void>(this, "FParticleDynamicData.ClearEmitterDataArray"); }
};

