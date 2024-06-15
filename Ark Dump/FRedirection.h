#pragma once

#include "BaseDeclarations.h"
struct FRedirection
{
	char __padding[0x40L];
	FString& PackageFilenameField() { return *GetNativePointerField<FString*>(this, "FRedirection.PackageFilename"); }
	FString& RedirectorNameField() { return *GetNativePointerField<FString*>(this, "FRedirection.RedirectorName"); }
	FString& RedirectorPackageFilenameField() { return *GetNativePointerField<FString*>(this, "FRedirection.RedirectorPackageFilename"); }
	FString& DestinationObjectNameField() { return *GetNativePointerField<FString*>(this, "FRedirection.DestinationObjectName"); }
};

