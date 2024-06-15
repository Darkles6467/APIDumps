#pragma once

#include "BaseDeclarations.h"
struct FRepLayoutCmd
{
	char __padding[0x18L];
	char& TypeField() { return *GetNativePointerField<char*>(this, "FRepLayoutCmd.Type"); }
	unsigned __int16& EndCmdField() { return *GetNativePointerField<unsigned __int16*>(this, "FRepLayoutCmd.EndCmd"); }
	unsigned __int16& ElementSizeField() { return *GetNativePointerField<unsigned __int16*>(this, "FRepLayoutCmd.ElementSize"); }
	int& OffsetField() { return *GetNativePointerField<int*>(this, "FRepLayoutCmd.Offset"); }
	unsigned __int16& RelativeHandleField() { return *GetNativePointerField<unsigned __int16*>(this, "FRepLayoutCmd.RelativeHandle"); }
	unsigned __int16& ParentIndexField() { return *GetNativePointerField<unsigned __int16*>(this, "FRepLayoutCmd.ParentIndex"); }
};

