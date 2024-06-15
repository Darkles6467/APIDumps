#pragma once

#include "BaseDeclarations.h"
struct FPointOfInterestCompanionBehavior
{
	char __padding[0x2b0L];
	float& CompanionFocusRangeField() { return *GetNativePointerField<float*>(this, "FPointOfInterestCompanionBehavior.CompanionFocusRange"); }
	float& CompanionOrbitWithinRangeField() { return *GetNativePointerField<float*>(this, "FPointOfInterestCompanionBehavior.CompanionOrbitWithinRange"); }
	float& CompanionOrbitRadiusField() { return *GetNativePointerField<float*>(this, "FPointOfInterestCompanionBehavior.CompanionOrbitRadius"); }
	FVector& OrbitOriginOffsetField() { return *GetNativePointerField<FVector*>(this, "FPointOfInterestCompanionBehavior.OrbitOriginOffset"); }
	float& CompanionReachedOrbitWithinDistOverrideField() { return *GetNativePointerField<float*>(this, "FPointOfInterestCompanionBehavior.CompanionReachedOrbitWithinDistOverride"); }
	float& InterpToOrbitSpeedOverrideField() { return *GetNativePointerField<float*>(this, "FPointOfInterestCompanionBehavior.InterpToOrbitSpeedOverride"); }
	float& InterpAroundOrbitSpeedOverrideField() { return *GetNativePointerField<float*>(this, "FPointOfInterestCompanionBehavior.InterpAroundOrbitSpeedOverride"); }
	FCompanionReactionData& CompanionReaction_WithinRangeField() { return *GetNativePointerField<FCompanionReactionData*>(this, "FPointOfInterestCompanionBehavior.CompanionReaction_WithinRange"); }
	FCompanionReactionData& CompanionReaction_StartOrbitField() { return *GetNativePointerField<FCompanionReactionData*>(this, "FPointOfInterestCompanionBehavior.CompanionReaction_StartOrbit"); }
	FCompanionReactionData& CompanionReaction_ReachedOrbitField() { return *GetNativePointerField<FCompanionReactionData*>(this, "FPointOfInterestCompanionBehavior.CompanionReaction_ReachedOrbit"); }
	FCompanionReactionData& CompanionReaction_PointViewedField() { return *GetNativePointerField<FCompanionReactionData*>(this, "FPointOfInterestCompanionBehavior.CompanionReaction_PointViewed"); }

	// Functions

	FPointOfInterestCompanionBehavior * operator=(const FPointOfInterestCompanionBehavior * __that) { return NativeCall<FPointOfInterestCompanionBehavior *, const FPointOfInterestCompanionBehavior *>(this, "FPointOfInterestCompanionBehavior.operator=", __that); }
};

