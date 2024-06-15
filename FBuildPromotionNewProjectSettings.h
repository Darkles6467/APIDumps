#pragma once

#include "BaseDeclarations.h"
struct FBuildPromotionNewProjectSettings
{
	char __padding[0x20L];
	FDirectoryPath& NewProjectFolderOverrideField() { return *GetNativePointerField<FDirectoryPath*>(this, "FBuildPromotionNewProjectSettings.NewProjectFolderOverride"); }
	FString& NewProjectNameOverrideField() { return *GetNativePointerField<FString*>(this, "FBuildPromotionNewProjectSettings.NewProjectNameOverride"); }

	// Functions

};

