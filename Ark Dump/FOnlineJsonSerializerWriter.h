#pragma once

#include "BaseDeclarations.h"
#include "FOnlineJsonSerializerBase.h"

struct FOnlineJsonSerializerWriter : FOnlineJsonSerializerBase
{
	char __padding[0x10L];
	TSharedRef<TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t> >,0>& JsonWriterField() { return *GetNativePointerField<TSharedRef<TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t> >,0>*>(this, "FOnlineJsonSerializerWriter.JsonWriter"); }
};

