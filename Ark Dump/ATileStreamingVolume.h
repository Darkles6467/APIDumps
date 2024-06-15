#pragma once

#include "BaseDeclarations.h"
#include "AVolume.h"
#include "ABrush.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ATileStreamingVolume : AVolume
{
	char __padding[0x78L];
	TArray<FName>& StreamingLevelNamesField() { return *GetNativePointerField<TArray<FName>*>(this, "ATileStreamingVolume.StreamingLevelNames"); }
	TArray<FName>& ExcludeLevelNamesField() { return *GetNativePointerField<TArray<FName>*>(this, "ATileStreamingVolume.ExcludeLevelNames"); }

	// Functions

	void BeginPlay() { NativeCall<void>(this, "ATileStreamingVolume.BeginPlay"); }
	void DoToggle(bool bEnable) { NativeCall<void, bool>(this, "ATileStreamingVolume.DoToggle", bEnable); }
	void EndPlay(const EEndPlayReason::Type EndPlayReason) { NativeCall<void, const EEndPlayReason::Type>(this, "ATileStreamingVolume.EndPlay", EndPlayReason); }
	void OnInterpToggle(bool bEnable) { NativeCall<void, bool>(this, "ATileStreamingVolume.OnInterpToggle", bEnable); }
	void PostInitializeComponents() { NativeCall<void>(this, "ATileStreamingVolume.PostInitializeComponents"); }
	void PostLoad() { NativeCall<void>(this, "ATileStreamingVolume.PostLoad"); }
	void UpdateNames() { NativeCall<void>(this, "ATileStreamingVolume.UpdateNames"); }
};

