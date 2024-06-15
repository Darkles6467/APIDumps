#pragma once

#include "BaseDeclarations.h"
#include "FTickableGameObject.h"
#include "FTickableObjectBase.h"

struct FNavTestTickHelper : FTickableGameObject
{
	char __padding[0x8L];
	TWeakObjectPtr<ANavigationTestingActor>& OwnerField() { return *GetNativePointerField<TWeakObjectPtr<ANavigationTestingActor>*>(this, "FNavTestTickHelper.Owner"); }
};

