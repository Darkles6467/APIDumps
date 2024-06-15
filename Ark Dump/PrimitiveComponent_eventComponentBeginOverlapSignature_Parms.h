#pragma once

#include "BaseDeclarations.h"
struct PrimitiveComponent_eventComponentBeginOverlapSignature_Parms
{
	char __padding[0xa0L];
	int& OtherBodyIndexField() { return *GetNativePointerField<int*>(this, "PrimitiveComponent_eventComponentBeginOverlapSignature_Parms.OtherBodyIndex"); }
	bool& bFromSweepField() { return *GetNativePointerField<bool*>(this, "PrimitiveComponent_eventComponentBeginOverlapSignature_Parms.bFromSweep"); }
	FHitResult& SweepResultField() { return *GetNativePointerField<FHitResult*>(this, "PrimitiveComponent_eventComponentBeginOverlapSignature_Parms.SweepResult"); }
};

