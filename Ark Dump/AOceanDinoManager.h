#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct AOceanDinoManager : AActor
{
	char __padding[0x1f8L];
	float& ViewerNumDinosGatherRadiusField() { return *GetNativePointerField<float*>(this, "AOceanDinoManager.ViewerNumDinosGatherRadius"); }
	float& ViewerDinoSpawnRadiusMinField() { return *GetNativePointerField<float*>(this, "AOceanDinoManager.ViewerDinoSpawnRadiusMin"); }
	float& ViewerDinoSpawnRadiusMaxField() { return *GetNativePointerField<float*>(this, "AOceanDinoManager.ViewerDinoSpawnRadiusMax"); }
	float& ViewerDinoSpawnViewOffsetMinField() { return *GetNativePointerField<float*>(this, "AOceanDinoManager.ViewerDinoSpawnViewOffsetMin"); }
	float& ViewerDinoSpawnViewOffsetMaxField() { return *GetNativePointerField<float*>(this, "AOceanDinoManager.ViewerDinoSpawnViewOffsetMax"); }
	TArray<FOceanDinoDepthEntry>& OceanDinoDepthEntriesField() { return *GetNativePointerField<TArray<FOceanDinoDepthEntry>*>(this, "AOceanDinoManager.OceanDinoDepthEntries"); }
	int& MaxValidSpawnPointAttemptsField() { return *GetNativePointerField<int*>(this, "AOceanDinoManager.MaxValidSpawnPointAttempts"); }
	int& MaxNumViewersToUpdatePerFrameField() { return *GetNativePointerField<int*>(this, "AOceanDinoManager.MaxNumViewersToUpdatePerFrame"); }
	float& ViewerNumDinosTargetMinPlayersField() { return *GetNativePointerField<float*>(this, "AOceanDinoManager.ViewerNumDinosTargetMinPlayers"); }
	float& ViewerNumDinosTargetMaxPlayersField() { return *GetNativePointerField<float*>(this, "AOceanDinoManager.ViewerNumDinosTargetMaxPlayers"); }
	float& RaftMinViewerSpeedField() { return *GetNativePointerField<float*>(this, "AOceanDinoManager.RaftMinViewerSpeed"); }
	float& NumDinosMinPlayersField() { return *GetNativePointerField<float*>(this, "AOceanDinoManager.NumDinosMinPlayers"); }
	float& NumDinosMaxPlayersField() { return *GetNativePointerField<float*>(this, "AOceanDinoManager.NumDinosMaxPlayers"); }
	TArray<FName>& OceanVolumeTagsField() { return *GetNativePointerField<TArray<FName>*>(this, "AOceanDinoManager.OceanVolumeTags"); }
	float& MinViewerDeltaDistanceToRefreshOceanSpawnsField() { return *GetNativePointerField<float*>(this, "AOceanDinoManager.MinViewerDeltaDistanceToRefreshOceanSpawns"); }

	// Functions

	void BeginPlay() { NativeCall<void>(this, "AOceanDinoManager.BeginPlay"); }
	APrimalDinoCharacter * GetDinoToUseForOcean(APrimalCharacter * ForViewer, const FVector * AtLocation, const FOceanDinoSpawnEntry * forSpawnEntry) { return NativeCall<APrimalDinoCharacter *, APrimalCharacter *, const FVector *, const FOceanDinoSpawnEntry *>(this, "AOceanDinoManager.GetDinoToUseForOcean", ForViewer, AtLocation, forSpawnEntry); }
	FVector * GetOceanDinoSpawnPointAroundViewer(FVector * result, APrimalCharacter * ForViewer, const FOceanDinoSpawnEntry * forSpawnEntry) { return NativeCall<FVector *, FVector *, APrimalCharacter *, const FOceanDinoSpawnEntry *>(this, "AOceanDinoManager.GetOceanDinoSpawnPointAroundViewer", result, ForViewer, forSpawnEntry); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AOceanDinoManager.Tick", DeltaSeconds); }
	void UpdateOceanDinosForViewer(APrimalCharacter * ForViewer, int NumDinosTarget) { NativeCall<void, APrimalCharacter *, int>(this, "AOceanDinoManager.UpdateOceanDinosForViewer", ForViewer, NumDinosTarget); }
};

