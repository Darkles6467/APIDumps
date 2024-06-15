#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "UEnvQueryContext.h"

struct UEnvQueryTypes : UObject
{

	// Functions

	static FString * DescribeBoolParam(FString * result, const FEnvBoolParam * Param) { return NativeCall<FString *, FString *, const FEnvBoolParam *>(nullptr, "UEnvQueryTypes.DescribeBoolParam", result, Param); }
	static FText * DescribeContext(FText * result, TSubclassOf<UEnvQueryContext> ContextClass) { return NativeCall<FText *, FText *, TSubclassOf<UEnvQueryContext>>(nullptr, "UEnvQueryTypes.DescribeContext", result, ContextClass); }
	static FString * DescribeFloatParam(FString * result, const FEnvFloatParam * Param) { return NativeCall<FString *, FString *, const FEnvFloatParam *>(nullptr, "UEnvQueryTypes.DescribeFloatParam", result, Param); }
	static FText * GetShortTypeName(FText * result, UObject * Ob) { return NativeCall<FText *, FText *, UObject *>(nullptr, "UEnvQueryTypes.GetShortTypeName", result, Ob); }
};

