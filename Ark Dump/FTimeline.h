#pragma once

#include "BaseDeclarations.h"
struct FTimeline
{
	char __padding[0x98L];
	TEnumAsByte<enum ETimelineLengthMode>& LengthModeField() { return *GetNativePointerField<TEnumAsByte<enum ETimelineLengthMode>*>(this, "FTimeline.LengthMode"); }
	float& LengthField() { return *GetNativePointerField<float*>(this, "FTimeline.Length"); }
	float& PlayRateField() { return *GetNativePointerField<float*>(this, "FTimeline.PlayRate"); }
	float& PositionField() { return *GetNativePointerField<float*>(this, "FTimeline.Position"); }
	TArray<FTimelineEventEntry>& EventsField() { return *GetNativePointerField<TArray<FTimelineEventEntry>*>(this, "FTimeline.Events"); }
	TArray<FTimelineVectorTrack>& InterpVectorsField() { return *GetNativePointerField<TArray<FTimelineVectorTrack>*>(this, "FTimeline.InterpVectors"); }
	TArray<FTimelineFloatTrack>& InterpFloatsField() { return *GetNativePointerField<TArray<FTimelineFloatTrack>*>(this, "FTimeline.InterpFloats"); }
	TArray<FTimelineLinearColorTrack>& InterpLinearColorsField() { return *GetNativePointerField<TArray<FTimelineLinearColorTrack>*>(this, "FTimeline.InterpLinearColors"); }
	FName& DirectionPropertyNameField() { return *GetNativePointerField<FName*>(this, "FTimeline.DirectionPropertyName"); }

	// Functions

	void AddEvent(float Time, FOnTimelineEvent Event) { NativeCall<void, float, FOnTimelineEvent>(this, "FTimeline.AddEvent", Time, Event); }
	void AddInterpFloat(UCurveFloat * FloatCurve, FOnTimelineFloat InterpFunc, FName PropertyName) { NativeCall<void, UCurveFloat *, FOnTimelineFloat, FName>(this, "FTimeline.AddInterpFloat", FloatCurve, InterpFunc, PropertyName); }
	void AddInterpLinearColor(UCurveLinearColor * LinearColorCurve, FOnTimelineLinearColor InterpFunc, FName PropertyName) { NativeCall<void, UCurveLinearColor *, FOnTimelineLinearColor, FName>(this, "FTimeline.AddInterpLinearColor", LinearColorCurve, InterpFunc, PropertyName); }
	void AddInterpVector(UCurveVector * VectorCurve, FOnTimelineVector InterpFunc, FName PropertyName) { NativeCall<void, UCurveVector *, FOnTimelineVector, FName>(this, "FTimeline.AddInterpVector", VectorCurve, InterpFunc, PropertyName); }
	float GetLastKeyframeTime() { return NativeCall<float>(this, "FTimeline.GetLastKeyframeTime"); }
	void SetPlaybackPosition(float NewPosition, bool bFireEvents) { NativeCall<void, float, bool>(this, "FTimeline.SetPlaybackPosition", NewPosition, bFireEvents); }
	void TickTimeline(float DeltaTime) { NativeCall<void, float>(this, "FTimeline.TickTimeline", DeltaTime); }
	FTimeline * operator=(const FTimeline * __that) { return NativeCall<FTimeline *, const FTimeline *>(this, "FTimeline.operator=", __that); }
};

