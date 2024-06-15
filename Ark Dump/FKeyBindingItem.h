#pragma once

#include "BaseDeclarations.h"
struct FKeyBindingItem
{
	char __padding[0x30L];
	FName& WidgetNameField() { return *GetNativePointerField<FName*>(this, "FKeyBindingItem.WidgetName"); }
	FString& ActionNameField() { return *GetNativePointerField<FString*>(this, "FKeyBindingItem.ActionName"); }
	float& ScaleField() { return *GetNativePointerField<float*>(this, "FKeyBindingItem.Scale"); }
	UKeyInputWidget * AssignedWidgetField() { return GetNativePointerField<UKeyInputWidget *>(this, "FKeyBindingItem.AssignedWidget"); }

	// Functions

	FKeyBindingItem * operator=(const FKeyBindingItem * __that) { return NativeCall<FKeyBindingItem *, const FKeyBindingItem *>(this, "FKeyBindingItem.operator=", __that); }
};

