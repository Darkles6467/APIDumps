#pragma once

#include "BaseDeclarations.h"
struct FCompanionEventSegmentData
{
	char __padding[0xd8L];
	float& SegmentDurationField() { return *GetNativePointerField<float*>(this, "FCompanionEventSegmentData.SegmentDuration"); }
	FCompanionReactionData& SegmentCompanionReactionField() { return *GetNativePointerField<FCompanionReactionData*>(this, "FCompanionEventSegmentData.SegmentCompanionReaction"); }
	FVector& MoveCompanionToLocationOffsetField() { return *GetNativePointerField<FVector*>(this, "FCompanionEventSegmentData.MoveCompanionToLocationOffset"); }
	FVector& MakeCompanionLookAtLocationField() { return *GetNativePointerField<FVector*>(this, "FCompanionEventSegmentData.MakeCompanionLookAtLocation"); }
	float& CompanionLocationInterpSpeedField() { return *GetNativePointerField<float*>(this, "FCompanionEventSegmentData.CompanionLocationInterpSpeed"); }
	float& CompanionRotationInterpSpeedField() { return *GetNativePointerField<float*>(this, "FCompanionEventSegmentData.CompanionRotationInterpSpeed"); }

	// Functions

	FCompanionEventSegmentData * operator=(const FCompanionEventSegmentData * __that) { return NativeCall<FCompanionEventSegmentData *, const FCompanionEventSegmentData *>(this, "FCompanionEventSegmentData.operator=", __that); }
};

