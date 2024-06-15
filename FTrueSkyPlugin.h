#pragma once

#include "BaseDeclarations.h"
#include "IModuleInterface.h"

struct ITrueSkyPlugin : IModuleInterface
{
};

struct FTrueSkyPlugin : ITrueSkyPlugin
{
	char __padding[0x1a0L];
	wchar_t * PathEnvField() { return GetNativePointerField<wchar_t *>(this, "FTrueSkyPlugin.PathEnv"); }
	bool& RenderingEnabledField() { return *GetNativePointerField<bool*>(this, "FTrueSkyPlugin.RenderingEnabled"); }
	bool& RendererValidField() { return *GetNativePointerField<bool*>(this, "FTrueSkyPlugin.RendererValid"); }
	bool& RendererInitializedField() { return *GetNativePointerField<bool*>(this, "FTrueSkyPlugin.RendererInitialized"); }
	float& CachedDeltaSecondsField() { return *GetNativePointerField<float*>(this, "FTrueSkyPlugin.CachedDeltaSeconds"); }
	float& AutoSaveTimerField() { return *GetNativePointerField<float*>(this, "FTrueSkyPlugin.AutoSaveTimer"); }
	int& CurrentSkyNumElevationsField() { return *GetNativePointerField<int*>(this, "FTrueSkyPlugin.CurrentSkyNumElevations"); }
	int& CurrentSkyNumDistancesField() { return *GetNativePointerField<int*>(this, "FTrueSkyPlugin.CurrentSkyNumDistances"); }
	int& CurrentCloudsGridWidthField() { return *GetNativePointerField<int*>(this, "FTrueSkyPlugin.CurrentCloudsGridWidth"); }
	int& CurrentCloudsNoiseResolutionField() { return *GetNativePointerField<int*>(this, "FTrueSkyPlugin.CurrentCloudsNoiseResolution"); }
	int& CurrentCloudsEdgeNoiseTextureSizeField() { return *GetNativePointerField<int*>(this, "FTrueSkyPlugin.CurrentCloudsEdgeNoiseTextureSize"); }
	bool& actorPropertiesChangedField() { return *GetNativePointerField<bool*>(this, "FTrueSkyPlugin.actorPropertiesChanged"); }
	bool& haveEditorField() { return *GetNativePointerField<bool*>(this, "FTrueSkyPlugin.haveEditor"); }
	TArray<UTrueSkySequenceAsset *>& sequenceInUsesField() { return *GetNativePointerField<TArray<UTrueSkySequenceAsset *>*>(this, "FTrueSkyPlugin.sequenceInUses"); }
	bool& IsDestroyedField() { return *GetNativePointerField<bool*>(this, "FTrueSkyPlugin.IsDestroyed"); }

	// Functions

