#pragma once

#include "BaseDeclarations.h"
struct INetDeltaBaseState
{
	char __padding[0x8L];
};

struct FNetFastTArrayBaseState : INetDeltaBaseState
{
	char __padding[0x58L];
	int& ArrayReplicationKeyField() { return *GetNativePointerField<int*>(this, "FNetFastTArrayBaseState.ArrayReplicationKey"); }
};

