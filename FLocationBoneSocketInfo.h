#pragma once

#include "BaseDeclarations.h"
struct FLocationBoneSocketInfo
{
	char __padding[0x14L];
	FName& BoneSocketNameField() { return *GetNativePointerField<FName*>(this, "FLocationBoneSocketInfo.BoneSocketName"); }
	FVector& OffsetField() { return *GetNativePointerField<FVector*>(this, "FLocationBoneSocketInfo.Offset"); }

	// Functions

};

