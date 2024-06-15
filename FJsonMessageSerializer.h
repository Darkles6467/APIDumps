#pragma once

#include "BaseDeclarations.h"
#include "ISerializeMessages.h"
#include "FMessageContext.h"

struct FJsonMessageSerializer : ISerializeMessages
{

	// Functions

	bool DeserializeMessage(FArchive * Archive, TSharedRef<IMutableMessageContext,1> * OutContext) { return NativeCall<bool, FArchive *, TSharedRef<IMutableMessageContext,1> *>(this, "FJsonMessageSerializer.DeserializeMessage", Archive, OutContext); }
	bool DeserializeStruct(TSharedRef<IMutableMessageContext,1> * OutContext, const TSharedRef<TJsonReader<unsigned short>,0> * Reader) { return NativeCall<bool, TSharedRef<IMutableMessageContext,1> *, const TSharedRef<TJsonReader<unsigned short>,0> *>(this, "FJsonMessageSerializer.DeserializeStruct", OutContext, Reader); }
	bool SerializeMessage(const TSharedRef<IMessageContext,1> * Context, FArchive * Archive) { return NativeCall<bool, const TSharedRef<IMessageContext,1> *, FArchive *>(this, "FJsonMessageSerializer.SerializeMessage", Context, Archive); }
	bool SerializeStruct(const void * Data, UStruct * TypeInfo, const TSharedRef<TJsonWriter<unsigned short,TPrettyJsonPrintPolicy<unsigned short> >,0> * Writer) { return NativeCall<bool, const void *, UStruct *, const TSharedRef<TJsonWriter<unsigned short,TPrettyJsonPrintPolicy<unsigned short> >,0> *>(this, "FJsonMessageSerializer.SerializeStruct", Data, TypeInfo, Writer); }
};

