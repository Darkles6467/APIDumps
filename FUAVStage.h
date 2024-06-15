#pragma once

#include "BaseDeclarations.h"
struct FUAVStage
{
	char __padding[0x8L];
	unsigned int& FormatField() { return *GetNativePointerField<unsigned int*>(this, "FUAVStage.Format"); }
	unsigned int& ResourceField() { return *GetNativePointerField<unsigned int*>(this, "FUAVStage.Resource"); }
};

