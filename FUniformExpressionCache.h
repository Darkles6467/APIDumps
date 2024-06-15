#pragma once

#include "BaseDeclarations.h"
struct FUniformExpressionCache
{
	char __padding[0x40L];
	FLocalUniformBuffer& LocalUniformBufferField() { return *GetNativePointerField<FLocalUniformBuffer*>(this, "FUniformExpressionCache.LocalUniformBuffer"); }
	TArray<FGuid>& ParameterCollectionsField() { return *GetNativePointerField<TArray<FGuid>*>(this, "FUniformExpressionCache.ParameterCollections"); }
	bool& bUpToDateField() { return *GetNativePointerField<bool*>(this, "FUniformExpressionCache.bUpToDate"); }

	// Functions

};

