#pragma once

#include "BaseDeclarations.h"
struct FEnvQueryRequest
{
	char __padding[0x68L];
	const UEnvQuery * QueryTemplateField() { return GetNativePointerField<const UEnvQuery *>(this, "FEnvQueryRequest.QueryTemplate"); }
	UWorld * WorldField() { return GetNativePointerField<UWorld *>(this, "FEnvQueryRequest.World"); }

	// Functions

};

