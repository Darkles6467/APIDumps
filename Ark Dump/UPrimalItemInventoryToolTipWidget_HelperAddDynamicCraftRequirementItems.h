#pragma once

#include "BaseDeclarations.h"
struct UPrimalItemInventoryToolTipWidget_HelperAddDynamicCraftRequirementItems
{
	char __padding[0x20L];
	TArray<UTextBlock *> * _textBlocksField() { return GetNativePointerField<TArray<UTextBlock *> *>(this, "UPrimalItemInventoryToolTipWidget_HelperAddDynamicCraftRequirementItems._textBlocks"); }
	TArray<UImage *> * _iconBlocksField() { return GetNativePointerField<TArray<UImage *> *>(this, "UPrimalItemInventoryToolTipWidget_HelperAddDynamicCraftRequirementItems._iconBlocks"); }
	int& _currentIndexField() { return *GetNativePointerField<int*>(this, "UPrimalItemInventoryToolTipWidget_HelperAddDynamicCraftRequirementItems._currentIndex"); }
	float& _groupFrequencyField() { return *GetNativePointerField<float*>(this, "UPrimalItemInventoryToolTipWidget_HelperAddDynamicCraftRequirementItems._groupFrequency"); }

	// Functions

	UTextBlock * AddBlockWithMaterial(const FString * str, UTexture2D * iconImage) { return NativeCall<UTextBlock *, const FString *, UTexture2D *>(this, "UPrimalItemInventoryToolTipWidget_HelperAddDynamicCraftRequirementItems.AddBlockWithMaterial", str, iconImage); }
	void Finish() { NativeCall<void>(this, "UPrimalItemInventoryToolTipWidget_HelperAddDynamicCraftRequirementItems.Finish"); }
};

