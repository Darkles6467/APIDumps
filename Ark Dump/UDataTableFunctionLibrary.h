#pragma once

#include "BaseDeclarations.h"
#include "UBlueprintFunctionLibrary.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UDataTableFunctionLibrary : UBlueprintFunctionLibrary
{

	// Functions

	static void EvaluateCurveTableRow(UCurveTable * CurveTable, FName RowName, float InXY, TEnumAsByte<enum EEvaluateCurveTableResult::Type> * OutResult, float * OutXY) { NativeCall<void, UCurveTable *, FName, float, TEnumAsByte<enum EEvaluateCurveTableResult::Type> *, float *>(nullptr, "UDataTableFunctionLibrary.EvaluateCurveTableRow", CurveTable, RowName, InXY, OutResult, OutXY); }
	static bool Generic_GetDataTableRowFromName(UDataTable * Table, FName RowName, void * OutRowPtr) { return NativeCall<bool, UDataTable *, FName, void *>(nullptr, "UDataTableFunctionLibrary.Generic_GetDataTableRowFromName", Table, RowName, OutRowPtr); }
};

