#pragma once

#include "BaseDeclarations.h"
struct ShooterCharacter_eventClientsSpawnHexagonVFX_Parms
{
	char __padding[0x1cL];
	int& NumHexagonsField() { return *GetNativePointerField<int*>(this, "ShooterCharacter_eventClientsSpawnHexagonVFX_Parms.NumHexagons"); }
	float& OverrideCollectSFXVolumeField() { return *GetNativePointerField<float*>(this, "ShooterCharacter_eventClientsSpawnHexagonVFX_Parms.OverrideCollectSFXVolume"); }
	FVector& OverrideVfxSpawnLocField() { return *GetNativePointerField<FVector*>(this, "ShooterCharacter_eventClientsSpawnHexagonVFX_Parms.OverrideVfxSpawnLoc"); }
	int& OverrideHexagonVFXActorCountField() { return *GetNativePointerField<int*>(this, "ShooterCharacter_eventClientsSpawnHexagonVFX_Parms.OverrideHexagonVFXActorCount"); }
	bool& VFXImmediatelyAttractsField() { return *GetNativePointerField<bool*>(this, "ShooterCharacter_eventClientsSpawnHexagonVFX_Parms.VFXImmediatelyAttracts"); }
};

