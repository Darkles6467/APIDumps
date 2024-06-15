#pragma once

#include "BaseDeclarations.h"
struct FRHICommandListIterator
{
	char __padding[0x10L];
	FRHICommandBase * CmdPtrField() { return GetNativePointerField<FRHICommandBase *>(this, "FRHICommandListIterator.CmdPtr"); }
	unsigned int& NumCommandsField() { return *GetNativePointerField<unsigned int*>(this, "FRHICommandListIterator.NumCommands"); }
	unsigned int& CmdListNumCommandsField() { return *GetNativePointerField<unsigned int*>(this, "FRHICommandListIterator.CmdListNumCommands"); }
};

