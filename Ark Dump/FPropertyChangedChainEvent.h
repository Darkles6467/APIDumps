#pragma once

#include "BaseDeclarations.h"
struct FPropertyChangedEvent
{
	char __padding[0x28L];
	bool& bChangesTopologyField() { return *GetNativePointerField<bool*>(this, "FPropertyChangedEvent.bChangesTopology"); }
	unsigned int& ChangeTypeField() { return *GetNativePointerField<unsigned int*>(this, "FPropertyChangedEvent.ChangeType"); }
	int& ObjectIteratorIndexField() { return *GetNativePointerField<int*>(this, "FPropertyChangedEvent.ObjectIteratorIndex"); }
};

struct FPropertyChangedChainEvent : FPropertyChangedEvent
{
	char __padding[0x8L];
};

