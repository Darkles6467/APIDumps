#pragma once

#include "BaseDeclarations.h"
#include "FJsonObject.h"
#include "FLocMetadataObject.h"

struct FInternationalizationMetaDataJsonSerializer
{

	// Functions

	static void DeserializeMetadata(const TSharedRef<FJsonObject,0> JsonObj, TSharedPtr<FLocMetadataObject,0> * OutMetaDataObj) { NativeCall<void, const TSharedRef<FJsonObject,0>, TSharedPtr<FLocMetadataObject,0> *>(nullptr, "FInternationalizationMetaDataJsonSerializer.DeserializeMetadata", JsonObj, OutMetaDataObj); }
	static void SerializeMetadata(const TSharedRef<FLocMetadataObject,0> MetaData, TSharedPtr<FJsonObject,0> * OutJsonObj) { NativeCall<void, const TSharedRef<FLocMetadataObject,0>, TSharedPtr<FJsonObject,0> *>(nullptr, "FInternationalizationMetaDataJsonSerializer.SerializeMetadata", MetaData, OutJsonObj); }
};

