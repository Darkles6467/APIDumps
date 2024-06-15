#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Companion_eventOnSpawnHexagons_Parms
{
	char __padding[0x8L];
	float& OverrideCollectSFXVolumeField() { return *GetNativePointerField<float*>(this, "PrimalBuff_Companion_eventOnSpawnHexagons_Parms.OverrideCollectSFXVolume"); }
	bool& VFXImmediatelyAttractsField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_Companion_eventOnSpawnHexagons_Parms.VFXImmediatelyAttracts"); }
};

