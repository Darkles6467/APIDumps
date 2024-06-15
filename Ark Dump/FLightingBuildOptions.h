#pragma once

#include "BaseDeclarations.h"
struct FLightingBuildOptions
{
	char __padding[0x20L];
	bool& bUseErrorColoringField() { return *GetNativePointerField<bool*>(this, "FLightingBuildOptions.bUseErrorColoring"); }
	bool& bDumpBinaryResultsField() { return *GetNativePointerField<bool*>(this, "FLightingBuildOptions.bDumpBinaryResults"); }
	bool& bOnlyBuildSelectedField() { return *GetNativePointerField<bool*>(this, "FLightingBuildOptions.bOnlyBuildSelected"); }
	bool& bOnlyBuildCurrentLevelField() { return *GetNativePointerField<bool*>(this, "FLightingBuildOptions.bOnlyBuildCurrentLevel"); }
	bool& bOnlyBuildSelectedLevelsField() { return *GetNativePointerField<bool*>(this, "FLightingBuildOptions.bOnlyBuildSelectedLevels"); }
	bool& bOnlyBuildVisibilityField() { return *GetNativePointerField<bool*>(this, "FLightingBuildOptions.bOnlyBuildVisibility"); }
	bool& bShowLightingBuildInfoField() { return *GetNativePointerField<bool*>(this, "FLightingBuildOptions.bShowLightingBuildInfo"); }
	ELightingBuildQuality& QualityLevelField() { return *GetNativePointerField<ELightingBuildQuality*>(this, "FLightingBuildOptions.QualityLevel"); }
	int& NumUnusedLocalCoresField() { return *GetNativePointerField<int*>(this, "FLightingBuildOptions.NumUnusedLocalCores"); }
	TArray<ULevel *>& SelectedLevelsField() { return *GetNativePointerField<TArray<ULevel *>*>(this, "FLightingBuildOptions.SelectedLevels"); }
};

