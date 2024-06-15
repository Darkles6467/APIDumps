#pragma once

#include "BaseDeclarations.h"
struct FResourceTableEntry
{
	char __padding[0x18L];
	FString& UniformBufferNameField() { return *GetNativePointerField<FString*>(this, "FResourceTableEntry.UniformBufferName"); }
	unsigned __int16& TypeField() { return *GetNativePointerField<unsigned __int16*>(this, "FResourceTableEntry.Type"); }
	unsigned __int16& ResourceIndexField() { return *GetNativePointerField<unsigned __int16*>(this, "FResourceTableEntry.ResourceIndex"); }
};

