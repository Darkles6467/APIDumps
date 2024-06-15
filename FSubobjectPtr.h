#pragma once

#include "BaseDeclarations.h"
struct FSubobjectPtr
{
	enum EInvalidPtr
	{
		InvalidPtrValue = 0x3,
	};

	char __padding[0x8L];

	// Functions

	void Set(UObject * InObject) { NativeCall<void, UObject *>(this, "FSubobjectPtr.Set", InObject); }
};

