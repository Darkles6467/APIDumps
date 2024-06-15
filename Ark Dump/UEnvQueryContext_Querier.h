#pragma once

#include "BaseDeclarations.h"
#include "UEnvQueryContext.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UEnvQueryContext_Querier : UEnvQueryContext
{

	// Functions

	void ProvideContext(FEnvQueryInstance * QueryInstance, FEnvQueryContextData * ContextData) { NativeCall<void, FEnvQueryInstance *, FEnvQueryContextData *>(this, "UEnvQueryContext_Querier.ProvideContext", QueryInstance, ContextData); }
};

