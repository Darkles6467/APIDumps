#pragma once

#include "BaseDeclarations.h"
struct FAITeamStimulusEvent
{
	char __padding[0x38L];
	FVector& LastKnowLocationField() { return *GetNativePointerField<FVector*>(this, "FAITeamStimulusEvent.LastKnowLocation"); }
	FVector& BroadcastLocationField() { return *GetNativePointerField<FVector*>(this, "FAITeamStimulusEvent.BroadcastLocation"); }
	float& RangeSqField() { return *GetNativePointerField<float*>(this, "FAITeamStimulusEvent.RangeSq"); }
	float& InformationAgeField() { return *GetNativePointerField<float*>(this, "FAITeamStimulusEvent.InformationAge"); }
	FGenericTeamId& TeamIdentifierField() { return *GetNativePointerField<FGenericTeamId*>(this, "FAITeamStimulusEvent.TeamIdentifier"); }

	// Functions

};

