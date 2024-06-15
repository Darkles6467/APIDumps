#pragma once

#include "BaseDeclarations.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMissionRequirementEntryWidget : UUserWidget
{
	char __padding[0x20L];
	FString& DisplayTextField() { return *GetNativePointerField<FString*>(this, "UMissionRequirementEntryWidget.DisplayText"); }
	FName& CustomTagField() { return *GetNativePointerField<FName*>(this, "UMissionRequirementEntryWidget.CustomTag"); }
	UTextBlock * DisplayTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UMissionRequirementEntryWidget.DisplayTextBlock"); }

	// Functions

	void Initialize() { NativeCall<void>(this, "UMissionRequirementEntryWidget.Initialize"); }
	void SetCustomTag(FName Tag) { NativeCall<void, FName>(this, "UMissionRequirementEntryWidget.SetCustomTag", Tag); }
	void SetDisplayText(FString text) { NativeCall<void, FString>(this, "UMissionRequirementEntryWidget.SetDisplayText", text); }
};

