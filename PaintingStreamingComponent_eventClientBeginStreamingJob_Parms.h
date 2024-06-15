#pragma once

#include "BaseDeclarations.h"
struct PaintingStreamingComponent_eventClientBeginStreamingJob_Parms
{
	char __padding[0x10L];
	int& RevisionField() { return *GetNativePointerField<int*>(this, "PaintingStreamingComponent_eventClientBeginStreamingJob_Parms.Revision"); }
};

