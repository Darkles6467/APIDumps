#pragma once

#include "BaseDeclarations.h"
struct PaintingStreamingComponent_eventClientRecieveChunk_Parms
{
	char __padding[0x18L];
	TArray<unsigned char>& BytesField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "PaintingStreamingComponent_eventClientRecieveChunk_Parms.Bytes"); }
};

