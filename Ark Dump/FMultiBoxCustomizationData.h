#pragma once

#include "BaseDeclarations.h"
struct FMultiBoxCustomizationData
{
	char __padding[0x18L];
	TArray<FCustomBlockTransaction>& TransactionsField() { return *GetNativePointerField<TArray<FCustomBlockTransaction>*>(this, "FMultiBoxCustomizationData.Transactions"); }
	FName& CustomizationNameField() { return *GetNativePointerField<FName*>(this, "FMultiBoxCustomizationData.CustomizationName"); }

	// Functions

	void BlockAdded(TSharedRef<FMultiBlock const ,0> AddedBlock, int Index, const TArray<TSharedRef<FMultiBlock const ,0>> * AllBlocks) { NativeCall<void, TSharedRef<FMultiBlock const ,0>, int, const TArray<TSharedRef<FMultiBlock const ,0>> *>(this, "FMultiBoxCustomizationData.BlockAdded", AddedBlock, Index, AllBlocks); }
	void BlockRemoved(TSharedRef<FMultiBlock const ,0> RemovedBlock, int Index, const TArray<TSharedRef<FMultiBlock const ,0>> * AllBlocks) { NativeCall<void, TSharedRef<FMultiBlock const ,0>, int, const TArray<TSharedRef<FMultiBlock const ,0>> *>(this, "FMultiBoxCustomizationData.BlockRemoved", RemovedBlock, Index, AllBlocks); }
	FString * GetConfigSectionName(FString * result) { return NativeCall<FString *, FString *>(this, "FMultiBoxCustomizationData.GetConfigSectionName", result); }
	void LoadCustomizedBlocks() { NativeCall<void>(this, "FMultiBoxCustomizationData.LoadCustomizedBlocks"); }
	bool RemoveDuplicateTransaction() { return NativeCall<bool>(this, "FMultiBoxCustomizationData.RemoveDuplicateTransaction"); }
	void RemoveTransactionAt(int RemoveIndex) { NativeCall<void, int>(this, "FMultiBoxCustomizationData.RemoveTransactionAt", RemoveIndex); }
	bool RemoveUnnecessaryTransactions(const TArray<TSharedRef<FMultiBlock const ,0>> * AllBlocks) { return NativeCall<bool, const TArray<TSharedRef<FMultiBlock const ,0>> *>(this, "FMultiBoxCustomizationData.RemoveUnnecessaryTransactions", AllBlocks); }
	void SaveCustomizedBlocks() { NativeCall<void>(this, "FMultiBoxCustomizationData.SaveCustomizedBlocks"); }
};

