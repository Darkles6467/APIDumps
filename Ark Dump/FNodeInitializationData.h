#pragma once

#include "BaseDeclarations.h"
struct FNodeInitializationData
{
	char __padding[0x18L];
	unsigned __int16& ExecutionIndexField() { return *GetNativePointerField<unsigned __int16*>(this, "FNodeInitializationData.ExecutionIndex"); }
	unsigned __int16& DataSizeField() { return *GetNativePointerField<unsigned __int16*>(this, "FNodeInitializationData.DataSize"); }
	unsigned __int16& SpecialDataSizeField() { return *GetNativePointerField<unsigned __int16*>(this, "FNodeInitializationData.SpecialDataSize"); }
	char& TreeDepthField() { return *GetNativePointerField<char*>(this, "FNodeInitializationData.TreeDepth"); }
};

