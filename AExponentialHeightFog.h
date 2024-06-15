#pragma once

#include "BaseDeclarations.h"
#include "AInfo.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FLifetimeProperty.h"

struct AExponentialHeightFog : AInfo
{
	char __padding[0x10L];
	TSubobjectPtr<UExponentialHeightFogComponent>& ComponentField() { return *GetNativePointerField<TSubobjectPtr<UExponentialHeightFogComponent>*>(this, "AExponentialHeightFog.Component"); }

	// Functions

	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "AExponentialHeightFog.GetLifetimeReplicatedProps", OutLifetimeProps); }
	void PostInitializeComponents() { NativeCall<void>(this, "AExponentialHeightFog.PostInitializeComponents"); }
};

