#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UTimelineTemplate : UObject
{
	char __padding[0x70L];
	float& TimelineLengthField() { return *GetNativePointerField<float*>(this, "UTimelineTemplate.TimelineLength"); }
	TEnumAsByte<enum ETimelineLengthMode>& LengthModeField() { return *GetNativePointerField<TEnumAsByte<enum ETimelineLengthMode>*>(this, "UTimelineTemplate.LengthMode"); }
	TArray<FTTEventTrack>& EventTracksField() { return *GetNativePointerField<TArray<FTTEventTrack>*>(this, "UTimelineTemplate.EventTracks"); }
	TArray<FTTFloatTrack>& FloatTracksField() { return *GetNativePointerField<TArray<FTTFloatTrack>*>(this, "UTimelineTemplate.FloatTracks"); }
	TArray<FTTVectorTrack>& VectorTracksField() { return *GetNativePointerField<TArray<FTTVectorTrack>*>(this, "UTimelineTemplate.VectorTracks"); }
	TArray<FTTLinearColorTrack>& LinearColorTracksField() { return *GetNativePointerField<TArray<FTTLinearColorTrack>*>(this, "UTimelineTemplate.LinearColorTracks"); }
	TArray<FBPVariableMetaDataEntry>& MetaDataArrayField() { return *GetNativePointerField<TArray<FBPVariableMetaDataEntry>*>(this, "UTimelineTemplate.MetaDataArray"); }
	FGuid& TimelineGuidField() { return *GetNativePointerField<FGuid*>(this, "UTimelineTemplate.TimelineGuid"); }

	// Functions

	FName * GetDirectionPropertyName(FName * result) { return NativeCall<FName *, FName *>(this, "UTimelineTemplate.GetDirectionPropertyName", result); }
	FName * GetEventTrackFunctionName(FName * result, int EventTrackIndex) { return NativeCall<FName *, FName *, int>(this, "UTimelineTemplate.GetEventTrackFunctionName", result, EventTrackIndex); }
	FName * GetFinishedFunctionName(FName * result) { return NativeCall<FName *, FName *>(this, "UTimelineTemplate.GetFinishedFunctionName", result); }
	FName * GetTrackPropertyName(FName * result, const FName TrackName) { return NativeCall<FName *, FName *, const FName>(this, "UTimelineTemplate.GetTrackPropertyName", result, TrackName); }
	FName * GetUpdateFunctionName(FName * result) { return NativeCall<FName *, FName *>(this, "UTimelineTemplate.GetUpdateFunctionName", result); }
	static FString * MakeUniqueCurveName(FString * result, UObject * Obj, UObject * InOuter) { return NativeCall<FString *, FString *, UObject *, UObject *>(nullptr, "UTimelineTemplate.MakeUniqueCurveName", result, Obj, InOuter); }
	void PostDuplicate(bool bDuplicateForPIE) { NativeCall<void, bool>(this, "UTimelineTemplate.PostDuplicate", bDuplicateForPIE); }
	static FString * TimelineTemplateNameToVariableName(FString * result, FName Name) { return NativeCall<FString *, FString *, FName>(nullptr, "UTimelineTemplate.TimelineTemplateNameToVariableName", result, Name); }
};

