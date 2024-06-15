#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct USubsurfaceProfile : UObject
{
	char __padding[0x28L];
	FSubsurfaceProfileStruct& SettingsField() { return *GetNativePointerField<FSubsurfaceProfileStruct*>(this, "USubsurfaceProfile.Settings"); }

	// Functions

	void BeginDestroy() { NativeCall<void>(this, "USubsurfaceProfile.BeginDestroy"); }
};

