#pragma once

#include "BaseDeclarations.h"
struct FPropertyRetirement
{
	char __padding[0x28L];
	FPropertyRetirement * NextField() { return GetNativePointerField<FPropertyRetirement *>(this, "FPropertyRetirement.Next"); }
	FPacketIdRange& OutPacketIdRangeField() { return *GetNativePointerField<FPacketIdRange*>(this, "FPropertyRetirement.OutPacketIdRange"); }
};

