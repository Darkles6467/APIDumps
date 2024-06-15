#pragma once

#include "BaseDeclarations.h"
#include "UPrimalCharacterStatusComponent.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FLifetimeProperty.h"

struct UPrimalPlayerStatusComponent : UPrimalCharacterStatusComponent
{

	// Functions

	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "UPrimalPlayerStatusComponent.GetLifetimeReplicatedProps", OutLifetimeProps); }
	void InitializeComponent() { NativeCall<void>(this, "UPrimalPlayerStatusComponent.InitializeComponent"); }
};

