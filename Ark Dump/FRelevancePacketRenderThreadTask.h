#pragma once

#include "BaseDeclarations.h"
struct FRelevancePacketRenderThreadTask
{
	char __padding[0x8L];
	FRelevancePacket * PacketField() { return GetNativePointerField<FRelevancePacket *>(this, "FRelevancePacketRenderThreadTask.Packet"); }
};

