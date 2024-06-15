#pragma once

#include "BaseDeclarations.h"
struct PlayerController_eventClientUpdateLevelStreamingStatus_Parms
{
	char __padding[0x10L];
	FName& PackageNameField() { return *GetNativePointerField<FName*>(this, "PlayerController_eventClientUpdateLevelStreamingStatus_Parms.PackageName"); }
	bool& bNewShouldBeLoadedField() { return *GetNativePointerField<bool*>(this, "PlayerController_eventClientUpdateLevelStreamingStatus_Parms.bNewShouldBeLoaded"); }
	bool& bNewShouldBeVisibleField() { return *GetNativePointerField<bool*>(this, "PlayerController_eventClientUpdateLevelStreamingStatus_Parms.bNewShouldBeVisible"); }
	bool& bNewShouldBlockOnLoadField() { return *GetNativePointerField<bool*>(this, "PlayerController_eventClientUpdateLevelStreamingStatus_Parms.bNewShouldBlockOnLoad"); }
	int& LODIndexField() { return *GetNativePointerField<int*>(this, "PlayerController_eventClientUpdateLevelStreamingStatus_Parms.LODIndex"); }
};

