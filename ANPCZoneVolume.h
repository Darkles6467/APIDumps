#pragma once

#include "BaseDeclarations.h"
#include "AVolume.h"
#include "ABrush.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ANPCZoneVolume : AVolume
{
	char __padding[0x58L];
	TArray<TSubclassOf<APrimalDinoCharacter>>& OnlyCountDinoClassesField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalDinoCharacter>>*>(this, "ANPCZoneVolume.OnlyCountDinoClasses"); }
	TArray<TSubclassOf<APrimalDinoCharacter>>& IgnoreDinoClassesField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalDinoCharacter>>*>(this, "ANPCZoneVolume.IgnoreDinoClasses"); }
	TArray<FHibernationCountInfo>& HibernatedEntitiesField() { return *GetNativePointerField<TArray<FHibernationCountInfo>*>(this, "ANPCZoneVolume.HibernatedEntities"); }
	float& HibernatedCountWeightsField() { return *GetNativePointerField<float*>(this, "ANPCZoneVolume.HibernatedCountWeights"); }
	TArray<TWeakObjectPtr<APrimalDinoCharacter>>& OverlappedDinosField() { return *GetNativePointerField<TArray<TWeakObjectPtr<APrimalDinoCharacter>>*>(this, "ANPCZoneVolume.OverlappedDinos"); }
	float& CountWeightsField() { return *GetNativePointerField<float*>(this, "ANPCZoneVolume.CountWeights"); }

	// Functions

	void BeginPlay() { NativeCall<void>(this, "ANPCZoneVolume.BeginPlay"); }
	void EndPlay(const EEndPlayReason::Type EndPlayReason) { NativeCall<void, const EEndPlayReason::Type>(this, "ANPCZoneVolume.EndPlay", EndPlayReason); }
	void HibernationChange(AActor * Actor, bool bGoingIntoHibernatoin, float WeightChange) { NativeCall<void, AActor *, bool, float>(this, "ANPCZoneVolume.HibernationChange", Actor, bGoingIntoHibernatoin, WeightChange); }
	void LoadedFromSaveGame() { NativeCall<void>(this, "ANPCZoneVolume.LoadedFromSaveGame"); }
	void OnBeginOverlap(AActor * Actor) { NativeCall<void, AActor *>(this, "ANPCZoneVolume.OnBeginOverlap", Actor); }
	void OnEndOverlap(AActor * Actor) { NativeCall<void, AActor *>(this, "ANPCZoneVolume.OnEndOverlap", Actor); }
};

