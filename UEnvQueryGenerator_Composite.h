#pragma once

#include "BaseDeclarations.h"
#include "UEnvQueryGenerator.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UEnvQueryGenerator_Composite : UEnvQueryGenerator
{
	char __padding[0x10L];

	// Functions

	void GenerateItems(FEnvQueryInstance * QueryInstance) { NativeCall<void, FEnvQueryInstance *>(this, "UEnvQueryGenerator_Composite.GenerateItems", QueryInstance); }
	FText * GetDescriptionTitle(FText * result) { return NativeCall<FText *, FText *>(this, "UEnvQueryGenerator_Composite.GetDescriptionTitle", result); }
};

