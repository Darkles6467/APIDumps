#pragma once

#include "BaseDeclarations.h"
struct FActorSpawnParameters
{
	char __padding[0x48L];
	FName& NameField() { return *GetNativePointerField<FName*>(this, "FActorSpawnParameters.Name"); }
	ULevel * OverrideLevelField() { return GetNativePointerField<ULevel *>(this, "FActorSpawnParameters.OverrideLevel"); }
	int& ExtraSpawnDataField() { return *GetNativePointerField<int*>(this, "FActorSpawnParameters.ExtraSpawnData"); }
	EObjectFlags& ObjectFlagsField() { return *GetNativePointerField<EObjectFlags*>(this, "FActorSpawnParameters.ObjectFlags"); }
	FName& AttachToBoneNameField() { return *GetNativePointerField<FName*>(this, "FActorSpawnParameters.AttachToBoneName"); }

	// Functions

};

