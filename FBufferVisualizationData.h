#pragma once

#include "BaseDeclarations.h"
struct FBufferVisualizationData
{
	char __padding[0x98L];
	FString& CurrentOverviewMaterialNamesField() { return *GetNativePointerField<FString*>(this, "FBufferVisualizationData.CurrentOverviewMaterialNames"); }
	TArray<UMaterial *>& OverviewMaterialsField() { return *GetNativePointerField<TArray<UMaterial *>*>(this, "FBufferVisualizationData.OverviewMaterials"); }
	FString& ConsoleDocumentationVisualizationModeField() { return *GetNativePointerField<FString*>(this, "FBufferVisualizationData.ConsoleDocumentationVisualizationMode"); }
	FString& ConsoleDocumentationOverviewTargetsField() { return *GetNativePointerField<FString*>(this, "FBufferVisualizationData.ConsoleDocumentationOverviewTargets"); }
	bool& bIsInitializedField() { return *GetNativePointerField<bool*>(this, "FBufferVisualizationData.bIsInitialized"); }

	// Functions

	void Record() { NativeCall<void>(this, "FBufferVisualizationData.Record"); }
	void ConfigureConsoleCommand() { NativeCall<void>(this, "FBufferVisualizationData.ConfigureConsoleCommand"); }
	UMaterial * GetMaterial(FName InMaterialName) { return NativeCall<UMaterial *, FName>(this, "FBufferVisualizationData.GetMaterial", InMaterialName); }
	void Initialize() { NativeCall<void>(this, "FBufferVisualizationData.Initialize"); }
	bool IsDifferentToCurrentOverviewMaterialNames(const FString * InNameList) { return NativeCall<bool, const FString *>(this, "FBufferVisualizationData.IsDifferentToCurrentOverviewMaterialNames", InNameList); }
	void SetCurrentOverviewMaterialNames(const FString * InNameList) { NativeCall<void, const FString *>(this, "FBufferVisualizationData.SetCurrentOverviewMaterialNames", InNameList); }
};

