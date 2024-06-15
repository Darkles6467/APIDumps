#pragma once

#include "BaseDeclarations.h"
#include "UNewMissionModuleBase.h"

struct IMissionModuleInterface
{
	char __padding[0x8L];

	// Functions

	static UNewMissionModuleBase * Execute_RunMissionModule(UObject * O, TSubclassOf<UNewMissionModuleBase> ModuleClass) { return NativeCall<UNewMissionModuleBase *, UObject *, TSubclassOf<UNewMissionModuleBase>>(nullptr, "IMissionModuleInterface.Execute_RunMissionModule", O, ModuleClass); }
};

