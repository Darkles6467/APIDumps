#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FObjectReader.h"

struct UObjectSerializer : UObject
{

	// Functions

	static bool DeSerializeObject(FObjectReader Reader, UWorld * World, UObject * DeSerializedObject, FString OuterNameInMap, UObject * ForcedOuter) { return NativeCall<bool, FObjectReader, UWorld *, UObject *, FString, UObject *>(nullptr, "UObjectSerializer.DeSerializeObject", Reader, World, DeSerializedObject, OuterNameInMap, ForcedOuter); }
	static void SerializeObject(FObjectWriter * Writer, UObject * Object) { NativeCall<void, FObjectWriter *, UObject *>(nullptr, "UObjectSerializer.SerializeObject", Writer, Object); }
};

