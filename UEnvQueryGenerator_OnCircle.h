#pragma once

#include "BaseDeclarations.h"
#include "UEnvQueryGenerator_ProjectedPoints.h"
#include "UEnvQueryGenerator.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UEnvQueryGenerator_OnCircle : UEnvQueryGenerator_ProjectedPoints
{
	char __padding[0x80L];
	FEnvFloatParam& RadiusField() { return *GetNativePointerField<FEnvFloatParam*>(this, "UEnvQueryGenerator_OnCircle.Radius"); }
	FEnvFloatParam& ItemSpacingField() { return *GetNativePointerField<FEnvFloatParam*>(this, "UEnvQueryGenerator_OnCircle.ItemSpacing"); }
	FEnvDirection& ArcDirectionField() { return *GetNativePointerField<FEnvDirection*>(this, "UEnvQueryGenerator_OnCircle.ArcDirection"); }
	FEnvFloatParam& AngleField() { return *GetNativePointerField<FEnvFloatParam*>(this, "UEnvQueryGenerator_OnCircle.Angle"); }
	float& AngleRadiansField() { return *GetNativePointerField<float*>(this, "UEnvQueryGenerator_OnCircle.AngleRadians"); }
	FEnvTraceData& TraceDataField() { return *GetNativePointerField<FEnvTraceData*>(this, "UEnvQueryGenerator_OnCircle.TraceData"); }

	// Functions

	FVector * CalcDirection(FVector * result, FEnvQueryInstance * QueryInstance) { return NativeCall<FVector *, FVector *, FEnvQueryInstance *>(this, "UEnvQueryGenerator_OnCircle.CalcDirection", result, QueryInstance); }
	void GenerateItems(FEnvQueryInstance * QueryInstance) { NativeCall<void, FEnvQueryInstance *>(this, "UEnvQueryGenerator_OnCircle.GenerateItems", QueryInstance); }
	FText * GetDescriptionDetails(FText * result) { return NativeCall<FText *, FText *>(this, "UEnvQueryGenerator_OnCircle.GetDescriptionDetails", result); }
	FText * GetDescriptionTitle(FText * result) { return NativeCall<FText *, FText *>(this, "UEnvQueryGenerator_OnCircle.GetDescriptionTitle", result); }
	void PostLoad() { NativeCall<void>(this, "UEnvQueryGenerator_OnCircle.PostLoad"); }
};

