#pragma once

#include "BaseDeclarations.h"
struct PrimitiveComponent_eventComponentBeginTouchOverSignature_Parms
{
	char __padding[0x10L];
	TEnumAsByte<enum ETouchIndex::Type>& FingerIndexField() { return *GetNativePointerField<TEnumAsByte<enum ETouchIndex::Type>*>(this, "PrimitiveComponent_eventComponentBeginTouchOverSignature_Parms.FingerIndex"); }
};

