#pragma once

#include "BaseDeclarations.h"
struct FBuildPromotionOpenAssetSettings
{
	char __padding[0x60L];
	FFilePath& BlueprintAssetField() { return *GetNativePointerField<FFilePath*>(this, "FBuildPromotionOpenAssetSettings.BlueprintAsset"); }
	FFilePath& MaterialAssetField() { return *GetNativePointerField<FFilePath*>(this, "FBuildPromotionOpenAssetSettings.MaterialAsset"); }
	FFilePath& ParticleSystemAssetField() { return *GetNativePointerField<FFilePath*>(this, "FBuildPromotionOpenAssetSettings.ParticleSystemAsset"); }
	FFilePath& SkeletalMeshAssetField() { return *GetNativePointerField<FFilePath*>(this, "FBuildPromotionOpenAssetSettings.SkeletalMeshAsset"); }
	FFilePath& StaticMeshAssetField() { return *GetNativePointerField<FFilePath*>(this, "FBuildPromotionOpenAssetSettings.StaticMeshAsset"); }
	FFilePath& TextureAssetField() { return *GetNativePointerField<FFilePath*>(this, "FBuildPromotionOpenAssetSettings.TextureAsset"); }

	// Functions

};

