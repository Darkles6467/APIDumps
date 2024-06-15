#pragma once

#include "BaseDeclarations.h"
#include "UBlueprint.h"
#include "UBlueprintCore.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UScriptBlueprint : UBlueprint
{
	char __padding[0x40L];
	FString& SourceFilePathField() { return *GetNativePointerField<FString*>(this, "UScriptBlueprint.SourceFilePath"); }
	FString& SourceFileTimestampField() { return *GetNativePointerField<FString*>(this, "UScriptBlueprint.SourceFileTimestamp"); }
	TArray<unsigned char>& ByteCodeField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "UScriptBlueprint.ByteCode"); }
	FString& SourceCodeField() { return *GetNativePointerField<FString*>(this, "UScriptBlueprint.SourceCode"); }

	// Functions

};

