#pragma once

#include "BaseDeclarations.h"
#include "UEnvQueryGenerator.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UEnvQueryGenerator_ActorsOfClass : UEnvQueryGenerator
{
	char __padding[0x20L];
	FEnvFloatParam& RadiusField() { return *GetNativePointerField<FEnvFloatParam*>(this, "UEnvQueryGenerator_ActorsOfClass.Radius"); }

	// Functions

	void GenerateItems(FEnvQueryInstance * QueryInstance) { NativeCall<void, FEnvQueryInstance *>(this, "UEnvQueryGenerator_ActorsOfClass.GenerateItems", QueryInstance); }
	FText * GetDescriptionDetails(FText * result) { return NativeCall<FText *, FText *>(this, "UEnvQueryGenerator_ActorsOfClass.GetDescriptionDetails", result); }
	FText * GetDescriptionTitle(FText * result) { return NativeCall<FText *, FText *>(this, "UEnvQueryGenerator_ActorsOfClass.GetDescriptionTitle", result); }
};

