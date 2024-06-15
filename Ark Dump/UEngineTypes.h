#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UEngineTypes : UObject
{

	// Functions

	static ECollisionChannel ConvertToCollisionChannel(EObjectTypeQuery ObjectType) { return NativeCall<ECollisionChannel, EObjectTypeQuery>(nullptr, "UEngineTypes.ConvertToCollisionChannel", ObjectType); }
	static ECollisionChannel ConvertToCollisionChannel(ETraceTypeQuery TraceType) { return NativeCall<ECollisionChannel, ETraceTypeQuery>(nullptr, "UEngineTypes.ConvertToCollisionChannel", TraceType); }
	static EObjectTypeQuery ConvertToObjectType(ECollisionChannel CollisionChannel) { return NativeCall<EObjectTypeQuery, ECollisionChannel>(nullptr, "UEngineTypes.ConvertToObjectType", CollisionChannel); }
};

