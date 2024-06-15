#pragma once

#include "BaseDeclarations.h"
#include "UDataAsset.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UDinoSetupDataAsset : UDataAsset
{
	char __padding[0xf0L];
	FDinoSetup& DinoSetupField() { return *GetNativePointerField<FDinoSetup*>(this, "UDinoSetupDataAsset.DinoSetup"); }

	// Functions

};

