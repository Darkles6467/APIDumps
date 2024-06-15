#pragma once

#include "BaseDeclarations.h"
#include "UBlueprintGeneratedClass.h"
#include "UClass.h"
#include "UStruct.h"
#include "UField.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UWidgetBlueprintGeneratedClass : UBlueprintGeneratedClass
{
	char __padding[0x38L];

	// Functions

	void InitializeWidget(UUserWidget * UserWidget) { NativeCall<void, UUserWidget *>(this, "UWidgetBlueprintGeneratedClass.InitializeWidget", UserWidget); }
	void Link(FArchive * Ar, bool bRelinkExistingProperties) { NativeCall<void, FArchive *, bool>(this, "UWidgetBlueprintGeneratedClass.Link", Ar, bRelinkExistingProperties); }
	void PostInitProperties() { NativeCall<void>(this, "UWidgetBlueprintGeneratedClass.PostInitProperties"); }
};

