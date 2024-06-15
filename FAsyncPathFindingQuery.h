#pragma once

#include "BaseDeclarations.h"
struct FPathFindingQuery
{
	char __padding[0x50L];
	FVector& StartLocationField() { return *GetNativePointerField<FVector*>(this, "FPathFindingQuery.StartLocation"); }
	FVector& EndLocationField() { return *GetNativePointerField<FVector*>(this, "FPathFindingQuery.EndLocation"); }
	int& NavDataFlagsField() { return *GetNativePointerField<int*>(this, "FPathFindingQuery.NavDataFlags"); }

	// Functions

};

struct FAsyncPathFindingQuery : FPathFindingQuery
{
	char __padding[0x30L];
	const unsigned int& QueryIDField() { return *GetNativePointerField<const unsigned int*>(this, "FAsyncPathFindingQuery.QueryID"); }
	const TEnumAsByte<enum EPathFindingMode::Type>& ModeField() { return *GetNativePointerField<const TEnumAsByte<enum EPathFindingMode::Type>*>(this, "FAsyncPathFindingQuery.Mode"); }
	FPathFindingResult& ResultField() { return *GetNativePointerField<FPathFindingResult*>(this, "FAsyncPathFindingQuery.Result"); }

	// Functions

};

