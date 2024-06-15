#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UAssetImportData : UObject
{
	char __padding[0x28L];
	FString& SourceFilePathField() { return *GetNativePointerField<FString*>(this, "UAssetImportData.SourceFilePath"); }
	FString& SourceFileTimestampField() { return *GetNativePointerField<FString*>(this, "UAssetImportData.SourceFileTimestamp"); }

	// Functions

};

