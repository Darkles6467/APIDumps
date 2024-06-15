#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UEnvQueryContext.h"

struct UEnvQueryTest : UObject
{
	char __padding[0x78L];
	int& TestOrderField() { return *GetNativePointerField<int*>(this, "UEnvQueryTest.TestOrder"); }
	TEnumAsByte<enum EEnvTestPurpose::Type>& TestPurposeField() { return *GetNativePointerField<TEnumAsByte<enum EEnvTestPurpose::Type>*>(this, "UEnvQueryTest.TestPurpose"); }
	TEnumAsByte<enum EEnvTestFilterType::Type>& FilterTypeField() { return *GetNativePointerField<TEnumAsByte<enum EEnvTestFilterType::Type>*>(this, "UEnvQueryTest.FilterType"); }
	FEnvBoolParam& BoolFilterField() { return *GetNativePointerField<FEnvBoolParam*>(this, "UEnvQueryTest.BoolFilter"); }
	FEnvFloatParam& FloatFilterField() { return *GetNativePointerField<FEnvFloatParam*>(this, "UEnvQueryTest.FloatFilter"); }
	FEnvFloatParam& FloatFilterMinField() { return *GetNativePointerField<FEnvFloatParam*>(this, "UEnvQueryTest.FloatFilterMin"); }
	FEnvFloatParam& FloatFilterMaxField() { return *GetNativePointerField<FEnvFloatParam*>(this, "UEnvQueryTest.FloatFilterMax"); }
	bool& bFormatUpdatedField() { return *GetNativePointerField<bool*>(this, "UEnvQueryTest.bFormatUpdated"); }
	TEnumAsByte<enum EEnvTestCondition::Type>& ConditionField() { return *GetNativePointerField<TEnumAsByte<enum EEnvTestCondition::Type>*>(this, "UEnvQueryTest.Condition"); }
	TEnumAsByte<enum EEnvTestWeight::Type>& WeightModifierField() { return *GetNativePointerField<TEnumAsByte<enum EEnvTestWeight::Type>*>(this, "UEnvQueryTest.WeightModifier"); }
	TEnumAsByte<enum EEnvTestCost::Type>& CostField() { return *GetNativePointerField<TEnumAsByte<enum EEnvTestCost::Type>*>(this, "UEnvQueryTest.Cost"); }
	TEnumAsByte<enum EEnvQueryTestClamping::Type>& ClampMinTypeField() { return *GetNativePointerField<TEnumAsByte<enum EEnvQueryTestClamping::Type>*>(this, "UEnvQueryTest.ClampMinType"); }
	TEnumAsByte<enum EEnvQueryTestClamping::Type>& ClampMaxTypeField() { return *GetNativePointerField<TEnumAsByte<enum EEnvQueryTestClamping::Type>*>(this, "UEnvQueryTest.ClampMaxType"); }
	FEnvFloatParam& ScoreClampingMinField() { return *GetNativePointerField<FEnvFloatParam*>(this, "UEnvQueryTest.ScoreClampingMin"); }
	FEnvFloatParam& ScoreClampingMaxField() { return *GetNativePointerField<FEnvFloatParam*>(this, "UEnvQueryTest.ScoreClampingMax"); }
	TEnumAsByte<enum EEnvTestScoreEquation::Type>& ScoringEquationField() { return *GetNativePointerField<TEnumAsByte<enum EEnvTestScoreEquation::Type>*>(this, "UEnvQueryTest.ScoringEquation"); }
	FEnvFloatParam& WeightField() { return *GetNativePointerField<FEnvFloatParam*>(this, "UEnvQueryTest.Weight"); }
	TSubclassOf<UEnvQueryItemType>& ValidItemTypeField() { return *GetNativePointerField<TSubclassOf<UEnvQueryItemType>*>(this, "UEnvQueryTest.ValidItemType"); }

	// Functions

	FText * DescribeBoolTestParams(FText * result, const FString * ConditionDesc) { return NativeCall<FText *, FText *, const FString *>(this, "UEnvQueryTest.DescribeBoolTestParams", result, ConditionDesc); }
	FText * DescribeFloatTestParams(FText * result) { return NativeCall<FText *, FText *>(this, "UEnvQueryTest.DescribeFloatTestParams", result); }
	FText * GetDescriptionDetails(FText * result) { return NativeCall<FText *, FText *>(this, "UEnvQueryTest.GetDescriptionDetails", result); }
	FString * GetDescriptionTitle(FString * result) { return NativeCall<FString *, FString *>(this, "UEnvQueryTest.GetDescriptionTitle", result); }
	FVector * GetItemLocation(FVector * result, FEnvQueryInstance * QueryInstance, int ItemIndex) { return NativeCall<FVector *, FVector *, FEnvQueryInstance *, int>(this, "UEnvQueryTest.GetItemLocation", result, QueryInstance, ItemIndex); }
	bool IsContextPerItem(TSubclassOf<UEnvQueryContext> CheckContext) { return NativeCall<bool, TSubclassOf<UEnvQueryContext>>(this, "UEnvQueryTest.IsContextPerItem", CheckContext); }
	void NormalizeItemScores(FEnvQueryInstance * QueryInstance) { NativeCall<void, FEnvQueryInstance *>(this, "UEnvQueryTest.NormalizeItemScores", QueryInstance); }
	void PostLoad() { NativeCall<void>(this, "UEnvQueryTest.PostLoad"); }
};

