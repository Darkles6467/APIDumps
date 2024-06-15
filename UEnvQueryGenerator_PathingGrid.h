#pragma once

#include "BaseDeclarations.h"
#include "UEnvQueryGenerator.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UEnvQueryGenerator_PathingGrid : UEnvQueryGenerator
{
	char __padding[0x40L];
	FEnvFloatParam& MaxPathDistanceField() { return *GetNativePointerField<FEnvFloatParam*>(this, "UEnvQueryGenerator_PathingGrid.MaxPathDistance"); }
	FEnvFloatParam& DensityField() { return *GetNativePointerField<FEnvFloatParam*>(this, "UEnvQueryGenerator_PathingGrid.Density"); }
	FEnvBoolParam& PathFromContextField() { return *GetNativePointerField<FEnvBoolParam*>(this, "UEnvQueryGenerator_PathingGrid.PathFromContext"); }
	TEnumAsByte<enum EEnvQueryTrace::Type>& TraceTypeField() { return *GetNativePointerField<TEnumAsByte<enum EEnvQueryTrace::Type>*>(this, "UEnvQueryGenerator_PathingGrid.TraceType"); }

	// Functions

	void FindNodeRefsInPathDistance(const ARecastNavMesh * NavMesh, const FVector * ContextLocation, float InMaxPathDistance, bool bPathFromContext, TArray<unsigned __int64> * NodeRefs, FBox * NodeRefsBounds) { NativeCall<void, const ARecastNavMesh *, const FVector *, float, bool, TArray<unsigned __int64> *, FBox *>(this, "UEnvQueryGenerator_PathingGrid.FindNodeRefsInPathDistance", NavMesh, ContextLocation, InMaxPathDistance, bPathFromContext, NodeRefs, NodeRefsBounds); }
	void GenerateItems(FEnvQueryInstance * QueryInstance) { NativeCall<void, FEnvQueryInstance *>(this, "UEnvQueryGenerator_PathingGrid.GenerateItems", QueryInstance); }
	FText * GetDescriptionDetails(FText * result) { return NativeCall<FText *, FText *>(this, "UEnvQueryGenerator_PathingGrid.GetDescriptionDetails", result); }
	FText * GetDescriptionTitle(FText * result) { return NativeCall<FText *, FText *>(this, "UEnvQueryGenerator_PathingGrid.GetDescriptionTitle", result); }
};

