#pragma once

#include "BaseDeclarations.h"
struct FRelevancePacketAnyThreadTask
{
	char __padding[0x10L];
	FRelevancePacket * PacketField() { return GetNativePointerField<FRelevancePacket *>(this, "FRelevancePacketAnyThreadTask.Packet"); }
	ENamedThreads::Type& ThreadToUseField() { return *GetNativePointerField<ENamedThreads::Type*>(this, "FRelevancePacketAnyThreadTask.ThreadToUse"); }
};

