#pragma once

#include "BaseDeclarations.h"
struct PrimitiveComponent_eventComponentEndTouchOverSignature_Parms
{
	char __padding[0x10L];
	TEnumAsByte<enum ETouchIndex::Type>& FingerIndexField() { return *GetNativePointerField<TEnumAsByte<enum ETouchIndex::Type>*>(this, "PrimitiveComponent_eventComponentEndTouchOverSignature_Parms.FingerIndex"); }
};

