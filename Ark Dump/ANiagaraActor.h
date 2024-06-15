#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ANiagaraActor : AActor
{
	char __padding[0x8L];
	TSubobjectPtr<UNiagaraComponent>& NiagaraComponentField() { return *GetNativePointerField<TSubobjectPtr<UNiagaraComponent>*>(this, "ANiagaraActor.NiagaraComponent"); }

	// Functions

};

