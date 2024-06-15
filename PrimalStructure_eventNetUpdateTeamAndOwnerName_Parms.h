#pragma once

#include "BaseDeclarations.h"
struct PrimalStructure_eventNetUpdateTeamAndOwnerName_Parms
{
	char __padding[0x18L];
	int& NewTeamField() { return *GetNativePointerField<int*>(this, "PrimalStructure_eventNetUpdateTeamAndOwnerName_Parms.NewTeam"); }
	FString& NewOwnerNameField() { return *GetNativePointerField<FString*>(this, "PrimalStructure_eventNetUpdateTeamAndOwnerName_Parms.NewOwnerName"); }
};

