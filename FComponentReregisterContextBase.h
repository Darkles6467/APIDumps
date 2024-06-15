#pragma once

#include "BaseDeclarations.h"
struct FComponentReregisterContextBase
{

	// Functions

	void ReRegister(UActorComponent * InComponent, UWorld * InWorld) { NativeCall<void, UActorComponent *, UWorld *>(this, "FComponentReregisterContextBase.ReRegister", InComponent, InWorld); }
	UWorld * UnRegister(UActorComponent * InComponent) { return NativeCall<UWorld *, UActorComponent *>(this, "FComponentReregisterContextBase.UnRegister", InComponent); }
};

