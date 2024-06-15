#pragma once

#include "BaseDeclarations.h"
struct UDinoListItemTooltip_HelperAddDynamicTextblockItems
{
	char __padding[0x18L];
	TArray<UTextBlock *> * _blocksField() { return GetNativePointerField<TArray<UTextBlock *> *>(this, "UDinoListItemTooltip_HelperAddDynamicTextblockItems._blocks"); }
	int& _currentIndexField() { return *GetNativePointerField<int*>(this, "UDinoListItemTooltip_HelperAddDynamicTextblockItems._currentIndex"); }
	float& _groupFrequencyField() { return *GetNativePointerField<float*>(this, "UDinoListItemTooltip_HelperAddDynamicTextblockItems._groupFrequency"); }

	// Functions

	UTextBlock * AddBlock(const FString * str) { return NativeCall<UTextBlock *, const FString *>(this, "UDinoListItemTooltip_HelperAddDynamicTextblockItems.AddBlock", str); }
	void Finish() { NativeCall<void>(this, "UDinoListItemTooltip_HelperAddDynamicTextblockItems.Finish"); }
};

