#pragma once

#include "BaseDeclarations.h"
struct FStreamOutElement
{
	char __padding[0x18L];
	unsigned int& StreamField() { return *GetNativePointerField<unsigned int*>(this, "FStreamOutElement.Stream"); }
	const char * SemanticNameField() { return GetNativePointerField<const char *>(this, "FStreamOutElement.SemanticName"); }
	unsigned int& SemanticIndexField() { return *GetNativePointerField<unsigned int*>(this, "FStreamOutElement.SemanticIndex"); }
	char& StartComponentField() { return *GetNativePointerField<char*>(this, "FStreamOutElement.StartComponent"); }
	char& ComponentCountField() { return *GetNativePointerField<char*>(this, "FStreamOutElement.ComponentCount"); }
	char& OutputSlotField() { return *GetNativePointerField<char*>(this, "FStreamOutElement.OutputSlot"); }
};

