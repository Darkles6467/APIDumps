#pragma once

#include "BaseDeclarations.h"
struct Actor_eventReceiveInput_Parms
{
	char __padding[0x28L];
	FString& InputNameField() { return *GetNativePointerField<FString*>(this, "Actor_eventReceiveInput_Parms.InputName"); }
	float& ValueField() { return *GetNativePointerField<float*>(this, "Actor_eventReceiveInput_Parms.Value"); }
	FVector& VectorValueField() { return *GetNativePointerField<FVector*>(this, "Actor_eventReceiveInput_Parms.VectorValue"); }
	bool& bStartedField() { return *GetNativePointerField<bool*>(this, "Actor_eventReceiveInput_Parms.bStarted"); }
	bool& bEndedField() { return *GetNativePointerField<bool*>(this, "Actor_eventReceiveInput_Parms.bEnded"); }
};

