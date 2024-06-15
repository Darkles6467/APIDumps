#pragma once

#include "BaseDeclarations.h"
struct FCustomVersion
{
	char __padding[0x30L];
	FGuid& KeyField() { return *GetNativePointerField<FGuid*>(this, "FCustomVersion.Key"); }
	int& VersionField() { return *GetNativePointerField<int*>(this, "FCustomVersion.Version"); }
	FString& FriendlyNameField() { return *GetNativePointerField<FString*>(this, "FCustomVersion.FriendlyName"); }
	int& ReferenceCountField() { return *GetNativePointerField<int*>(this, "FCustomVersion.ReferenceCount"); }
};

