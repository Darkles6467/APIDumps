#pragma once

#include "BaseDeclarations.h"
struct InputComponent_eventInputTouchHandlerDynamicSignature_Parms
{
	char __padding[0x10L];
	TEnumAsByte<enum ETouchIndex::Type>& FingerIndexField() { return *GetNativePointerField<TEnumAsByte<enum ETouchIndex::Type>*>(this, "InputComponent_eventInputTouchHandlerDynamicSignature_Parms.FingerIndex"); }
	FVector& LocationField() { return *GetNativePointerField<FVector*>(this, "InputComponent_eventInputTouchHandlerDynamicSignature_Parms.Location"); }
};

