#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UStructureStatWidget : UPrimalUI
{
	char __padding[0x70L];
	FText& StatNameField() { return *GetNativePointerField<FText*>(this, "UStructureStatWidget.StatName"); }
	FName& StatTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UStructureStatWidget.StatTextBlockName"); }
	FName& StatValueBlockNameField() { return *GetNativePointerField<FName*>(this, "UStructureStatWidget.StatValueBlockName"); }
	FName& StatImageNameField() { return *GetNativePointerField<FName*>(this, "UStructureStatWidget.StatImageName"); }
	FName& StatBarNameField() { return *GetNativePointerField<FName*>(this, "UStructureStatWidget.StatBarName"); }
	UProgressBar * StatBarField() { return GetNativePointerField<UProgressBar *>(this, "UStructureStatWidget.StatBar"); }
	UTextBlock * StatTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UStructureStatWidget.StatTextBlock"); }
	UTextBlock * StatValueBlockField() { return GetNativePointerField<UTextBlock *>(this, "UStructureStatWidget.StatValueBlock"); }
	UImage * StatImageField() { return GetNativePointerField<UImage *>(this, "UStructureStatWidget.StatImage"); }

	// Functions

	void SynchronizeProperties() { NativeCall<void>(this, "UStructureStatWidget.SynchronizeProperties"); }
	void UpdateStat(const FString * StatValue, const float BarPercentage) { NativeCall<void, const FString *, const float>(this, "UStructureStatWidget.UpdateStat", StatValue, BarPercentage); }
};

