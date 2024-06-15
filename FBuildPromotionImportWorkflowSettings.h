#pragma once

#include "BaseDeclarations.h"
struct FBuildPromotionImportWorkflowSettings
{
	char __padding[0x150L];
	FEditorImportWorkflowDefinition& DiffuseField() { return *GetNativePointerField<FEditorImportWorkflowDefinition*>(this, "FBuildPromotionImportWorkflowSettings.Diffuse"); }
	FEditorImportWorkflowDefinition& NormalField() { return *GetNativePointerField<FEditorImportWorkflowDefinition*>(this, "FBuildPromotionImportWorkflowSettings.Normal"); }
	FEditorImportWorkflowDefinition& StaticMeshField() { return *GetNativePointerField<FEditorImportWorkflowDefinition*>(this, "FBuildPromotionImportWorkflowSettings.StaticMesh"); }
	FEditorImportWorkflowDefinition& ReimportStaticMeshField() { return *GetNativePointerField<FEditorImportWorkflowDefinition*>(this, "FBuildPromotionImportWorkflowSettings.ReimportStaticMesh"); }
	FEditorImportWorkflowDefinition& BlendShapeMeshField() { return *GetNativePointerField<FEditorImportWorkflowDefinition*>(this, "FBuildPromotionImportWorkflowSettings.BlendShapeMesh"); }
	FEditorImportWorkflowDefinition& MorphMeshField() { return *GetNativePointerField<FEditorImportWorkflowDefinition*>(this, "FBuildPromotionImportWorkflowSettings.MorphMesh"); }
	FEditorImportWorkflowDefinition& SkeletalMeshField() { return *GetNativePointerField<FEditorImportWorkflowDefinition*>(this, "FBuildPromotionImportWorkflowSettings.SkeletalMesh"); }
	FEditorImportWorkflowDefinition& AnimationField() { return *GetNativePointerField<FEditorImportWorkflowDefinition*>(this, "FBuildPromotionImportWorkflowSettings.Animation"); }
	FEditorImportWorkflowDefinition& SoundField() { return *GetNativePointerField<FEditorImportWorkflowDefinition*>(this, "FBuildPromotionImportWorkflowSettings.Sound"); }
	FEditorImportWorkflowDefinition& SurroundSoundField() { return *GetNativePointerField<FEditorImportWorkflowDefinition*>(this, "FBuildPromotionImportWorkflowSettings.SurroundSound"); }
	TArray<FEditorImportWorkflowDefinition>& OtherAssetsToImportField() { return *GetNativePointerField<TArray<FEditorImportWorkflowDefinition>*>(this, "FBuildPromotionImportWorkflowSettings.OtherAssetsToImport"); }

	// Functions

	FBuildPromotionImportWorkflowSettings * operator=(const FBuildPromotionImportWorkflowSettings * __that) { return NativeCall<FBuildPromotionImportWorkflowSettings *, const FBuildPromotionImportWorkflowSettings *>(this, "FBuildPromotionImportWorkflowSettings.operator=", __that); }
};

