#pragma once

#include "BaseDeclarations.h"
struct FCompanionEventData
{
	char __padding[0x50L];
	char& EventTypeField() { return *GetNativePointerField<char*>(this, "FCompanionEventData.EventType"); }
	FString& EventTitleField() { return *GetNativePointerField<FString*>(this, "FCompanionEventData.EventTitle"); }
	TArray<FCompanionEventSegmentData>& EventSegmentArrayField() { return *GetNativePointerField<TArray<FCompanionEventSegmentData>*>(this, "FCompanionEventData.EventSegmentArray"); }
	float& EventTotalDurationField() { return *GetNativePointerField<float*>(this, "FCompanionEventData.EventTotalDuration"); }
	long double& EventStartTimeField() { return *GetNativePointerField<long double*>(this, "FCompanionEventData.EventStartTime"); }
	int& CurrentSegmentIndexField() { return *GetNativePointerField<int*>(this, "FCompanionEventData.CurrentSegmentIndex"); }
	long double& LastSegmentStartTimeField() { return *GetNativePointerField<long double*>(this, "FCompanionEventData.LastSegmentStartTime"); }
	long double& EventEndTimeField() { return *GetNativePointerField<long double*>(this, "FCompanionEventData.EventEndTime"); }

	// Functions

	FCompanionEventData * operator=(const FCompanionEventData * __that) { return NativeCall<FCompanionEventData *, const FCompanionEventData *>(this, "FCompanionEventData.operator=", __that); }
	void InitEventData(AActor * ForActor) { NativeCall<void, AActor *>(this, "FCompanionEventData.InitEventData", ForActor); }
	bool IsValidCompanionEventData() { return NativeCall<bool>(this, "FCompanionEventData.IsValidCompanionEventData"); }
};

