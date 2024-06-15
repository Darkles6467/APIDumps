#pragma once

#include "BaseDeclarations.h"
struct FFastArraySerializerItem
{
	char __padding[0x8L];
	int& ReplicationIDField() { return *GetNativePointerField<int*>(this, "FFastArraySerializerItem.ReplicationID"); }
	int& ReplicationKeyField() { return *GetNativePointerField<int*>(this, "FFastArraySerializerItem.ReplicationKey"); }

	// Functions

};

