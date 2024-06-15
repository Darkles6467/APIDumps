#pragma once

#include "BaseDeclarations.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FLifetimeProperty.h"

struct UTimelineComponent : UActorComponent
{
	char __padding[0x98L];
	FTimeline& TheTimelineField() { return *GetNativePointerField<FTimeline*>(this, "UTimelineComponent.TheTimeline"); }

	// Functions

	void AddEvent(float Time, FOnTimelineEvent Event) { NativeCall<void, float, FOnTimelineEvent>(this, "UTimelineComponent.AddEvent", Time, Event); }
	void AddInterpFloat(UCurveFloat * FloatCurve, FOnTimelineFloat InterpFunc, FName PropertyName) { NativeCall<void, UCurveFloat *, FOnTimelineFloat, FName>(this, "UTimelineComponent.AddInterpFloat", FloatCurve, InterpFunc, PropertyName); }
	void AddInterpLinearColor(UCurveLinearColor * LinearColorCurve, FOnTimelineLinearColor InterpFunc, FName PropertyName) { NativeCall<void, UCurveLinearColor *, FOnTimelineLinearColor, FName>(this, "UTimelineComponent.AddInterpLinearColor", LinearColorCurve, InterpFunc, PropertyName); }
	void AddInterpVector(UCurveVector * VectorCurve, FOnTimelineVector InterpFunc, FName PropertyName) { NativeCall<void, UCurveVector *, FOnTimelineVector, FName>(this, "UTimelineComponent.AddInterpVector", VectorCurve, InterpFunc, PropertyName); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "UTimelineComponent.GetLifetimeReplicatedProps", OutLifetimeProps); }
	float GetPlayRate() { return NativeCall<float>(this, "UTimelineComponent.GetPlayRate"); }
	float GetPlaybackPosition() { return NativeCall<float>(this, "UTimelineComponent.GetPlaybackPosition"); }
	float GetTimelineLength() { return NativeCall<float>(this, "UTimelineComponent.GetTimelineLength"); }
	bool IsLooping() { return NativeCall<bool>(this, "UTimelineComponent.IsLooping"); }
	bool IsPlaying() { return NativeCall<bool>(this, "UTimelineComponent.IsPlaying"); }
	bool IsReversing() { return NativeCall<bool>(this, "UTimelineComponent.IsReversing"); }
	void Play() { NativeCall<void>(this, "UTimelineComponent.Play"); }
	void PlayFromStart() { NativeCall<void>(this, "UTimelineComponent.PlayFromStart"); }
	void Reverse() { NativeCall<void>(this, "UTimelineComponent.Reverse"); }
	void ReverseFromEnd() { NativeCall<void>(this, "UTimelineComponent.ReverseFromEnd"); }
	void SetDirectionPropertyName(FName DirectionPropertyName) { NativeCall<void, FName>(this, "UTimelineComponent.SetDirectionPropertyName", DirectionPropertyName); }
	void SetLooping(bool bNewLooping) { NativeCall<void, bool>(this, "UTimelineComponent.SetLooping", bNewLooping); }
	void SetNewTime(float NewTime) { NativeCall<void, float>(this, "UTimelineComponent.SetNewTime", NewTime); }
	void SetPlayRate(float NewRate) { NativeCall<void, float>(this, "UTimelineComponent.SetPlayRate", NewRate); }
	void SetPlaybackPosition(float NewPosition, bool bFireEvents) { NativeCall<void, float, bool>(this, "UTimelineComponent.SetPlaybackPosition", NewPosition, bFireEvents); }
	void SetPropertySetObject(UObject * NewPropertySetObject) { NativeCall<void, UObject *>(this, "UTimelineComponent.SetPropertySetObject", NewPropertySetObject); }
	void SetTimelineFinishedFunc(FOnTimelineEvent NewTimelineFinishedFunc) { NativeCall<void, FOnTimelineEvent>(this, "UTimelineComponent.SetTimelineFinishedFunc", NewTimelineFinishedFunc); }
	void SetTimelineLength(float NewLength) { NativeCall<void, float>(this, "UTimelineComponent.SetTimelineLength", NewLength); }
	void SetTimelineLengthMode(ETimelineLengthMode NewLengthMode) { NativeCall<void, ETimelineLengthMode>(this, "UTimelineComponent.SetTimelineLengthMode", NewLengthMode); }
	void SetTimelinePostUpdateFunc(FOnTimelineEvent NewTimelinePostUpdateFunc) { NativeCall<void, FOnTimelineEvent>(this, "UTimelineComponent.SetTimelinePostUpdateFunc", NewTimelinePostUpdateFunc); }
	void Stop() { NativeCall<void>(this, "UTimelineComponent.Stop"); }
};

