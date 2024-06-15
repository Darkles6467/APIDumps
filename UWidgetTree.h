#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UWidgetTree : UObject
{
	char __padding[0x18L];

	// Functions

	void GetChildWidgets(UWidget * Parent, TArray<UWidget *> * Widgets) { NativeCall<void, UWidget *, TArray<UWidget *> *>(this, "UWidgetTree.GetChildWidgets", Parent, Widgets); }
	void PreSave() { NativeCall<void>(this, "UWidgetTree.PreSave"); }
};

