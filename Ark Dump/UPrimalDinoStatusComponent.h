#pragma once

#include "BaseDeclarations.h"
#include "UPrimalCharacterStatusComponent.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FLifetimeProperty.h"

struct UPrimalDinoStatusComponent : UPrimalCharacterStatusComponent
{

	// Functions

	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "UPrimalDinoStatusComponent.GetLifetimeReplicatedProps", OutLifetimeProps); }
};

