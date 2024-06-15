#pragma once

#include "BaseDeclarations.h"
struct UPrimalItemInventoryToolTipWidget_HelperAddDynamicTextblockItems
{
	char __padding[0x18L];
	TArray<UTextBlock *> * _blocksField() { return GetNativePointerField<TArray<UTextBlock *> *>(this, "UPrimalItemInventoryToolTipWidget_HelperAddDynamicTextblockItems._blocks"); }
	int& _currentIndexField() { return *GetNativePointerField<int*>(this, "UPrimalItemInventoryToolTipWidget_HelperAddDynamicTextblockItems._currentIndex"); }
	float& _groupFrequencyField() { return *GetNativePointerField<float*>(this, "UPrimalItemInventoryToolTipWidget_HelperAddDynamicTextblockItems._groupFrequency"); }

	// Functions

	void Finish() { NativeCall<void>(this, "UPrimalItemInventoryToolTipWidget_HelperAddDynamicTextblockItems.Finish"); }
};

