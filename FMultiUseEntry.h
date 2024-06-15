#pragma once

#include "BaseDeclarations.h"
struct FMultiUseEntry
{
	char __padding[0x48L];
	FString& UseStringField() { return *GetNativePointerField<FString*>(this, "FMultiUseEntry.UseString"); }
	int& UseIndexField() { return *GetNativePointerField<int*>(this, "FMultiUseEntry.UseIndex"); }
	int& PriorityField() { return *GetNativePointerField<int*>(this, "FMultiUseEntry.Priority"); }
	int& WheelCategoryField() { return *GetNativePointerField<int*>(this, "FMultiUseEntry.WheelCategory"); }
	FColor& DisableUseColorField() { return *GetNativePointerField<FColor*>(this, "FMultiUseEntry.DisableUseColor"); }
	FColor& UseTextColorField() { return *GetNativePointerField<FColor*>(this, "FMultiUseEntry.UseTextColor"); }
	float& EntryActivationTimerField() { return *GetNativePointerField<float*>(this, "FMultiUseEntry.EntryActivationTimer"); }
	float& DefaultEntryActivationTimerField() { return *GetNativePointerField<float*>(this, "FMultiUseEntry.DefaultEntryActivationTimer"); }
	int& UseInventoryButtonStyleOverrideIndexField() { return *GetNativePointerField<int*>(this, "FMultiUseEntry.UseInventoryButtonStyleOverrideIndex"); }
	int& AdditionalButtonsIndexField() { return *GetNativePointerField<int*>(this, "FMultiUseEntry.AdditionalButtonsIndex"); }

	// Functions

	void operator=(const FMultiUseEntry * InVal) { NativeCall<void, const FMultiUseEntry *>(this, "FMultiUseEntry.operator=", InVal); }
};

