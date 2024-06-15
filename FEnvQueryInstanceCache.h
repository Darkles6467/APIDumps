#pragma once

#include "BaseDeclarations.h"
struct FEnvQueryInstanceCache
{
	char __padding[0x150L];
	TWeakObjectPtr<UEnvQuery>& TemplateField() { return *GetNativePointerField<TWeakObjectPtr<UEnvQuery>*>(this, "FEnvQueryInstanceCache.Template"); }
	FEnvQueryInstance& InstanceField() { return *GetNativePointerField<FEnvQueryInstance*>(this, "FEnvQueryInstanceCache.Instance"); }
};

