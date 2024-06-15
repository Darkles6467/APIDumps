#pragma once

#include "BaseDeclarations.h"
struct FSmartNameContainer
{
	char __padding[0x50L];

	// Functions

	void AddContainer(FName NewContainerName) { NativeCall<void, FName>(this, "FSmartNameContainer.AddContainer", NewContainerName); }
	FSmartNameMapping * GetContainer(FName ContainerName) { return NativeCall<FSmartNameMapping *, FName>(this, "FSmartNameContainer.GetContainer", ContainerName); }
};

