#pragma once

#include "BaseDeclarations.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UAIPerceptionComponent : UActorComponent
{
	char __padding[0xb0L];
	float& HearingRangeField() { return *GetNativePointerField<float*>(this, "UAIPerceptionComponent.HearingRange"); }
	float& LOSHearingRangeField() { return *GetNativePointerField<float*>(this, "UAIPerceptionComponent.LOSHearingRange"); }
	float& SightRadiusField() { return *GetNativePointerField<float*>(this, "UAIPerceptionComponent.SightRadius"); }
	float& LoseSightRadiusField() { return *GetNativePointerField<float*>(this, "UAIPerceptionComponent.LoseSightRadius"); }
	float& PeripheralVisionAngleField() { return *GetNativePointerField<float*>(this, "UAIPerceptionComponent.PeripheralVisionAngle"); }
	FPerceptionChannelFilter& PerceptionFilterField() { return *GetNativePointerField<FPerceptionChannelFilter*>(this, "UAIPerceptionComponent.PerceptionFilter"); }
	TEnumAsByte<enum ECorePerceptionTypes::Type>& DominantSenseField() { return *GetNativePointerField<TEnumAsByte<enum ECorePerceptionTypes::Type>*>(this, "UAIPerceptionComponent.DominantSense"); }
	TArray<UAIPerceptionComponent::FStimulusToProcess>& StimuliToProcessField() { return *GetNativePointerField<TArray<UAIPerceptionComponent::FStimulusToProcess>*>(this, "UAIPerceptionComponent.StimuliToProcess"); }
	FieldArray<float, 6> MaxActiveAgeField() { return {this, "UAIPerceptionComponent.MaxActiveAge"}; }
	unsigned int& PerceptionListenerIdField() { return *GetNativePointerField<unsigned int*>(this, "UAIPerceptionComponent.PerceptionListenerId"); }

	// Functions

	void AgeStimuli(const float ConstPerceptionAgingRate) { NativeCall<void, const float>(this, "UAIPerceptionComponent.AgeStimuli", ConstPerceptionAgingRate); }
	void BeginDestroy() { NativeCall<void>(this, "UAIPerceptionComponent.BeginDestroy"); }
	void CleanUp() { NativeCall<void>(this, "UAIPerceptionComponent.CleanUp"); }
	void OnOwnerEndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "UAIPerceptionComponent.OnOwnerEndPlay", EndPlayReason); }
	void PostInitProperties() { NativeCall<void>(this, "UAIPerceptionComponent.PostInitProperties"); }
	void RegisterStimulus(AActor * Source, const FAIStimulus * Stimulus) { NativeCall<void, AActor *, const FAIStimulus *>(this, "UAIPerceptionComponent.RegisterStimulus", Source, Stimulus); }
	void RequestStimuliListenerUpdate() { NativeCall<void>(this, "UAIPerceptionComponent.RequestStimuliListenerUpdate"); }
	void SetHearingRange(const float NewHearingRange) { NativeCall<void, const float>(this, "UAIPerceptionComponent.SetHearingRange", NewHearingRange); }
	void SetLOSHearingRange(const float NewLOSHearingRange) { NativeCall<void, const float>(this, "UAIPerceptionComponent.SetLOSHearingRange", NewLOSHearingRange); }
	void SetPeripheralVisionAngle(const float NewPeripheralVisionAngle) { NativeCall<void, const float>(this, "UAIPerceptionComponent.SetPeripheralVisionAngle", NewPeripheralVisionAngle); }
	void SetSightRadius(const float NewSightRadius) { NativeCall<void, const float>(this, "UAIPerceptionComponent.SetSightRadius", NewSightRadius); }
};

