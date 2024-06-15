#pragma once

#include "BaseDeclarations.h"
#include "UEnvQueryTest.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "UEnvQueryContext.h"

struct UEnvQueryTest_Dot : UEnvQueryTest
{
	char __padding[0x40L];
	FEnvDirection& LineAField() { return *GetNativePointerField<FEnvDirection*>(this, "UEnvQueryTest_Dot.LineA"); }
	FEnvDirection& LineBField() { return *GetNativePointerField<FEnvDirection*>(this, "UEnvQueryTest_Dot.LineB"); }

	// Functions

	void GatherLineDirections(TArray<FVector> * Directions, FEnvQueryInstance * QueryInstance, const FRotator * ItemRotation, TSubclassOf<UEnvQueryContext> LineDirection) { NativeCall<void, TArray<FVector> *, FEnvQueryInstance *, const FRotator *, TSubclassOf<UEnvQueryContext>>(this, "UEnvQueryTest_Dot.GatherLineDirections", Directions, QueryInstance, ItemRotation, LineDirection); }
	void GatherLineDirections(TArray<FVector> * Directions, FEnvQueryInstance * QueryInstance, const FVector * ItemLocation, TSubclassOf<UEnvQueryContext> LineFrom, TSubclassOf<UEnvQueryContext> LineTo) { NativeCall<void, TArray<FVector> *, FEnvQueryInstance *, const FVector *, TSubclassOf<UEnvQueryContext>, TSubclassOf<UEnvQueryContext>>(this, "UEnvQueryTest_Dot.GatherLineDirections", Directions, QueryInstance, ItemLocation, LineFrom, LineTo); }
	FText * GetDescriptionDetails(FText * result) { return NativeCall<FText *, FText *>(this, "UEnvQueryTest_Dot.GetDescriptionDetails", result); }
	FString * GetDescriptionTitle(FString * result) { return NativeCall<FString *, FString *>(this, "UEnvQueryTest_Dot.GetDescriptionTitle", result); }
	bool RequiresPerItemUpdates(TSubclassOf<UEnvQueryContext> LineFrom, TSubclassOf<UEnvQueryContext> LineTo, TSubclassOf<UEnvQueryContext> LineDirection, bool bUseDirectionContext) { return NativeCall<bool, TSubclassOf<UEnvQueryContext>, TSubclassOf<UEnvQueryContext>, TSubclassOf<UEnvQueryContext>, bool>(this, "UEnvQueryTest_Dot.RequiresPerItemUpdates", LineFrom, LineTo, LineDirection, bUseDirectionContext); }
	void RunTest(FEnvQueryInstance * QueryInstance) { NativeCall<void, FEnvQueryInstance *>(this, "UEnvQueryTest_Dot.RunTest", QueryInstance); }
};

