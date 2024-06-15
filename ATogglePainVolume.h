#pragma once

#include "BaseDeclarations.h"
#include "AVolume.h"
#include "ABrush.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ATogglePainVolume : AVolume
{
	char __padding[0x100L];
	bool& bEnabledField() { return *GetNativePointerField<bool*>(this, "ATogglePainVolume.bEnabled"); }
	float& StructureDamageOverlapRadiusField() { return *GetNativePointerField<float*>(this, "ATogglePainVolume.StructureDamageOverlapRadius"); }
	float& DamagePerSecField() { return *GetNativePointerField<float*>(this, "ATogglePainVolume.DamagePerSec"); }
	float& StructureDamagePerSecField() { return *GetNativePointerField<float*>(this, "ATogglePainVolume.StructureDamagePerSec"); }
	float& PainIntervalField() { return *GetNativePointerField<float*>(this, "ATogglePainVolume.PainInterval"); }
	float& DelayTogglePainActiveField() { return *GetNativePointerField<float*>(this, "ATogglePainVolume.DelayTogglePainActive"); }

	// Functions

	void BeginPlay() { NativeCall<void>(this, "ATogglePainVolume.BeginPlay"); }
	void CausePainTo(AActor * Other) { NativeCall<void, AActor *>(this, "ATogglePainVolume.CausePainTo", Other); }
	bool CheckForStructures(bool bStartPainTimer, TSet<APrimalStructure *,DefaultKeyFuncs<APrimalStructure *,0>,FDefaultSetAllocator> * OutStructures) { return NativeCall<bool, bool, TSet<APrimalStructure *,DefaultKeyFuncs<APrimalStructure *,0>,FDefaultSetAllocator> *>(this, "ATogglePainVolume.CheckForStructures", bStartPainTimer, OutStructures); }
	void DelayedActive() { NativeCall<void>(this, "ATogglePainVolume.DelayedActive"); }
	void EndPlay(const EEndPlayReason::Type EndPlayReason) { NativeCall<void, const EEndPlayReason::Type>(this, "ATogglePainVolume.EndPlay", EndPlayReason); }
	int GetOverlappedActorNum() { return NativeCall<int>(this, "ATogglePainVolume.GetOverlappedActorNum"); }
	void GetOverlappedActors(TArray<AActor *> * OutActors) { NativeCall<void, TArray<AActor *> *>(this, "ATogglePainVolume.GetOverlappedActors", OutActors); }
	void OnBeginOverlap(AActor * Actor) { NativeCall<void, AActor *>(this, "ATogglePainVolume.OnBeginOverlap", Actor); }
	void OnEndOverlap(AActor * Actor) { NativeCall<void, AActor *>(this, "ATogglePainVolume.OnEndOverlap", Actor); }
	void OnInterpToggle(bool bEnable) { NativeCall<void, bool>(this, "ATogglePainVolume.OnInterpToggle", bEnable); }
	void PainTimer() { NativeCall<void>(this, "ATogglePainVolume.PainTimer"); }
	void PreLoadSaveGame() { NativeCall<void>(this, "ATogglePainVolume.PreLoadSaveGame"); }
	void SetPainVolumeEnabled(bool bEnable) { NativeCall<void, bool>(this, "ATogglePainVolume.SetPainVolumeEnabled", bEnable); }
};

