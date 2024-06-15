#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerState_eventClientRefreshDinoOrderGroup_Parms
{
	char __padding[0x40L];
	int& groupIndexField() { return *GetNativePointerField<int*>(this, "ShooterPlayerState_eventClientRefreshDinoOrderGroup_Parms.groupIndex"); }
	FDinoOrderGroup& groupDataField() { return *GetNativePointerField<FDinoOrderGroup*>(this, "ShooterPlayerState_eventClientRefreshDinoOrderGroup_Parms.groupData"); }
	int& UseCurrentlySelectedGroupField() { return *GetNativePointerField<int*>(this, "ShooterPlayerState_eventClientRefreshDinoOrderGroup_Parms.UseCurrentlySelectedGroup"); }
};

