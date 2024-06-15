#pragma once

#include "BaseDeclarations.h"
struct FItemCount
{
	char __padding[0x28L];
	FString& StringRefField() { return *GetNativePointerField<FString*>(this, "FItemCount.StringRef"); }
	int& StackSizeField() { return *GetNativePointerField<int*>(this, "FItemCount.StackSize"); }
	int& NumStacksField() { return *GetNativePointerField<int*>(this, "FItemCount.NumStacks"); }
	float& QualityField() { return *GetNativePointerField<float*>(this, "FItemCount.Quality"); }
	bool& bAutoEquipField() { return *GetNativePointerField<bool*>(this, "FItemCount.bAutoEquip"); }
	bool& bAutoSlotField() { return *GetNativePointerField<bool*>(this, "FItemCount.bAutoSlot"); }
	int& SlotField() { return *GetNativePointerField<int*>(this, "FItemCount.Slot"); }

	// Functions

	static FItemCount * InSlot(FItemCount * result, int Slot, const FString * StringRef, int StackSize, int NumStacks, float Quality) { return NativeCall<FItemCount *, FItemCount *, int, const FString *, int, int, float>(nullptr, "FItemCount.InSlot", result, Slot, StringRef, StackSize, NumStacks, Quality); }
};

