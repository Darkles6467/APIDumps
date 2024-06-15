#pragma once

#include "BaseDeclarations.h"
struct FLifetimeProperty
{
	char __padding[0x8L];
	unsigned __int16& RepIndexField() { return *GetNativePointerField<unsigned __int16*>(this, "FLifetimeProperty.RepIndex"); }
	ELifetimeCondition& ConditionField() { return *GetNativePointerField<ELifetimeCondition*>(this, "FLifetimeProperty.Condition"); }

	// Functions

	bool operator==(const FLifetimeProperty * Other) { return NativeCall<bool, const FLifetimeProperty *>(this, "FLifetimeProperty.operator==", Other); }
};