	float CloudLineTest(int queryId, FVector StartPos, FVector EndPos) { return NativeCall<float, int, FVector, FVector>(this, "FTrueSkyPlugin.CloudLineTest", queryId, StartPos, EndPos); }
	void ForceAsset(int index, const char * text) { NativeCall<void, int, const char *>(this, "FTrueSkyPlugin.ForceAsset", index, text); }
	TArray<UTrueSkySequenceAsset *> * GetActiveSequence() { return NativeCall<TArray<UTrueSkySequenceAsset *> *>(this, "FTrueSkyPlugin.GetActiveSequence"); }
	int GetAssetIndex(UTrueSkySequenceAsset * asset) { return NativeCall<int, UTrueSkySequenceAsset *>(this, "FTrueSkyPlugin.GetAssetIndex", asset); }
	float GetCloudinessAtPosition(int queryId, FVector pos) { return NativeCall<float, int, FVector>(this, "FTrueSkyPlugin.GetCloudinessAtPosition", queryId, pos); }
	float GetKeyframeFloat(unsigned int uid, const FString * fname) { return NativeCall<float, unsigned int, const FString *>(this, "FTrueSkyPlugin.GetKeyframeFloat", uid, fname); }
	int GetKeyframeInt(unsigned int uid, const FString * fname) { return NativeCall<int, unsigned int, const FString *>(this, "FTrueSkyPlugin.GetKeyframeInt", uid, fname); }
	bool GetRenderBool(const FString * fname) { return NativeCall<bool, const FString *>(this, "FTrueSkyPlugin.GetRenderBool", fname); }
	void * GetRenderEnvironment() { return NativeCall<void *>(this, "FTrueSkyPlugin.GetRenderEnvironment"); }
	float GetRenderFloat(const FString * fname) { return NativeCall<float, const FString *>(this, "FTrueSkyPlugin.GetRenderFloat", fname); }
	int GetRenderInt(const FString * fname) { return NativeCall<int, const FString *>(this, "FTrueSkyPlugin.GetRenderInt", fname); }
	FString * GetRenderString(FString * result, const FString * fname) { return NativeCall<FString *, FString *, const FString *>(this, "FTrueSkyPlugin.GetRenderString", result, fname); }
	bool HasSequenceChanged() { return NativeCall<bool>(this, "FTrueSkyPlugin.HasSequenceChanged"); }
	bool HasValidSequence() { return NativeCall<bool>(this, "FTrueSkyPlugin.HasValidSequence"); }
	void InitPaths() { NativeCall<void>(this, "FTrueSkyPlugin.InitPaths"); }
	bool InitRenderingInterface() { return NativeCall<bool>(this, "FTrueSkyPlugin.InitRenderingInterface"); }
	void OnToggleRendering() { NativeCall<void>(this, "FTrueSkyPlugin.OnToggleRendering"); }
	void OnUIChangedSequence() { NativeCall<void>(this, "FTrueSkyPlugin.OnUIChangedSequence"); }
	void OnUIChangedTime(float t) { NativeCall<void, float>(this, "FTrueSkyPlugin.OnUIChangedTime", t); }
	void RenderFrame(FPostOpaqueRenderParameters * RenderParameters) { NativeCall<void, FPostOpaqueRenderParameters *>(this, "FTrueSkyPlugin.RenderFrame", RenderParameters); }
	void RenderOverlays(FPostOpaqueRenderParameters * RenderParameters) { NativeCall<void, FPostOpaqueRenderParameters *>(this, "FTrueSkyPlugin.RenderOverlays", RenderParameters); }
	void SequenceChanged() { NativeCall<void>(this, "FTrueSkyPlugin.SequenceChanged"); }
	void SetCloudShadowRenderTarget(FRenderTarget * t) { NativeCall<void, FRenderTarget *>(this, "FTrueSkyPlugin.SetCloudShadowRenderTarget", t); }
	void SetKeyframeFloat(unsigned int uid, const FString * fname, float value) { NativeCall<void, unsigned int, const FString *, float>(this, "FTrueSkyPlugin.SetKeyframeFloat", uid, fname, value); }
	void SetKeyframeInt(unsigned int uid, const FString * fname, int value) { NativeCall<void, unsigned int, const FString *, int>(this, "FTrueSkyPlugin.SetKeyframeInt", uid, fname, value); }
	void SetPointLight(int id, FLinearColor c, FVector pos, float min_radius, float max_radius) { NativeCall<void, int, FLinearColor, FVector, float, float>(this, "FTrueSkyPlugin.SetPointLight", id, c, pos, min_radius, max_radius); }
	void SetRenderBool(const FString * fname, bool value) { NativeCall<void, const FString *, bool>(this, "FTrueSkyPlugin.SetRenderBool", fname, value); }
	void SetRenderFloat(const FString * fname, float value) { NativeCall<void, const FString *, float>(this, "FTrueSkyPlugin.SetRenderFloat", fname, value); }
	void SetRenderInt(const FString * fname, int value) { NativeCall<void, const FString *, int>(this, "FTrueSkyPlugin.SetRenderInt", fname, value); }
	void SetRenderString(const FString * fname, const FString * value) { NativeCall<void, const FString *, const FString *>(this, "FTrueSkyPlugin.SetRenderString", fname, value); }
	void SetRenderingEnabled(bool Enabled) { NativeCall<void, bool>(this, "FTrueSkyPlugin.SetRenderingEnabled", Enabled); }
	void ShutdownModule() { NativeCall<void>(this, "FTrueSkyPlugin.ShutdownModule"); }
	void StartupModule() { NativeCall<void>(this, "FTrueSkyPlugin.StartupModule"); }
	void TriggerAction(const FString * fname) { NativeCall<void, const FString *>(this, "FTrueSkyPlugin.TriggerAction", fname); }
	void UpdateFromActor() { NativeCall<void>(this, "FTrueSkyPlugin.UpdateFromActor"); }
};

