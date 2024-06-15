#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ATrueSkyActorParent : AActor
{

	// Functions

};

struct ATrueSkySequenceActor : ATrueSkyActorParent
{
	char __padding[0x70L];
	TArray<UTrueSkySequenceAsset *>& ActiveSequencesField() { return *GetNativePointerField<TArray<UTrueSkySequenceAsset *>*>(this, "ATrueSkySequenceActor.ActiveSequences"); }
	TArray<float>& BlendWeightsField() { return *GetNativePointerField<TArray<float>*>(this, "ATrueSkySequenceActor.BlendWeights"); }
	float& BrightnessField() { return *GetNativePointerField<float*>(this, "ATrueSkySequenceActor.Brightness"); }
	float& MetresPerUnitField() { return *GetNativePointerField<float*>(this, "ATrueSkySequenceActor.MetresPerUnit"); }
	float& MinSimpleCloudShadowingField() { return *GetNativePointerField<float*>(this, "ATrueSkySequenceActor.MinSimpleCloudShadowing"); }
	float& MaxSimpleCloudShadowingField() { return *GetNativePointerField<float*>(this, "ATrueSkySequenceActor.MaxSimpleCloudShadowing"); }
	float& MinSimpleCloudShadowingDistanceField() { return *GetNativePointerField<float*>(this, "ATrueSkySequenceActor.MinSimpleCloudShadowingDistance"); }
	float& MaxSimpleCloudShadowingDistanceField() { return *GetNativePointerField<float*>(this, "ATrueSkySequenceActor.MaxSimpleCloudShadowingDistance"); }
	float& SimpleCloudShadowSharpnessField() { return *GetNativePointerField<float*>(this, "ATrueSkySequenceActor.SimpleCloudShadowSharpness"); }
	float& TimeField() { return *GetNativePointerField<float*>(this, "ATrueSkySequenceActor.Time"); }
	bool& VisibleField() { return *GetNativePointerField<bool*>(this, "ATrueSkySequenceActor.Visible"); }
	UTrueSkyComponent * trueSkyComponentField() { return GetNativePointerField<UTrueSkyComponent *>(this, "ATrueSkySequenceActor.trueSkyComponent"); }

	// Functions

	float CloudLineTest(int queryId, FVector StartPos, FVector EndPos) { return NativeCall<float, int, FVector, FVector>(this, "ATrueSkySequenceActor.CloudLineTest", queryId, StartPos, EndPos); }
	float CloudPointTest(int queryId, FVector pos) { return NativeCall<float, int, FVector>(this, "ATrueSkySequenceActor.CloudPointTest", queryId, pos); }
	void Destroyed() { NativeCall<void>(this, "ATrueSkySequenceActor.Destroyed"); }
	void ForceUpdate() { NativeCall<void>(this, "ATrueSkySequenceActor.ForceUpdate"); }
	float GetFloat(FString name) { return NativeCall<float, FString>(this, "ATrueSkySequenceActor.GetFloat", name); }
	int GetInt(FString name) { return NativeCall<int, FString>(this, "ATrueSkySequenceActor.GetInt", name); }
	float GetKeyframeFloat(int keyframeUid, FString name) { return NativeCall<float, int, FString>(this, "ATrueSkySequenceActor.GetKeyframeFloat", keyframeUid, name); }
	int GetKeyframeInt(int keyframeUid, FString name) { return NativeCall<int, int, FString>(this, "ATrueSkySequenceActor.GetKeyframeInt", keyframeUid, name); }
	int GetNextModifiableCloudKeyframe(int layer) { return NativeCall<int, int>(this, "ATrueSkySequenceActor.GetNextModifiableCloudKeyframe", layer); }
	int GetNextModifiableSkyKeyframe() { return NativeCall<int>(this, "ATrueSkySequenceActor.GetNextModifiableSkyKeyframe"); }
	FLinearColor * GetSunColor(FLinearColor * result) { return NativeCall<FLinearColor *, FLinearColor *>(this, "ATrueSkySequenceActor.GetSunColor", result); }
	FRotator * GetSunRotation(FRotator * result) { return NativeCall<FRotator *, FRotator *>(this, "ATrueSkySequenceActor.GetSunRotation", result); }
	void PostInitProperties() { NativeCall<void>(this, "ATrueSkySequenceActor.PostInitProperties"); }
	void PostInitializeComponents() { NativeCall<void>(this, "ATrueSkySequenceActor.PostInitializeComponents"); }
	void PostLoad() { NativeCall<void>(this, "ATrueSkySequenceActor.PostLoad"); }
	void SetFloat(FString name, float value) { NativeCall<void, FString, float>(this, "ATrueSkySequenceActor.SetFloat", name, value); }
	void SetInt(FString name, int value) { NativeCall<void, FString, int>(this, "ATrueSkySequenceActor.SetInt", name, value); }
	void SetKeyframeFloat(int keyframeUid, FString name, float value) { NativeCall<void, int, FString, float>(this, "ATrueSkySequenceActor.SetKeyframeFloat", keyframeUid, name, value); }
	void SetKeyframeInt(int keyframeUid, FString name, int value) { NativeCall<void, int, FString, int>(this, "ATrueSkySequenceActor.SetKeyframeInt", keyframeUid, name, value); }
	void SetPointLight(APointLight * source) { NativeCall<void, APointLight *>(this, "ATrueSkySequenceActor.SetPointLight", source); }
	void SetPointLightSource(int id, FLinearColor c, float Intensity, FVector pos, float min_radius, float max_radius) { NativeCall<void, int, FLinearColor, float, FVector, float, float>(this, "ATrueSkySequenceActor.SetPointLightSource", id, c, Intensity, pos, min_radius, max_radius); }
	void SetTime(float value) { NativeCall<void, float>(this, "ATrueSkySequenceActor.SetTime", value); }
	void TransferProperties() { NativeCall<void>(this, "ATrueSkySequenceActor.TransferProperties"); }
};

