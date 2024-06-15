#pragma once

#include "BaseDeclarations.h"
struct FActorPriority
{
	char __padding[0x20L];
	int& PriorityField() { return *GetNativePointerField<int*>(this, "FActorPriority.Priority"); }
	UActorChannel * ChannelField() { return GetNativePointerField<UActorChannel *>(this, "FActorPriority.Channel"); }
	FActorDestructionInfo * DestructionInfoField() { return GetNativePointerField<FActorDestructionInfo *>(this, "FActorPriority.DestructionInfo"); }

	// Functions

};

