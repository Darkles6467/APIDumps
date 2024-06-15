#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UNiagaraScript : UObject
{
	char __padding[0x30L];
	TArray<unsigned char>& ByteCodeField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "UNiagaraScript.ByteCode"); }
	TArray<FVector4>& ConstantTableField() { return *GetNativePointerField<TArray<FVector4>*>(this, "UNiagaraScript.ConstantTable"); }
	TArray<FName>& AttributesField() { return *GetNativePointerField<TArray<FName>*>(this, "UNiagaraScript.Attributes"); }

	// Functions

};

