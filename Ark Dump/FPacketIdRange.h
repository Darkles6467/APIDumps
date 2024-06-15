#pragma once

#include "BaseDeclarations.h"
struct FPacketIdRange
{
	char __padding[0x8L];
	int& FirstField() { return *GetNativePointerField<int*>(this, "FPacketIdRange.First"); }
	int& LastField() { return *GetNativePointerField<int*>(this, "FPacketIdRange.Last"); }
};

