#pragma once

#include "BaseDeclarations.h"
#include "FJsonObject.h"
#include "FJsonValue.h"

struct FJsonObjectConverter
{

	// Functions

	static bool JsonAttributesToUStruct(const TMap<FString,TSharedPtr<FJsonValue,0>,FDefaultSetAllocator,TDefaultMapKeyFuncs<FString,TSharedPtr<FJsonValue,0>,0> > * JsonAttributes, const UStruct * StructDefinition, void * OutStruct, __int64 CheckFlags, __int64 SkipFlags) { return NativeCall<bool, const TMap<FString,TSharedPtr<FJsonValue,0>,FDefaultSetAllocator,TDefaultMapKeyFuncs<FString,TSharedPtr<FJsonValue,0>,0> > *, const UStruct *, void *, __int64, __int64>(nullptr, "FJsonObjectConverter.JsonAttributesToUStruct", JsonAttributes, StructDefinition, OutStruct, CheckFlags, SkipFlags); }
	static bool JsonObjectToUStruct(const TSharedRef<FJsonObject,0> * JsonObject, const UStruct * StructDefinition, void * OutStruct, __int64 CheckFlags, __int64 SkipFlags) { return NativeCall<bool, const TSharedRef<FJsonObject,0> *, const UStruct *, void *, __int64, __int64>(nullptr, "FJsonObjectConverter.JsonObjectToUStruct", JsonObject, StructDefinition, OutStruct, CheckFlags, SkipFlags); }
	static bool JsonValueToUProperty(const TSharedPtr<FJsonValue,0> JsonValue, UProperty * Property, void * OutValue, __int64 CheckFlags, __int64 SkipFlags) { return NativeCall<bool, const TSharedPtr<FJsonValue,0>, UProperty *, void *, __int64, __int64>(nullptr, "FJsonObjectConverter.JsonValueToUProperty", JsonValue, Property, OutValue, CheckFlags, SkipFlags); }
	static FString * StandardizeCase(FString * result, const FString * StringIn) { return NativeCall<FString *, FString *, const FString *>(nullptr, "FJsonObjectConverter.StandardizeCase", result, StringIn); }
	static bool UStructToJsonObject(const UStruct * StructDefinition, const void * Struct, TSharedRef<FJsonObject,0> OutJsonObject, __int64 CheckFlags, __int64 SkipFlags) { return NativeCall<bool, const UStruct *, const void *, TSharedRef<FJsonObject,0>, __int64, __int64>(nullptr, "FJsonObjectConverter.UStructToJsonObject", StructDefinition, Struct, OutJsonObject, CheckFlags, SkipFlags); }
};

