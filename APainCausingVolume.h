#pragma once

#include "BaseDeclarations.h"
#include "APhysicsVolume.h"
#include "AVolume.h"
#include "ABrush.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct APainCausingVolume : APhysicsVolume
{
	char __padding[0x48L];
	float& DamagePerSecField() { return *GetNativePointerField<float*>(this, "APainCausingVolume.DamagePerSec"); }
	float& PainIntervalField() { return *GetNativePointerField<float*>(this, "APainCausingVolume.PainInterval"); }

	// Functions

	void ActorEnteredVolume(AActor * Other) { NativeCall<void, AActor *>(this, "APainCausingVolume.ActorEnteredVolume", Other); }
	bool CausePainTo(AActor * Other) { return NativeCall<bool, AActor *>(this, "APainCausingVolume.CausePainTo", Other); }
	void EndPlay(const EEndPlayReason::Type EndPlayReason) { NativeCall<void, const EEndPlayReason::Type>(this, "APainCausingVolume.EndPlay", EndPlayReason); }
	void PainTimer() { NativeCall<void>(this, "APainCausingVolume.PainTimer"); }
	void PostInitializeComponents() { NativeCall<void>(this, "APainCausingVolume.PostInitializeComponents"); }
	void PreLoadSaveGame() { NativeCall<void>(this, "APainCausingVolume.PreLoadSaveGame"); }
	void Reset() { NativeCall<void>(this, "APainCausingVolume.Reset"); }
};

