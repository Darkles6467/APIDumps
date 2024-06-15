#pragma once

#include "BaseDeclarations.h"
struct ActorCrossThreadProperties
{
	char __padding[0x70L];
	bool& DestroyedField() { return *GetNativePointerField<bool*>(this, "ActorCrossThreadProperties.Destroyed"); }
	bool& VisibleField() { return *GetNativePointerField<bool*>(this, "ActorCrossThreadProperties.Visible"); }
	float& MetresPerUnitField() { return *GetNativePointerField<float*>(this, "ActorCrossThreadProperties.MetresPerUnit"); }
	float& BrightnessField() { return *GetNativePointerField<float*>(this, "ActorCrossThreadProperties.Brightness"); }
	float& MinSimpleCloudShadowingField() { return *GetNativePointerField<float*>(this, "ActorCrossThreadProperties.MinSimpleCloudShadowing"); }
	float& MaxSimpleCloudShadowingField() { return *GetNativePointerField<float*>(this, "ActorCrossThreadProperties.MaxSimpleCloudShadowing"); }
	float& MinSimpleCloudShadowingDistanceField() { return *GetNativePointerField<float*>(this, "ActorCrossThreadProperties.MinSimpleCloudShadowingDistance"); }
	float& MaxSimpleCloudShadowingDistanceField() { return *GetNativePointerField<float*>(this, "ActorCrossThreadProperties.MaxSimpleCloudShadowingDistance"); }
	float& SimpleCloudShadowSharpnessField() { return *GetNativePointerField<float*>(this, "ActorCrossThreadProperties.SimpleCloudShadowSharpness"); }
	TArray<UTrueSkySequenceAsset *>& activeSequencesField() { return *GetNativePointerField<TArray<UTrueSkySequenceAsset *>*>(this, "ActorCrossThreadProperties.activeSequences"); }
	TArray<float>& BlendWeightsField() { return *GetNativePointerField<TArray<float>*>(this, "ActorCrossThreadProperties.BlendWeights"); }
	void * SequenceActorField() { return GetNativePointerField<void *>(this, "ActorCrossThreadProperties.SequenceActor"); }
	float& TimeField() { return *GetNativePointerField<float*>(this, "ActorCrossThreadProperties.Time"); }
};

