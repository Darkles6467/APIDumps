#pragma once

#include "BaseDeclarations.h"
#include "UBlueprintFunctionLibrary.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UAIPerceptionSystem : UBlueprintFunctionLibrary
{
	enum EDelayedStimulusSorting
	{
		RequiresSorting = 0x0,
		NoNeedToSort = 0x1,
	};

	char __padding[0x90L];
	float& PerceptionAgingRateField() { return *GetNativePointerField<float*>(this, "UAIPerceptionSystem.PerceptionAgingRate"); }
	TArray<UAIPerceptionSystem::FDelayedStimulus>& DelayedStimuliField() { return *GetNativePointerField<TArray<UAIPerceptionSystem::FDelayedStimulus>*>(this, "UAIPerceptionSystem.DelayedStimuli"); }
	TArray<UAIPerceptionSystem::FPerceptionSourceRegistration>& SourcesToRegisterField() { return *GetNativePointerField<TArray<UAIPerceptionSystem::FPerceptionSourceRegistration>*>(this, "UAIPerceptionSystem.SourcesToRegister"); }
	unsigned int& NextFreeListenerIdField() { return *GetNativePointerField<unsigned int*>(this, "UAIPerceptionSystem.NextFreeListenerId"); }
	float& CurrentTimeField() { return *GetNativePointerField<float*>(this, "UAIPerceptionSystem.CurrentTime"); }

	// Functions

	void AgeStimuli() { NativeCall<void>(this, "UAIPerceptionSystem.AgeStimuli"); }
	static void MakeNoiseImpl(AActor * NoiseMaker, float Loudness, APawn * NoiseInstigator, const FVector * NoiseLocation) { NativeCall<void, AActor *, float, APawn *, const FVector *>(nullptr, "UAIPerceptionSystem.MakeNoiseImpl", NoiseMaker, Loudness, NoiseInstigator, NoiseLocation); }
	void OnListenerRemoved(const FPerceptionListener * NewListener) { NativeCall<void, const FPerceptionListener *>(this, "UAIPerceptionSystem.OnListenerRemoved", NewListener); }
	void OnListenerUpdate(const FPerceptionListener * UpdatedListener) { NativeCall<void, const FPerceptionListener *>(this, "UAIPerceptionSystem.OnListenerUpdate", UpdatedListener); }
	void OnNewListener(const FPerceptionListener * NewListener) { NativeCall<void, const FPerceptionListener *>(this, "UAIPerceptionSystem.OnNewListener", NewListener); }
	void PostInitProperties() { NativeCall<void>(this, "UAIPerceptionSystem.PostInitProperties"); }
	void RegisterDelayedStimulus(unsigned int ListenerId, float Delay, AActor * Instigator, const FAIStimulus * Stimulus) { NativeCall<void, unsigned int, float, AActor *, const FAIStimulus *>(this, "UAIPerceptionSystem.RegisterDelayedStimulus", ListenerId, Delay, Instigator, Stimulus); }
	void UnregisterListener(UAIPerceptionComponent * Listener) { NativeCall<void, UAIPerceptionComponent *>(this, "UAIPerceptionSystem.UnregisterListener", Listener); }
	void UpdateListener(UAIPerceptionComponent * Listener) { NativeCall<void, UAIPerceptionComponent *>(this, "UAIPerceptionSystem.UpdateListener", Listener); }
};

