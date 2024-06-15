#pragma once

#include "BaseDeclarations.h"
struct INavLinkHostInterface
{
	char __padding[0x8L];

	// Functions

	bool GetNavigationLinksClasses(TArray<TSubclassOf<UNavLinkDefinition>> * OutClasses) { return NativeCall<bool, TArray<TSubclassOf<UNavLinkDefinition>> *>(this, "INavLinkHostInterface.GetNavigationLinksClasses", OutClasses); }
};

