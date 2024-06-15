#pragma once

#include "BaseDeclarations.h"
struct FBoxEdge
{
	char __padding[0x4L];
	unsigned __int16& FirstEdgeIndexField() { return *GetNativePointerField<unsigned __int16*>(this, "FBoxEdge.FirstEdgeIndex"); }
	unsigned __int16& SecondEdgeIndexField() { return *GetNativePointerField<unsigned __int16*>(this, "FBoxEdge.SecondEdgeIndex"); }
};

