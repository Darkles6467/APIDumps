#pragma once

#include "BaseDeclarations.h"
struct TUBOPoolBuffer
{
	char __padding[0x18L];
	unsigned int& ResourceField() { return *GetNativePointerField<unsigned int*>(this, "TUBOPoolBuffer.Resource"); }
	unsigned int& ConsumedSpaceField() { return *GetNativePointerField<unsigned int*>(this, "TUBOPoolBuffer.ConsumedSpace"); }
	unsigned int& AllocatedSpaceField() { return *GetNativePointerField<unsigned int*>(this, "TUBOPoolBuffer.AllocatedSpace"); }
	char * PointerField() { return GetNativePointerField<char *>(this, "TUBOPoolBuffer.Pointer"); }
};

