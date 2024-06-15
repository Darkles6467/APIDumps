#pragma once

#include "BaseDeclarations.h"
struct PrimitiveComponent_eventComponentEndOverlapSignature_Parms
{
	char __padding[0x18L];
	int& OtherBodyIndexField() { return *GetNativePointerField<int*>(this, "PrimitiveComponent_eventComponentEndOverlapSignature_Parms.OtherBodyIndex"); }
};

