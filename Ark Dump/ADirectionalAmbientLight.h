#pragma once

#include "BaseDeclarations.h"
#include "ALight.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ADirectionalAmbientLight : ALight
{

	// Functions

	void PostLoad() { NativeCall<void>(this, "ADirectionalAmbientLight.PostLoad"); }
};

