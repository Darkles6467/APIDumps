#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UNiagaraEffect : UObject
{
	char __padding[0x10L];
	TArray<FName>& EmittersField() { return *GetNativePointerField<TArray<FName>*>(this, "UNiagaraEffect.Emitters"); }

	// Functions

};

