#pragma once

#include "BaseDeclarations.h"
struct FReplicatedActorProperty
{
	char __padding[0x10L];
	int& OffsetField() { return *GetNativePointerField<int*>(this, "FReplicatedActorProperty.Offset"); }
};

