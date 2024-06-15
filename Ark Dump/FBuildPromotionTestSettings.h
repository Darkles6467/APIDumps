#pragma once

#include "BaseDeclarations.h"
struct FBuildPromotionTestSettings
{
	char __padding[0x210L];
	FFilePath& DefaultStaticMeshAssetField() { return *GetNativePointerField<FFilePath*>(this, "FBuildPromotionTestSettings.DefaultStaticMeshAsset"); }
	FBuildPromotionImportWorkflowSettings& ImportWorkflowField() { return *GetNativePointerField<FBuildPromotionImportWorkflowSettings*>(this, "FBuildPromotionTestSettings.ImportWorkflow"); }
	FBuildPromotionOpenAssetSettings& OpenAssetsField() { return *GetNativePointerField<FBuildPromotionOpenAssetSettings*>(this, "FBuildPromotionTestSettings.OpenAssets"); }
	FBuildPromotionBlueprintSettings& BlueprintSettingsField() { return *GetNativePointerField<FBuildPromotionBlueprintSettings*>(this, "FBuildPromotionTestSettings.BlueprintSettings"); }
	FBuildPromotionNewProjectSettings& NewProjectSettingsField() { return *GetNativePointerField<FBuildPromotionNewProjectSettings*>(this, "FBuildPromotionTestSettings.NewProjectSettings"); }
	FFilePath& SourceControlMaterialField() { return *GetNativePointerField<FFilePath*>(this, "FBuildPromotionTestSettings.SourceControlMaterial"); }

	// Functions

	FBuildPromotionTestSettings * operator=(const FBuildPromotionTestSettings * __that) { return NativeCall<FBuildPromotionTestSettings *, const FBuildPromotionTestSettings *>(this, "FBuildPromotionTestSettings.operator=", __that); }
};

