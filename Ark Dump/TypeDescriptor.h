#pragma once

#include "BaseDeclarations.h"
struct TypeDescriptor
{
	char __padding[0x10L];
	None& pVFTableField() { return *GetNativePointerField<None*>(this, "TypeDescriptor.pVFTable"); }
	None& spareField() { return *GetNativePointerField<None*>(this, "TypeDescriptor.spare"); }
	None& nameField() { return *GetNativePointerField<None*>(this, "TypeDescriptor.name"); }
};

