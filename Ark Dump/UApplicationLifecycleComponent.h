#pragma once

#include "BaseDeclarations.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UApplicationLifecycleComponent : UActorComponent
{
	char __padding[0x50L];

	// Functions

	void OnRegister() { NativeCall<void>(this, "UApplicationLifecycleComponent.OnRegister"); }
	void OnUnregister() { NativeCall<void>(this, "UApplicationLifecycleComponent.OnUnregister"); }
};

