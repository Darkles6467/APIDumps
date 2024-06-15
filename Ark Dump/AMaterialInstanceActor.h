#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct AMaterialInstanceActor : AActor
{
	char __padding[0x10L];

	// Functions

	void PostLoad() { NativeCall<void>(this, "AMaterialInstanceActor.PostLoad"); }
};

