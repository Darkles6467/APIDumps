#pragma once

#include "BaseDeclarations.h"
struct FBattlEyePacket
{
	char __padding[0x10L];
	void * PacketDataField() { return GetNativePointerField<void *>(this, "FBattlEyePacket.PacketData"); }
	unsigned __int64& PacketDataLengthField() { return *GetNativePointerField<unsigned __int64*>(this, "FBattlEyePacket.PacketDataLength"); }
};

