#pragma once

#include "BaseDeclarations.h"
struct MissionModuleInterface_eventRunMissionModule_Parms
{
	char __padding[0x10L];
	TSubclassOf<UNewMissionModuleBase>& ModuleClassField() { return *GetNativePointerField<TSubclassOf<UNewMissionModuleBase>*>(this, "MissionModuleInterface_eventRunMissionModule_Parms.ModuleClass"); }
	UNewMissionModuleBase * ReturnValueField() { return GetNativePointerField<UNewMissionModuleBase *>(this, "MissionModuleInterface_eventRunMissionModule_Parms.ReturnValue"); }
};

