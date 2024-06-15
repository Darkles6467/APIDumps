#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UEnvQueryItemType : UObject
{
	char __padding[0x8L];
	unsigned __int16& ValueSizeField() { return *GetNativePointerField<unsigned __int16*>(this, "UEnvQueryItemType.ValueSize"); }

	// Functions

	void FinishDestroy() { NativeCall<void>(this, "UEnvQueryItemType.FinishDestroy"); }
	FString * GetDescription(FString * result, const char * RawData) { return NativeCall<FString *, FString *, const char *>(this, "UEnvQueryItemType.GetDescription", result, RawData); }
};

