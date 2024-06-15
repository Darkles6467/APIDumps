#pragma once

#include "BaseDeclarations.h"
struct MissionType_eventBPOnReceivedMissionPathFindingResult_Parms
{
	char __padding[0x18L];
	int& IdField() { return *GetNativePointerField<int*>(this, "MissionType_eventBPOnReceivedMissionPathFindingResult_Parms.Id"); }
	UNavigationPath * PathField() { return GetNativePointerField<UNavigationPath *>(this, "MissionType_eventBPOnReceivedMissionPathFindingResult_Parms.Path"); }
	char& ResultField() { return *GetNativePointerField<char*>(this, "MissionType_eventBPOnReceivedMissionPathFindingResult_Parms.Result"); }
};

