#pragma once

#include "BaseDeclarations.h"
struct FFastArraySerializer
{
	char __padding[0x58L];
	int& IDCounterField() { return *GetNativePointerField<int*>(this, "FFastArraySerializer.IDCounter"); }
	int& ArrayReplicationKeyField() { return *GetNativePointerField<int*>(this, "FFastArraySerializer.ArrayReplicationKey"); }

	// Functions

};

