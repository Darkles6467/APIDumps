#pragma once

#include "BaseDeclarations.h"
struct FBuildPromotionBlueprintSettings
{
	char __padding[0x20L];
	FFilePath& FirstMeshPathField() { return *GetNativePointerField<FFilePath*>(this, "FBuildPromotionBlueprintSettings.FirstMeshPath"); }
	FFilePath& SecondMeshPathField() { return *GetNativePointerField<FFilePath*>(this, "FBuildPromotionBlueprintSettings.SecondMeshPath"); }

	// Functions

};

