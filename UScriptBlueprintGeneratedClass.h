#pragma once

#include "BaseDeclarations.h"
#include "UBlueprintGeneratedClass.h"
#include "UClass.h"
#include "UStruct.h"
#include "UField.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UScriptBlueprintGeneratedClass : UBlueprintGeneratedClass
{
	char __padding[0x30L];
	TArray<unsigned char>& ByteCodeField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "UScriptBlueprintGeneratedClass.ByteCode"); }
	FString& SourceCodeField() { return *GetNativePointerField<FString*>(this, "UScriptBlueprintGeneratedClass.SourceCode"); }

	// Functions

	void PurgeClass(bool bRecompilingOnLoad) { NativeCall<void, bool>(this, "UScriptBlueprintGeneratedClass.PurgeClass", bRecompilingOnLoad); }
};

