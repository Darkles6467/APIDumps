#pragma once

#include "BaseDeclarations.h"
struct ComboBoxString_eventOnSelectionChangedEvent_Parms
{
	char __padding[0x18L];
	FString& SelectedItemField() { return *GetNativePointerField<FString*>(this, "ComboBoxString_eventOnSelectionChangedEvent_Parms.SelectedItem"); }
	TEnumAsByte<enum ESelectInfo::Type>& SelectionTypeField() { return *GetNativePointerField<TEnumAsByte<enum ESelectInfo::Type>*>(this, "ComboBoxString_eventOnSelectionChangedEvent_Parms.SelectionType"); }
};

