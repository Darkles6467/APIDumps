#pragma once

#include "BaseDeclarations.h"
struct FEnvQueryResult
{
	char __padding[0x40L];
	TArray<FEnvQueryItem>& ItemsField() { return *GetNativePointerField<TArray<FEnvQueryItem>*>(this, "FEnvQueryResult.Items"); }
	TSubclassOf<UEnvQueryItemType>& ItemTypeField() { return *GetNativePointerField<TSubclassOf<UEnvQueryItemType>*>(this, "FEnvQueryResult.ItemType"); }
	TEnumAsByte<enum EEnvQueryStatus::Type>& StatusField() { return *GetNativePointerField<TEnumAsByte<enum EEnvQueryStatus::Type>*>(this, "FEnvQueryResult.Status"); }
	TArray<unsigned char>& RawDataField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FEnvQueryResult.RawData"); }
	int& OptionIndexField() { return *GetNativePointerField<int*>(this, "FEnvQueryResult.OptionIndex"); }
	int& QueryIDField() { return *GetNativePointerField<int*>(this, "FEnvQueryResult.QueryID"); }

	// Functions

};

struct FEnvQueryInstance : FEnvQueryResult
{
	char __padding[0x108L];
	FString& QueryNameField() { return *GetNativePointerField<FString*>(this, "FEnvQueryInstance.QueryName"); }
	UWorld * WorldField() { return GetNativePointerField<UWorld *>(this, "FEnvQueryInstance.World"); }
	TArray<FEnvQueryOptionInstance>& OptionsField() { return *GetNativePointerField<TArray<FEnvQueryOptionInstance>*>(this, "FEnvQueryInstance.Options"); }
	int& CurrentTestField() { return *GetNativePointerField<int*>(this, "FEnvQueryInstance.CurrentTest"); }
	int& CurrentTestStartingItemField() { return *GetNativePointerField<int*>(this, "FEnvQueryInstance.CurrentTestStartingItem"); }
	TArray<FEnvQueryItemDetails>& ItemDetailsField() { return *GetNativePointerField<TArray<FEnvQueryItemDetails>*>(this, "FEnvQueryInstance.ItemDetails"); }
	int& NumValidItemsField() { return *GetNativePointerField<int*>(this, "FEnvQueryInstance.NumValidItems"); }
	unsigned __int16& ValueSizeField() { return *GetNativePointerField<unsigned __int16*>(this, "FEnvQueryInstance.ValueSize"); }
	TEnumAsByte<enum EEnvQueryRunMode::Type>& ModeField() { return *GetNativePointerField<TEnumAsByte<enum EEnvQueryRunMode::Type>*>(this, "FEnvQueryInstance.Mode"); }
	UEnvQueryItemType_VectorBase * ItemTypeVectorCDOField() { return GetNativePointerField<UEnvQueryItemType_VectorBase *>(this, "FEnvQueryInstance.ItemTypeVectorCDO"); }
	long double& TimeLimitField() { return *GetNativePointerField<long double*>(this, "FEnvQueryInstance.TimeLimit"); }

	// Functions

	void ItemIterator(const UEnvQueryTest * QueryTest, FEnvQueryInstance * QueryInstance, int StartingItemIndex) { NativeCall<void, const UEnvQueryTest *, FEnvQueryInstance *, int>(this, "FEnvQueryInstance.ItemIterator", QueryTest, QueryInstance, StartingItemIndex); }
	void ItemIterator() { NativeCall<void>(this, "FEnvQueryInstance.ItemIterator"); }
	FEnvQueryInstance * operator=(const FEnvQueryInstance * __that) { return NativeCall<FEnvQueryInstance *, const FEnvQueryInstance *>(this, "FEnvQueryInstance.operator=", __that); }
	void ItemIterator() { NativeCall<void>(this, "FEnvQueryInstance.ItemIterator"); }
	void ExecuteOneStep(long double InTimeLimit) { NativeCall<void, long double>(this, "FEnvQueryInstance.ExecuteOneStep", InTimeLimit); }
	void FinalizeGeneration() { NativeCall<void>(this, "FEnvQueryInstance.FinalizeGeneration"); }
	void FinalizeQuery() { NativeCall<void>(this, "FEnvQueryInstance.FinalizeQuery"); }
	void FinalizeTest() { NativeCall<void>(this, "FEnvQueryInstance.FinalizeTest"); }
	void NormalizeScores() { NativeCall<void>(this, "FEnvQueryInstance.NormalizeScores"); }
	void PickBestItem() { NativeCall<void>(this, "FEnvQueryInstance.PickBestItem"); }
	void PickSingleItem(int ItemIndex) { NativeCall<void, int>(this, "FEnvQueryInstance.PickSingleItem", ItemIndex); }
	bool PrepareContext(UClass * ContextClass, FEnvQueryContextData * ContextData) { return NativeCall<bool, UClass *, FEnvQueryContextData *>(this, "FEnvQueryInstance.PrepareContext", ContextClass, ContextData); }
	bool PrepareContext(UClass * Context, TArray<AActor *> * Data) { return NativeCall<bool, UClass *, TArray<AActor *> *>(this, "FEnvQueryInstance.PrepareContext", Context, Data); }
	bool PrepareContext(UClass * Context, TArray<FRotator> * Data) { return NativeCall<bool, UClass *, TArray<FRotator> *>(this, "FEnvQueryInstance.PrepareContext", Context, Data); }
	bool PrepareContext(UClass * Context, TArray<FVector> * Data) { return NativeCall<bool, UClass *, TArray<FVector> *>(this, "FEnvQueryInstance.PrepareContext", Context, Data); }
	void SortScores() { NativeCall<void>(this, "FEnvQueryInstance.SortScores"); }
	void ItemIterator() { NativeCall<void>(this, "FEnvQueryInstance.ItemIterator"); }
};

