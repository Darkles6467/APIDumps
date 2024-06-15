#pragma once

#include "BaseDeclarations.h"
struct PlayerController_eventNetSpawnActorAtLocation_Parms
{
	char __padding[0x38L];
	FVector_NetQuantize& AtLocationField() { return *GetNativePointerField<FVector_NetQuantize*>(this, "PlayerController_eventNetSpawnActorAtLocation_Parms.AtLocation"); }
	FRotator_NetQuantize& AtRotationField() { return *GetNativePointerField<FRotator_NetQuantize*>(this, "PlayerController_eventNetSpawnActorAtLocation_Parms.AtRotation"); }
	int& dataIndexField() { return *GetNativePointerField<int*>(this, "PlayerController_eventNetSpawnActorAtLocation_Parms.dataIndex"); }
	FName& attachSocketNameField() { return *GetNativePointerField<FName*>(this, "PlayerController_eventNetSpawnActorAtLocation_Parms.attachSocketName"); }
};

