#pragma once

#include "BaseDeclarations.h"
struct SpinBox_eventOnSpinBoxValueCommittedEvent_Parms
{
	char __padding[0x8L];
	float& InValueField() { return *GetNativePointerField<float*>(this, "SpinBox_eventOnSpinBoxValueCommittedEvent_Parms.InValue"); }
	TEnumAsByte<enum ETextCommit::Type>& CommitMethodField() { return *GetNativePointerField<TEnumAsByte<enum ETextCommit::Type>*>(this, "SpinBox_eventOnSpinBoxValueCommittedEvent_Parms.CommitMethod"); }
};

