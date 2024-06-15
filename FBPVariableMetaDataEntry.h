#pragma once

#include "BaseDeclarations.h"
struct FBPVariableMetaDataEntry
{
	char __padding[0x18L];
	FName& DataKeyField() { return *GetNativePointerField<FName*>(this, "FBPVariableMetaDataEntry.DataKey"); }
	FString& DataValueField() { return *GetNativePointerField<FString*>(this, "FBPVariableMetaDataEntry.DataValue"); }

	// Functions

};

