#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"

struct UField : UObject
{
	char __padding[0x8L];

	// Functions

	void AddCppProperty(UProperty * Property) { NativeCall<void, UProperty *>(this, "UField.AddCppProperty", Property); }
	void PostLoad() { NativeCall<void>(this, "UField.PostLoad"); }
};

