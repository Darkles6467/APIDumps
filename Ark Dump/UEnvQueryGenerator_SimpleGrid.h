#pragma once

#include "BaseDeclarations.h"
#include "UEnvQueryGenerator_ProjectedPoints.h"
#include "UEnvQueryGenerator.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UEnvQueryGenerator_SimpleGrid : UEnvQueryGenerator_ProjectedPoints
{
	char __padding[0x20L];
	FEnvFloatParam& RadiusField() { return *GetNativePointerField<FEnvFloatParam*>(this, "UEnvQueryGenerator_SimpleGrid.Radius"); }
	FEnvFloatParam& DensityField() { return *GetNativePointerField<FEnvFloatParam*>(this, "UEnvQueryGenerator_SimpleGrid.Density"); }

	// Functions

	void GenerateItems(FEnvQueryInstance * QueryInstance) { NativeCall<void, FEnvQueryInstance *>(this, "UEnvQueryGenerator_SimpleGrid.GenerateItems", QueryInstance); }
	FText * GetDescriptionDetails(FText * result) { return NativeCall<FText *, FText *>(this, "UEnvQueryGenerator_SimpleGrid.GetDescriptionDetails", result); }
	FText * GetDescriptionTitle(FText * result) { return NativeCall<FText *, FText *>(this, "UEnvQueryGenerator_SimpleGrid.GetDescriptionTitle", result); }
};

