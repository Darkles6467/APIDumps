#pragma once

#include "BaseDeclarations.h"
#include "AInfo.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FLifetimeProperty.h"

struct ASkyLight : AInfo
{
	char __padding[0x10L];
	TSubobjectPtr<USkyLightComponent>& LightComponentField() { return *GetNativePointerField<TSubobjectPtr<USkyLightComponent>*>(this, "ASkyLight.LightComponent"); }

	// Functions

	void OnRep_bEnabled() { NativeCall<void>(this, "ASkyLight.OnRep_bEnabled"); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "ASkyLight.GetLifetimeReplicatedProps", OutLifetimeProps); }
};

