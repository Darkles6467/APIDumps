#pragma once

#include "BaseDeclarations.h"
struct FSpawnPointInfo
{
	char __padding[0x48L];
	int& SpawnPointIDField() { return *GetNativePointerField<int*>(this, "FSpawnPointInfo.SpawnPointID"); }
	FString& BedNameField() { return *GetNativePointerField<FString*>(this, "FSpawnPointInfo.BedName"); }
	ABiomeZoneVolume * SpawnPointVolumeField() { return GetNativePointerField<ABiomeZoneVolume *>(this, "FSpawnPointInfo.SpawnPointVolume"); }
	FVector& AtLocationField() { return *GetNativePointerField<FVector*>(this, "FSpawnPointInfo.AtLocation"); }
	long double& NextAllowedUseTimeField() { return *GetNativePointerField<long double*>(this, "FSpawnPointInfo.NextAllowedUseTime"); }
	bool& bAllowedUseField() { return *GetNativePointerField<bool*>(this, "FSpawnPointInfo.bAllowedUse"); }

	// Functions

	FSpawnPointInfo * operator=(const FSpawnPointInfo * __that) { return NativeCall<FSpawnPointInfo *, const FSpawnPointInfo *>(this, "FSpawnPointInfo.operator=", __that); }
	FString * GetDisplayName(FString * result, const FVector * FromPos, bool bIncludeDistance) { return NativeCall<FString *, FString *, const FVector *, bool>(this, "FSpawnPointInfo.GetDisplayName", result, FromPos, bIncludeDistance); }
	bool operator==(const FSpawnPointInfo * Other) { return NativeCall<bool, const FSpawnPointInfo *>(this, "FSpawnPointInfo.operator==", Other); }
};

