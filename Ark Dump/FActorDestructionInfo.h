#pragma once

#include "BaseDeclarations.h"
struct FActorDestructionInfo
{
	char __padding[0x30L];
	FVector& DestroyedPositionField() { return *GetNativePointerField<FVector*>(this, "FActorDestructionInfo.DestroyedPosition"); }
	FNetworkGUID& NetGUIDField() { return *GetNativePointerField<FNetworkGUID*>(this, "FActorDestructionInfo.NetGUID"); }
	FString& PathNameField() { return *GetNativePointerField<FString*>(this, "FActorDestructionInfo.PathName"); }
	FName& StreamingLevelNameField() { return *GetNativePointerField<FName*>(this, "FActorDestructionInfo.StreamingLevelName"); }
};

