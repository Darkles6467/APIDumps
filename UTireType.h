#pragma once

#include "BaseDeclarations.h"
#include "UDataAsset.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UTireType : UDataAsset
{
	char __padding[0x8L];
	float& FrictionScaleField() { return *GetNativePointerField<float*>(this, "UTireType.FrictionScale"); }
	unsigned int& TireTypeIDField() { return *GetNativePointerField<unsigned int*>(this, "UTireType.TireTypeID"); }

	// Functions

	void BeginDestroy() { NativeCall<void>(this, "UTireType.BeginDestroy"); }
	void PostInitProperties() { NativeCall<void>(this, "UTireType.PostInitProperties"); }
};

